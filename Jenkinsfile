pipeline {
    options{
        timestamps()
        buildDiscarder(logRotator(numToKeepStr: '25'))
    }
    environment {
        DEFAULT_NOTIF_EMAIL = "bartlomiej.buczek@nordicsemi.no"
    }
    parameters {
        string(name: 'nrfx_build_branch', defaultValue: "master", description: 'Branch for nrfx_build repository')
        string(name: 'nrfx_verification_branch', defaultValue: "master", description: 'Branch for nrfx_verification repository')
        string(name: 'filtered_unittests', defaultValue: "", description: 'Unit tests filtered from execution (space separated)')
        string(name: 'filtered_ontargettests', defaultValue: "", description: 'On-target tests filtered from execution (space separated)')
        booleanParam(name: 'NRFX_BUILD_TYPE_DEBUG', defaultValue: false, description: 'Set NRFX_BUILD_TYPE to debug')
    }
    agent {
        docker {
            label 'linux && build-node && !nrfx-coverity'
            image "docker-dtr.nordicsemi.no/babu/ncs-riscv-wine:2.7.0"
            args ' --privileged -e HOME=/home/buran_ci'
        }
    }
    stages{
        stage('Run dependent jobs') {
            steps {
                script {
                    currentBuild.setDisplayName("(#${BUILD_NUMBER}) [nrfx]: ${env.BRANCH_NAME}, [nrfx-build]: ${params.nrfx_build_branch}, [nrfx_verification]: ${params.nrfx_verification_branch}")
                    if (env.CHANGE_BRANCH != null && env.CHANGE_BRANCH != env.BRANCH_NAME) {
                        nrfx_branch = env.CHANGE_BRANCH
                        nrfx_target_branch = env.CHANGE_TARGET
                    }
                    else {
                        nrfx_branch = env.BRANCH_NAME
                        nrfx_target_branch = ''
                    }
                    nrfx_build_branch = params.nrfx_build_branch.replaceAll('/','%2F')
                    nrfx_verification_branch = params.nrfx_verification_branch.replaceAll('/','%2F')
                    echo "[nrfx branch]: ${nrfx_branch}"
                    echo "[nrfx target branch]: ${nrfx_target_branch}"
                    echo "[nrfx-build branch]: ${nrfx_build_branch}"
                    echo "[nrfx-verification branch]: ${nrfx_verification_branch}"

                    def job_name = "NRFX/nrfx-build-runner/"
                    build job: "${job_name}${nrfx_build_branch}",
                        parameters: [string(name: 'nrfx_branch', value: nrfx_branch),
                                     string(name: 'nrfx_target_branch', value: nrfx_target_branch),
                                     string(name: 'nrfx_build_branch', value: nrfx_build_branch),
                                     string(name: 'nrfx_verification_branch', value: nrfx_verification_branch),
                                     string(name: 'filtered_unittests', value: params.filtered_unittests),
                                     string(name: 'filtered_ontargettests', value: params.filtered_ontargettests),
                                     booleanParam(name: 'NRFX_BUILD_TYPE_DEBUG', value: params.NRFX_BUILD_TYPE_DEBUG)],
                        propagate: true,
                        wait: true
                }
            }
        }
        stage('Generate documentation') {
            steps {
                script {
                    dir("doc") {
                        sh "./generate_sphinx_doc.sh"
                    }
                    if (fileExists('doc/warnings_nrfx.txt')){
                        def output_file = readFile("doc/warnings_nrfx.txt")
                        if (output_file.size() != 0) {
                            unstable 'Documentation building generated warnings.'
                        }
                    }
                    zip archive: true, dir: 'doc/html_sphinx', glob: '', zipFile: 'html_sphinx.zip'
                }
            }
        }
    }
    post {
        always {
            copyArtifacts projectName: "NRFX/nrfx-verification-unittests-gcc/${nrfx_verification_branch}", selector: lastCompleted()
            copyArtifacts projectName: "NRFX/nrfx-api-check/${nrfx_verification_branch}", selector: lastCompleted()
            copyArtifacts projectName: "NRFX/x/${nrfx_verification_branch}", selector: lastCompleted()
            copyArtifacts projectName: "NRFX/sub-on-target-power-tests/${nrfx_verification_branch}", selector: lastCompleted()
            copyArtifacts projectName: "NRFX/nrfx-coverity/${nrfx_verification_branch}", selector: lastCompleted(), target: 'work/nrfx-verification/'

            archiveArtifacts "work/nrfx-verification/outcomes/*/*"
            archiveArtifacts allowEmptyArchive: true, artifacts: "doc/warnings_nrfx.txt"
            archiveArtifacts allowEmptyArchive: true, artifacts: "work/nrfx-verification/source/tests/api/**/**/compile_result.txt"

            junit 'work/nrfx-verification/outcomes/*/*.xml'

            script {
                def result = currentBuild.currentResult
                emailext recipientProviders: [requestor()],
                    to: env.DEFAULT_NOTIF_EMAIL,
                    subject: "${result} - NRFX build ${BUILD_DISPLAY_NAME}",
                    body: """
Hello,
NRFX #${BUILD_NUMBER} build finished with result ${result}.

Used branches:
[nrfx]: ${env.BRANCH_NAME}.
[nrfx_build]: ${params.nrfx_build_branch}.
[nrfx_verification]: ${params.nrfx_verification_branch}.

Filtered tests:
Unit tests: ${params.filtered_unittests}
On-target tests: ${params.filtered_ontargettests}

Have a look at the build:
${BUILD_URL}

In case of errors in:
- api tests - check out artifact work/nrfx-verification/outcomes/results/pre-compile.log
- coverity tests - check out artifact work/nrfx-verification/outcomes/reports/coverity_test_results.xml
- on-target tests - check out artifact work/nrfx-verification/outcomes/reports/test_results.html
- on-target power tests - check out artifact work/nrfx-verification/outcomes/reports/power_test_results.html
- unit tests - check out artifacts from work/nrfx-verification/outcomes/reports/ut_results*.xml
- generate documentation stage - check out artifact doc/warnings_nrfx.txt

If you still have question please contact bartlomiej.buczek@nordicsemi.no or nikodem.kastelik@nordicsemi.no

Cheers,
Jenkins
"""
            }
        }
    }
}

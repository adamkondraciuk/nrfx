# Contributing to nrfx

Low Level team welcomes and encourages Nordic Semiconductor's employees to suggest changes and
submit patches to the project. This documentation provides guidelines on how to contribute to the repository,
request changes, and build applications and tests.

## Requesting new features

Low Level team members always do their best to analyze your suggestions or queries and respond
to your needs. No request remains unanswered.

To submit your request, check the
[Change Requests](https://nordicsemi.atlassian.net/wiki/spaces/NRFX/pages/143503256/Change+Requests) page
and fill in all required fields in the table. Requests are analyzed as soon as possible
(at the latest by the closest sprint), and corresponding tracking Jira tickets are created.

## Submitting Pull Request (PR)

Submitting changes to nrfx project consists of the two following parts:

1. PR containing your patch in the [nrfx](https://github.com/nrfconnect/nrfx) repository.
2. PR triggering the CI testplan in the [nrfx-verification](https://github.com/nrfconnect/nrfx-verification) repository.

PR to the [nrfx-verification](https://github.com/nrfconnect/nrfx-verification) repository
should contain the following separate commits, created in the following order:

1. A west manifest update.
2. Tests verifying if the brand new or extended existing functionality works as expected.

### Commit message

A commit message must meet the following criteria:
- It starts with a relevant Jira ticket number followed by a colon. If the patch does not have
a dedicated Jira ticket, use the `NRFX-NONE` prefix instead.
- Its title should not exceed 72 characters.
- For commits unrelated to manifest update, the message should contain additional description of the patch
if the commit title is not exhaustive.
- It contains the signed-off-by section at the end of the message.

Use one of the following templates for your commit messages:

- For manifest-related commits:

    ```
    [Jira ticket number or NRFX-NONE]: Update nrfx with/to have [new feature]

    Signed-off-by: [Your Full Name] <[your.email@nordicsemi.no]>
    ```

- For other commits:

    ```
    [Jira ticket number or NRFX-NONE]: [summary of change]

    [Commit message body if needed]

    Signed-off-by: [Your Full Name] <[your.email@nordicsemi.no]>
    ```

#### Commit message body

If your PR has several commits and it changes existing drivers' implementation or adds a new functionality,
add an exhaustive description for each commit. This helps reviewers to understand how the patch works
and to review it smoothly.
To create a good commit message, focus on answering the following questions:

- **What** does the patch do?
- **Why** did you choose that particular approach?

### Testing

Each PR in the nrfx-verification repository triggers the
[CI integration plan](https://jenkins-ncs.nordicsemi.no/job/NRFX/job/nrfx-new/view/change-requests/).
To rerun a CI pipeline, you can either force-push commits to PR in the nrfx-verification repository
or use a Jenkins web client.

> **Warning!**
>
> Pushing new changes to [nrfx](https://github.com/nrfconnect/nrfx) repository will not trigger a new CI build.

## Code formatting

nrfx follows the local [nrfx & npmx Coding Standard](https://nordicsemi.atlassian.net/wiki/spaces/NRFX/pages/143498798/nrfx+npmx+Coding+Standard) that is based on the
[Nordic C Coding Standard](https://nordicsemi.atlassian.net/wiki/spaces/QPDA/pages/145118051/Nordic+C+Coding+Standard).

## Investigating CI failures locally

If you want to build failing CI tests locally, check
requirements and compilation instructions described in the
[README.md](https://github.com/nrfconnect/nrfx-verification/blob/master/README.md) file.
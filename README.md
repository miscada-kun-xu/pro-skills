# Software Development Company README

## Documentation for new Interns
Provided by: Professional Skills Group5

Group members: Aihaiti Ailipaer, Kaihuai Zhang, Kaiming Xin, Kun Xu, Tingjie Cui

### Table of Contents
1. [Introduction](#Introduction)
2. [Requirements](#Requirements)
3. [Git command and Github](#Git-command-and-Github)
4. [System build](#System-build)
5. [Code testing](#Code-testing)
6. [Continuous Integration](#Continuous-Integration)
7. [References](#References)

---

### Introduction

This file will help you create a repository and manage the software build version, then test your software build and implement continuous integration (CI) for your repository.

The text below describes the work of Group 5 in the Professional Skills Code Development Coursework so that new interns could follow.

---

### Requirements

Before you begin, ensure you meet the following requirements:
- A Github account, 
- A bash shell with ssh, 
- Git installed
- Basic text editor

---

### Git command and Github

Version control could help software developer manage their build much more easily. **Github** is a useful version control tool. It has benefits like **Version Tracking, Collaboration, and Remote Access**, also Github has integration with **Continuous Integration (CI)** for test running.

#### Common Git command
##### Setup and Init: 
<code>git config --global user.name “[firstname lastname]”</code> set name for credit.

<code>git config --global user.email “[valid-email]”</code> set email address associated with history maker.

<code>git init</code> initialize an existing directory as a Git repository.

<code>git clone [url]</code> clone entire repository from a hosted location.

##### Stage and Snapshot:
<code>git status</code> shows the modified files in your working directory.

<code>git add [file]</code> add a specified file to the staging area.

<code>git commit -m “[descriptive message]”</code> submit file from staging area to repository.

##### Branch, Merge and Update
<code>git branch -a</code> list your branches.

<code>git checkout</code> switch to another branch.

<code>git merge [branch]</code> merge the specified branch’s history into the current one.

<code>git fetch [alias]</code> fetch the change in repository.

<code>git push [alias] [branch]</code> uploading a local branch to a remote repository.

<code>git pull [remote] [branch]</code> fetch changes from the remote repository and merge them with the local branch.

More Git Command can be found **[GIT CHEAT SHEET](https://education.github.com/git-cheat-sheet-education.pdf)**.

#### Instructions for repository build
1. Create a new repository and make it public to all collaborators. For example, we create a repository called **pro-skills**, with a branch called **main**
2. Add SSH keys for remote visits.
3. Use <code>git remote add origin git@github.com:miscada-kun-xu/pro-skills.git</code> to add the remote repository address locally.
4. Editing the file locally.
5. Use <code>git test.cpp</code> to add the project file to your Git staging area.
6. Use <code>git commit -m “added test.cpp”</code> submit file from staging area to repository.
7. Use <code>git push origin main</code> uploading a local branch to a remote repository.

---

### System build

In order to use the testing framework to examine the code, a testing system should be built. **CMake** could be used to complete the system build. CMake is a cross-platform open-source build tool for managing and building projects. It is configured by one or more <code>CMakeLists.txt</code> files. 

Template of <code>CMakeLists.txt</code> shows below, also the C++ standard, common source files, optional libraries (and their requirements), system dependencies, flags could be specified.

```
cmake_minimum_required(<version>)
project(<name>)
add_executable(<name> <source file>)
```
Below is the CMake example:

```
mkdir build
cd build
cmake ..
make
```

These codes tell the build system where to find its headers and source files.
#### Useful link for system build

CMake software: **[cmake](https://cmake.org)**.

Template repository: **[gray-scott-sim](www.github.com/scicomp-durham/gray-scott-sim)**.

Testing framework: **[googletest](https://github.com/google/googletest)**.

Details for using CMake under googletest: **[googletest.README](https://github.com/google/googletest/blob/main/googletest/README.md)**.

---

### Code testing 

#### Unit test
Unit Testing is a dynamic code analysis process that identifies issues by restricting the attention of a test to a small unit of code. [<sup>1</sup>](#refer-anchor-1)

#### Linting
Linting is a static code analysis process that identifies issues in the source code defining a program, like bugs and stylistic issues. [<sup>2</sup>](#refer-anchor-2)

### Continuous Integration
To ensure the stability of the repository, Continuous Integration (CI) could be created. CI could help software developers to test feature A with no influence on feature B.

Having CI active, developers could get below benefits:
- Early Detection of Issues
- Consistent Builds
- Automated Testing
- Parallelization

---

### References:

<div id="refer-anchor-1"></div>
- [1] [COMP51915 — Code Analysis & Continuous Integration](https://blackboard.durham.ac.uk/ultra/courses/_54365_1/outline/file/_1852509_1)

<div id="refer-anchor-2"></div>
- [2] [S. C. Johnson, Lint, a C program checker. Bell TelephoneLaboratories Murray Hill, 1977](http://squoze.net/UNIX/v7/files/doc/15_lint.pdf)

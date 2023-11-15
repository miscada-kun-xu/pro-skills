# Software Development Company README

## Documentation for new Interns
Provided by: Professional Skills Group5

Group members: Aihaiti Ailipaer, Kaihuai Zhang, Kaiming Xin, Kun Xu, Tingjie Cui
#### Introduction

This file will help you create a repository and manage the software build version, then test your software build and implement continuous integration (CI) for your repository.

The text below describes the work of Group 5 in the Professional Skills Code Development Coursework so that new interns could follow.


### 1. Git command and Github

**Needed: Github account, A bash shell with ssh, Git installed, Basic text editor**

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

### 2. System build

In order to use the testing framework to examine the code, a testing system should be built. **CMake** could be used to complete the system build. CMake is a cross-platform open-source build tool for managing and building projects. It is configured by one or more <code>CMakeLists.txt</code> files. Template of <code>CMakeLists.txt</code> shows below:

```
cmake_minimum_required(<version>)
project(<name>)
add_executable(<name> <source file>)
```
These codes tell the build system where to find its headers and source files.
#### Useful link for system build

CMake software: **[cmake](https://cmake.org)**.

Template repository: **[gray-scott-sim](www.github.com/scicomp-durham/gray-scott-sim)**.

Testing framework: **[googletest](https://github.com/google/googletest)**.


### 3. Code testing 


### 4. Continuous Integration (CI)





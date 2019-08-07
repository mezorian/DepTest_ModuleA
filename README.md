# DepTest_ModuleA
Dependency Test - Submodule A

[![Build Status](https://travis-ci.org/mezorian/DepTest_ModuleA.svg?branch=master)](https://travis-ci.org/mezorian/DepTest_ModuleA)

## Requirements 

 1. Installation of google repo tool
 2. Installation of qt

## Setup / Clone & Compile 

```bash
# set variables
repoName="DepTest_ModuleA"
repoURL="https://github.com/mezorian/DepTest_ModuleA.git"
branch="master"
manifest="default.xml"

# create new directory to build in
mkdir ${repoName}
cd ${repoName}

# download repo with all its dependency repos
repo init -u ${repoURL} -b ${branch} -m ${manifest}
repo sync

# copy the main project into the recently created directory
cp -r .repo/manifests/* .

# build
source /opt/qt55/bin/qt55-env.sh
/opt/qt55/bin/qmake
make clean
make

# run
./untitled

```


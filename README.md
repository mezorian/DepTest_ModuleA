# DepTest_ModuleA
Dependency Test - Submodule A

[![Build Status](https://travis-ci.org/mezorian/DepTest_ModuleA.svg?branch=master)](https://travis-ci.org/mezorian/DepTest_ModuleA)

## Requirements 

 1. Installation of qt
 2. Installation of python3-pip and gitpython

## Setup / Clone & Compile 

```bash
# set variables
repoName="DepTest_ModuleA"
repoURL="https://github.com/mezorian/DepTest_ModuleA.git"
branch="master"
manifest="default.xml"

# clone this repository
git clone ${repoURL}
cd ${repoName}

# download all depency repos
git clone https://github.com/mezorian/EasyDepend.git
cp EasyDepend/*.py .
python3 example.py

# build
source /opt/qt55/bin/qt55-env.sh
/opt/qt55/bin/qmake
make clean
make

# run
./untitled

```


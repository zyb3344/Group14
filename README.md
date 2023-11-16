[![Windows Build Status (appveyor.com)](https://img.shields.io/appveyor/ci/mity/acutest/master.svg?logo=windows&label=windows%20build)](https://ci.appveyor.com/project/mity/acutest/branch/master)

# Gray-Scott Reaction-Diffusion Simulation
# Description
This is a simulation application through calculating a series of given parameters and several functions and algorithms to achieve simulation of Gray-Scott Reaction-Diffusion

# Building the application locally
Prerequisites:

A compatible operating system (e.g. Linux, macOS, Windows).

A compatible C++ compiler that supports at least C++14.

CMake and a compatible build tool for building the project.

# Steps 

1. Clone the repository:
``` C
git clone https://github.com/scicomp-durham/gray-scott-sim.git
```

2. Navigate to the project directory:
``` C
cd gray-scott-sim
```

3. Create the CMakeLists.txt under the project directory:
``` C
touch CMakeLists.txt
```
and add content below
``` C
cmake_minimum_required(VERSION 3.10)
project(GS_sim)

set(SOURCE_FILES gs.cpp)

add_executable(runGS ${SOURCE_FILES})
```

4. Build the project:
Note: Please change the current directory to project directory first

``` C
mkdir build
cd build
cmake /Users/balencicash/Documents/ProSkills/gs/gray-scott-sim
make
./runGS
```
Note: Change the path name above according to your path name witch contains CMakeLists.txt

# Testing 

Acutest is C/C++ unit testing facility aiming to be as simple as possible, not to stand in the developer's way and to minimize any external dependencies.

To achieve that, the complete implementation resides in a single C header file, and its core depends only on few standard C library functions.

For more information, please check the link: https://github.com/mity/acutest

The automated test is already integrated in the GitHub action document in this repository in order to check whether the source code of the application performs normally.

However, you can still perform the test locally by building and making the test.cpp file under the source code directory through CMake commands.

Here are several explanations for the test functions in the test.cpp file:

* Type_check: Check that the type of the model parameters (F, k) matches that of the element type
of the u and v vectors.
* Size_check: Check that the variables u and v are the same size
* Answer_check: Check that the simulation produces the mathematically correct answer when u = 0 and
v = 0.

# Continuous Integration 
Continuous integration is set up using c-cpp.yml, ensuring that every commit passes all tests and meets the coding standards.

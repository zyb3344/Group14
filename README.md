# Gray-Scott Reaction-Diffusion Simulation

## Overview
This project implements a simulation of the Gray-Scott reaction-diffusion system, a model widely used in the study of pattern formation in chemical reactions. It features a C++ implementation of the model along with unit tests to ensure its correctness and reliability.

## Structure
The project is structured as follows:
```
├── CMakeLists.txt
├── external
│   ├── googletest
│   └── gray-scott-sim
│       ├── gs
│       └── gs.cpp
├── README.md
├── src
│   └── main.cpp
└── tests
    ├── Mathematically_correct_answer.cpp
    └── test_gs.cpp
```

## Prerequisites
To build and run this simulation, you will need:
- CMake (version 3.12 or higher)
- A C++ compiler supporting C++14 standard
- Google Test (included in the external directory for unit testing)

## Building the Simulation
To build the simulation, follow these steps:

1. Clone the repository.
2. Navigate to the repository directory.
3. Create a build directory and navigate into it:
   ```
   mkdir build && cd build
   ```
4. Run CMake and build the project:
   ```
   cmake ..
   make
   ```

## Running the Simulation
After building the simulation, you can run it by executing the `MainProgram` from the build directory.

## Running Tests
To ensure the correctness of the simulation, several unit tests have been included. These can be run by executing the `GSTest` binary in the build directory. To run the tests, use the following command:
   ```
   ./GSTest
   ```
This will execute all unit tests and provide a summary of the test results.

## Contributing
Contributions to the project are welcome. If you would like to contribute, please fork the repository and submit a pull request with your changes.

## Acknowledgements
This project utilises the Google Test framework for unit testing, which is included as a submodule in the external directory.

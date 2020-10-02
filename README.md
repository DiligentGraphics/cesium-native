# Cesium Native

[CesiumJS](https://github.com/CesiumGS/cesium)-like functionality for C++.

## Prerequisites

* Visual Studio 2019 or GCC v7.x+. Other compilers may work but haven't been tested.
* CMake (add it to your path during install!)

## Getting Started

Check out the repo with:

```bash
git clone git@github.com:CesiumGS/cesium-native.git --recurse-submodules
```

If you forget the `--recurse-submodules`, nothing will work because the git submodules will be missing. You should be able to fix it with:

```bash
git submodule update --init --recursive
```

You can then build cesium-native on the command-line with CMake:

```bash
mkdir build
cmake -B build -S .
cmake --build build --config Debug
```

Or, you can easily build it in Visual Studio Code with the `CMake Tools` extension installed. It should prompt you to generate project files from CMake. On Windows, choose `Visual Studio 2019 Release - amd64` as the kit to build. Or choose an appropriate kit for your platform. Then press Ctrl-Shift-P and execute the `CMake: Build` task or press F7.

## Building documentation

* Install Doxygen.
* Run: `cmake --build build --target cesium-native-docs`
* Open `build/doc/html/index.html`

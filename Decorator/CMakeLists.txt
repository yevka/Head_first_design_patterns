cmake_minimum_required (VERSION 3.2 FATAL_ERROR)

project (decorator CXX)

# Enable C++11
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

# Configurable variables
## Features
set (ENABLE_TESTING ON CACHE BOOL "Enable unit tests")

# Add self includes
include_directories ("include")
include_directories ("../ext")

# Grab source directory tree
file (GLOB_RECURSE SRC_LIST "src/*.cxx")

set (MAIN "main.cxx")

# Configure library build
add_executable (${CMAKE_PROJECT_NAME} ${SRC_LIST} ${MAIN})

# Add unit tests
if (ENABLE_TESTING)
    enable_testing()
    add_subdirectory (tests)
    message (STATUS "Unit tests status: ENABLED")
else (ENABLE_TESTING)
    message (STATUS "Unit tests status: DISABLED")
endif (ENABLE_TESTING)

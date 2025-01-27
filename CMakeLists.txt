cmake_minimum_required(VERSION 3.28)

project(patterns
  VERSION 0.0.1
  LANGUAGES CXX
  DESCRIPTION "patterns"
)

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Configurable variables
set(ENABLE_TESTING ON CACHE BOOL "Enable unit tests")

# add the CMakeFile that defines catch2
add_subdirectory(3rd_party/catch2)

add_subdirectory(Decorator)
add_subdirectory(Factory)
add_subdirectory(Observer)
add_subdirectory(Strategy)

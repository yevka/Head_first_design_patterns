cmake_minimum_required(VERSION 3.28)

# Configurable variables
set(ENABLE_TESTING ON CACHE BOOL "Enable unit tests")

# Configure library build
add_library(libstrategy INTERFACE)
target_include_directories(libstrategy INTERFACE include)

add_executable(strategy main.cxx)
target_link_libraries(strategy PUBLIC libstrategy)

# Add unit tests
if(ENABLE_TESTING)
    enable_testing()
    add_subdirectory (tests)
endif (ENABLE_TESTING)

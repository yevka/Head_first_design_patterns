cmake_minimum_required(VERSION 3.28)

set(project_name factory_method) 

# Configure library build
file (GLOB_RECURSE SRC_LIST src/*.cxx)
if (SRC_LIST)
    add_library(lib${project_name} ${SRC_LIST})
    target_include_directories(lib${project_name} PUBLIC include)
else()
    add_library(lib${project_name} INTERFACE)
    target_include_directories(lib${project_name} INTERFACE include)
endif()

add_executable(${project_name} main.cxx)
target_link_libraries(${project_name} PUBLIC lib${project_name})

# Add unit tests
if(ENABLE_TESTING)
    enable_testing()
    add_subdirectory (tests)
endif (ENABLE_TESTING)

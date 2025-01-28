cmake_minimum_required (VERSION 3.28 FATAL_ERROR)

set (TEST_RUNNER test_${project_name})

# Configure test target
add_executable (${TEST_RUNNER}
    test_runner.cxx
    test_${project_name}.cxx
)
target_link_libraries(${TEST_RUNNER} PUBLIC
    Catch2::Test
    lib${project_name}
)

add_test (NAME ${TEST_RUNNER} COMMAND ./${TEST_RUNNER})

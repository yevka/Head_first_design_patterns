cmake_minimum_required (VERSION 3.28 FATAL_ERROR)

set (TEST_RUNNER test_runner)

# Configure test target
add_executable (${TEST_RUNNER}
    test_runner.cxx
    "test_duck.cxx"
)
target_link_libraries(${TEST_RUNNER} PUBLIC
    Catch2::Test
    libstrategy
)

add_test (NAME ${TEST_RUNNER} COMMAND ./${TEST_RUNNER})

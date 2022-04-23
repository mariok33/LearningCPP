add_library(Factorial src/factorial.cpp)

target_include_directories(Factorial PUBLIC include)

add_executable(tests_for_factorial uts/factorialTests.cpp)

target_link_libraries(tests_for_factorial gtest gtest_main Factorial)
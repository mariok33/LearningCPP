add_library(Stack src/stack.cpp)

target_include_directories(Stack PUBLIC include)

add_executable(tests_for_stack uts/stackTests.cpp)

target_link_libraries(tests_for_stack gtest gtest_main Stack)
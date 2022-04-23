add_library(Palindrome src/palindrome.cpp)

target_include_directories(Palindrome PUBLIC include)

add_executable(tests_for_palindrome uts/palindromeTests.cpp)

target_link_libraries(tests_for_palindrome gtest gtest_main Palindrome)
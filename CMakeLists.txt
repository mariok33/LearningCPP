cmake_minimum_required(VERSION 3.12)
project(LearningCPP CXX)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -pedantic -Werror)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG main
)

FetchContent_MakeAvailable(googletest)

add_subdirectory(Factorial)
add_subdirectory(Palindrome)

enable_testing()
add_test(tests_for_factorial Factorial/tests_for_factorial)
add_test(tests_for_palindrome Palindrome/tests_for_palindrome)

add_custom_target(testsFactorial
                  COMMAND "./Factorial/tests_for_factorial)"
                  DEPENDS tests_for_factorial)

add_custom_target(testsPalindrome
                  COMMAND "./Palindrome/tests_for_palindrome"
                  DEPENDS tests_for_palindrome)
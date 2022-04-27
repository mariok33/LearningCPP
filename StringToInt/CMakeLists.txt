add_library(StringToInt src/stringToInt.cpp)

target_include_directories(StringToInt PUBLIC include)

add_executable(tests_for_stringToInt uts/stringToIntTests.cpp)

target_link_libraries(tests_for_stringToInt gtest gtest_main StringToInt)
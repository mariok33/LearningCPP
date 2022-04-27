add_library(CharToInt src/charToInt.cpp)

target_include_directories(CharToInt PUBLIC include)

add_executable(tests_for_charToInt uts/charToIntTests.cpp)

target_link_libraries(tests_for_charToIntToInt gtest gtest_main CharToInt)
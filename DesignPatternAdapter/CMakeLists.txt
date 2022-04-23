add_library(implementations src/adapterForMap.cpp src/adapterForMap.hpp src/colors.cpp
            src/point.hpp src/point.cpp)

target_include_directories(implementations PUBLIC include)

add_executable(tests_for_adapter uts/adapterForMapTests.cpp)

target_link_libraries(tests_for_adapter gtest gtest_main implementations)
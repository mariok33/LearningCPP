#include "stringToInt.hpp"
#include "gtest/gtest.h"

#include <string>

class StringToIntTests : public ::testing::Test 
{
public:
    StringToIntTests() {};
    ~StringToIntTests() override {};

    void SetUp() override {};
    void TearDown() override {};
};

TEST_F(StringToIntTests, shouldReturn1ChangeStringToIntFunctionParameterValueOf1)
{
    std::string character {'1'};
    EXPECT_EQ(changeStringToInt(character), 1);
}

TEST_F(StringToIntTests, shouldReturn9ChangeStringToIntFunctionParameterValueOf9)
{
    std::string character {'9'};
    EXPECT_EQ(changeStringToInt(character), 9);
}

TEST_F(StringToIntTests, shouldReturn10ChangeStringToIntFunctionParameterValueOf10)
{
    std::string character {"10"};
    EXPECT_EQ(changeStringToInt(character), 10);
}
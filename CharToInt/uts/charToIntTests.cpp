#include "charToInt.hpp"
#include "gtest/gtest.h"

class CharToIntTests : public ::testing::Test 
{
public:
    CharToIntTests() {};
    ~CharToIntTests() override {};

    void SetUp() override {};
    void TearDown() override {};
};

TEST_F(CharToIntTests, shouldReturn1ChangeCharToIntFunctionParameterValueOf1)
{
    char character {'1'};
    EXPECT_EQ(changeCharToInt(character), 1);
}
#include "factorial.hpp"
#include "gtest/gtest.h"

class FactorialTests : public ::testing::Test 
{
public:
    FactorialTests() {};
    ~FactorialTests() override {};

    void SetUp() override {};
    void TearDown() override {};
};

TEST_F(FactorialTests, shouldReturn0ForACalculateFactorialFunctionParameterValueOf0)
{
    unsigned int number {0};
    EXPECT_EQ(calculateFactorial(number), 0);
}

TEST_F(FactorialTests, shouldReturn1ForACalculateFactorialFunctionParameterValueOf1)
{
    unsigned int number {1};
    EXPECT_EQ(calculateFactorial(number), 1);
}
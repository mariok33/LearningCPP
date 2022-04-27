#include "factorial.hpp"
#include "gtest/gtest.h"

#include <stdexcept>
#include <string>

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
    int number {0};
    EXPECT_EQ(calculateFactorial(number), 0);
}

TEST_F(FactorialTests, shouldReturn1ForACalculateFactorialFunctionParameterValueOf1)
{
    int number {1};
    EXPECT_EQ(calculateFactorial(number), 1);
}

TEST_F(FactorialTests, shouldReturnExceptionForACalculateFactorialFunctionParameterValueOfMinus1)
{
    int number {-1};
    EXPECT_THROW(calculateFactorial(number), std::out_of_range);
}

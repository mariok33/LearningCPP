#include "palindrome.hpp"

#include "gtest/gtest.h"

#include <string>

class PalindromeTests : public ::testing::Test 
{
public:
    PalindromeTests() {};
    ~PalindromeTests() override {};

    void SetUp() override {};
    void TearDown() override {};
};

TEST_F(PalindromeTests, shouldReturnTrueAfterCheckEmptyString)
{
    std::string phrase {""};
    EXPECT_TRUE(isPalindrome(phrase));
}

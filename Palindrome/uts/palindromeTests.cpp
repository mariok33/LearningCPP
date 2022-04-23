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

TEST_F(PalindromeTests, shouldReturnTrueAfterCheckStringWithWhitespaceCharacters)
{
    std::string phrase {" "};
    EXPECT_TRUE(isPalindrome(phrase));
}

TEST_F(PalindromeTests, shouldReturnTrueAfterCheckString_Aba)
{
    std::string phrase {"Aba"};
    EXPECT_TRUE(isPalindrome(phrase));
}

TEST_F(PalindromeTests, shouldReturnTrueAfterCheckString_1A_ba1)
{
    std::string phrase {"1A ba1"};
    EXPECT_TRUE(isPalindrome(phrase));
}

TEST_F(PalindromeTests, shouldReturnFalseAfterCheckString_1A1_ba1)
{
    std::string phrase {"1A1 ba1"};
    EXPECT_FALSE(isPalindrome(phrase));
}

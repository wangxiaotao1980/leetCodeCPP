/*******************************************************************************************
 *  @file      LeetCode00917TestSuite.cpp 2019\2\11 16:11:32 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "../Src/LeetCode00917.hpp"

 //LeetCode No.917. Reverse Only Letters
#define LeetCode00917TestSuite DISABLED_LeetCode00917TestSuite
// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00917TestSuite, ReverseOnlyLettersTestSuiteTestCase0)
{
    std::string s("ab-cd");
    std::string result("dc-ba");

    LeetCode00917 sol;

    ASSERT_EQ(result, sol.reverseOnlyLetters(s));

}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00917TestSuite, ReverseOnlyLettersTestSuiteTestCase1)
{
    std::string s("a-bC-dEf-ghIj");
    std::string result("j-Ih-gfE-dCba");

    LeetCode00917 sol;

    ASSERT_EQ(result, sol.reverseOnlyLetters(s));

}


// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00917TestSuite, ReverseOnlyLettersTestSuiteTestCase2)
{
    std::string s("Test1ng-Leet=code-Q!");
    std::string result("Qedo1ct-eeLg=ntse-T!");

    LeetCode00917 sol;

    ASSERT_EQ(result, sol.reverseOnlyLetters(s));

}

// 
// -------------------------------------------------------------------------------------------

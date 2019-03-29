/*******************************************************************************************
 *  @file      ReverseOnlyLettersTestSuite.cpp 2019\2\11 16:11:32 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "disabled.hpp"
#include "../Src/ReverseOnlyLetters.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(ReverseOnlyLettersTestSuite, ReverseOnlyLettersTestSuiteTestCase0)
{
    std::string s("ab-cd");
    std::string result("dc-ba");

    ReverseOnlyLetters sol;

    ASSERT_EQ(result, sol.reverseOnlyLetters(s));

}

// ------------------------------------------------------------------------------------------
//
TEST(ReverseOnlyLettersTestSuite, ReverseOnlyLettersTestSuiteTestCase1)
{
    std::string s("a-bC-dEf-ghIj");
    std::string result("j-Ih-gfE-dCba");

    ReverseOnlyLetters sol;

    ASSERT_EQ(result, sol.reverseOnlyLetters(s));

}


// ------------------------------------------------------------------------------------------
//
TEST(ReverseOnlyLettersTestSuite, ReverseOnlyLettersTestSuiteTestCase2)
{
    std::string s("Test1ng-Leet=code-Q!");
    std::string result("Qedo1ct-eeLg=ntse-T!");

    ReverseOnlyLetters sol;

    ASSERT_EQ(result, sol.reverseOnlyLetters(s));

}

// 
// -------------------------------------------------------------------------------------------

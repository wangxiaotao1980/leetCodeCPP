/*******************************************************************************************
 *  @file      LeetCode00374TestSuite.cpp 2019\2\3 19:15:54 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "../Src/LeetCode00374.hpp"


 //LeetCode No.374 Guess Number Higher or Lower   
#define LeetCode00374TestSuite DISABLED_LeetCode00374TestSuite

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00374TestSuite, GuessNumberHigherOrLowerTestSuiteTestCase0)
{
    LeetCode00374 sol(6);

    ASSERT_EQ(6, sol.guessNumber(10));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00374TestSuite, GuessNumberHigherOrLowerTestSuiteTestCase1)
{
    LeetCode00374 sol(1702766719);

    ASSERT_EQ(1702766719, sol.guessNumber(2126753390));
}

// 
// -------------------------------------------------------------------------------------------

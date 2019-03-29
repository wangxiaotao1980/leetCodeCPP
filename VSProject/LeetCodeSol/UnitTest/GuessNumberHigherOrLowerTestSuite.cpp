/*******************************************************************************************
 *  @file      GuessNumberHigherOrLowerTestSuite.cpp 2019\2\3 19:15:54 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "disabled.hpp"
#include "../Src/GuessNumberHigherOrLower.hpp"


// ------------------------------------------------------------------------------------------
//
TEST(GuessNumberHigherOrLowerTestSuite, GuessNumberHigherOrLowerTestSuiteTestCase0)
{
    GuessNumberHigherOrLower sol(6);

    ASSERT_EQ(6, sol.guessNumber(10));
}

// ------------------------------------------------------------------------------------------
//
TEST(GuessNumberHigherOrLowerTestSuite, GuessNumberHigherOrLowerTestSuiteTestCase1)
{
    GuessNumberHigherOrLower sol(1702766719);

    ASSERT_EQ(1702766719, sol.guessNumber(2126753390));
}

// 
// -------------------------------------------------------------------------------------------

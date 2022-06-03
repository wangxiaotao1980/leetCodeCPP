/*******************************************************************************************
 *  @file      LeetCode00367TestSuite.cpp 2019\2\3 18:16:27 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "../Src/LeetCode00367.hpp"

 //Leetcode No.367 Valid Perfect Square
#define LeetCode00367TestSuite DISABLED_LeetCode00367TestSuite

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00367TestSuite, ValidPerfectSquareTestSuiteTestCase)
{
    LeetCode00367 sol;


    for (int i = 0; i < 46341; ++i)
    {
        ASSERT_TRUE(sol.isPerfectSquare(i*i));
    }

    for (int i = 1; i < 46341; ++i)
    {
        ASSERT_FALSE(sol.isPerfectSquare(i*i + 1));
    }
}
// 
// -------------------------------------------------------------------------------------------

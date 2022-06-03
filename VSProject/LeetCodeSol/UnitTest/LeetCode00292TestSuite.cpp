/*******************************************************************************************
 *  @file      LeetCode00292TestSuite.cpp 2015\12\14 13:31:53 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.292 Nim Game
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00292.hpp"


//LeetCode No.292 Nim Game
#define LeetCode00292TestSuite DISABLED_LeetCode00292TestSuite

 // ------------------------------------------------------------------------------------------
 //

TEST(LeetCode00292TestSuite, NimGameTestSuiteTestCase)
{
    LeetCode00292 sol;

    ASSERT_TRUE(sol.canWinNim(1));
    ASSERT_TRUE(sol.canWinNim(2));
    ASSERT_TRUE(sol.canWinNim(3));
    ASSERT_FALSE(sol.canWinNim(4));
}
//
// -------------------------------------------------------------------------------------------
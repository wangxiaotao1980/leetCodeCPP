/*******************************************************************************************
 *  @file      NimGameTestSuite.cpp 2015\12\14 13:31:53 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.292 Nim Game
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/NimGameSolution.hpp"
#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //

TEST(NimGameTestSuite, NimGameTestSuiteTestCase)
{
    NimGameSolution sol;

    ASSERT_TRUE(sol.canWinNim(1));
    ASSERT_TRUE(sol.canWinNim(2));
    ASSERT_TRUE(sol.canWinNim(3));
    ASSERT_FALSE(sol.canWinNim(4));
}
//
// -------------------------------------------------------------------------------------------
/*******************************************************************************************
 *  @file      LeetCode00136TestSuite.cpp 2015\12\7 22:32:49 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.136 Single Number
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00136.hpp"



//LeetCode No.136 Single Number
#define  LeetCode00136TestSuite DISABLED_LeetCode00136TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00136TestSuite, SingleNumberTestSuiteTestCase)
{
    std::vector<int> data{ 1, 2, 1 };
    LeetCode00136 sol;

    ASSERT_EQ(2, sol.singleNumber(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00136TestSuite, SingleNumberTestSuiteTestCase1)
{
    std::vector<int> data{ 1, 1, 1 };
    LeetCode00136 sol;

    ASSERT_EQ(1, sol.singleNumber(data));
}
//
// -------------------------------------------------------------------------------------------
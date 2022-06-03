/*******************************************************************************************
 *  @file      LeetCode00001TestSuite.cpp 2015\12\14 14:53:03 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.1 Two Sum
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00001.hpp"


 //LeetCode No.1 Two Sum
#define  LeetCode00001TestSuite DISABLED_LeetCode00001TestSuite
 // ------------------------------------------------------------------------------------------
 //

TEST(LeetCode00001TestSuite, TowSumTestSuiteTestCase0)
{
    LeetCode00001 sol;

    std::vector<int> thedata{ 2, 7, 11, 15 };
    int target = 9;

    std::vector<int> result = sol.twoSum(thedata, target);
    std::vector<int> expect{ 1, 2 };
    ASSERT_EQ(expect, result);
}

TEST(LeetCode00001TestSuite, TowSumTestSuiteTestCase1)
{
    LeetCode00001 sol;

    std::vector<int> thedata{ 2, 7, 11, 15, 7 };
    int target = 14;

    std::vector<int> result = sol.twoSum(thedata, target);
    std::vector<int> expect{ 2, 5 };
    ASSERT_EQ(expect, result);
}

//
// -------------------------------------------------------------------------------------------
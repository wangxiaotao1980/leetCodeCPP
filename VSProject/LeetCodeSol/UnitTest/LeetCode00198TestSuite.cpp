/*******************************************************************************************
 *  @file      LeetCode00198TestSuite.cpp 2015\12\14 16:25:07 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.198 House Robber
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00198.hpp"

 //LeetCode No.198 House Robber
#define LeetCode00198TestSuite DISABLED_LeetCode00198TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase0)
{
    LeetCode00198 sol;
    std::vector<int> data{ 0 };

    ASSERT_EQ(0, sol.rob(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase1)
{
    LeetCode00198 sol;
    std::vector<int> data{ 1 };

    ASSERT_EQ(1, sol.rob(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase2)
{
    LeetCode00198 sol;
    std::vector<int> data{ 1, 2 };

    ASSERT_EQ(2, sol.rob(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase3)
{
    LeetCode00198 sol;
    std::vector<int> data{ 2, 1 };

    ASSERT_EQ(2, sol.rob(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase4)
{
    LeetCode00198 sol;
    std::vector<int> data{ 1, 2, 3 };

    ASSERT_EQ(4, sol.rob(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase5)
{
    LeetCode00198 sol;
    std::vector<int> data{ 1, 9, 3 };

    ASSERT_EQ(9, sol.rob(data));
}

//
// -------------------------------------------------------------------------------------------
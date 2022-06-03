/*******************************************************************************************
 *  @file      LeetCode00303TestSuite.cpp 2015\12\14 17:48:23 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.303  Range Sum Query - Immutable
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00303.hpp"


 //LeetCode No.303  Range Sum Query - Immutable
#define LeetCode00303TestSuite DISABLED_LeetCode00303TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00303TestSuite, RangeSumQueryImmutableTestSuiteTestCase0)
{
    std::vector<int> data{ 0 };
    LeetCode00303 sol(data);

    ASSERT_EQ(0, sol.sumRange(0, 0));
}

TEST(LeetCode00303TestSuite, RangeSumQueryImmutableTestSuiteTestCase1)
{
    std::vector<int> data{ -1, 1 };
    LeetCode00303 sol(data);

    ASSERT_EQ(-1, sol.sumRange(0, 0));
    ASSERT_EQ(1, sol.sumRange(1, 1));
    ASSERT_EQ(0, sol.sumRange(0, 1));
}

TEST(LeetCode00303TestSuite, RangeSumQueryImmutableTestSuiteTestCase2)
{
    std::vector<int> data{ -2, 0, 3, -5, 2, -1 };
    LeetCode00303 sol(data);

    ASSERT_EQ(1, sol.sumRange(0, 2));
    ASSERT_EQ(-1, sol.sumRange(2, 5));
    ASSERT_EQ(-3, sol.sumRange(0, 5));
}

//
// -------------------------------------------------------------------------------------------
/*******************************************************************************************
 *  @file      RangeSumQueryImmutableTestSuite.cpp 2015\12\14 17:48:23 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.303  Range Sum Query - Immutable
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/RangeSumQueryImmutableSolution.hpp"
#include "disabled.hpp"
 // ------------------------------------------------------------------------------------------
 //
TEST(RangeSumQueryImmutableTestSuite, RangeSumQueryImmutableTestSuiteTestCase0)
{
    std::vector<int> data{ 0 };
    RangeSumQueryImmutableSolution sol(data);

    ASSERT_EQ(0, sol.sumRange(0, 0));
}

TEST(RangeSumQueryImmutableTestSuite, RangeSumQueryImmutableTestSuiteTestCase1)
{
    std::vector<int> data{ -1, 1 };
    RangeSumQueryImmutableSolution sol(data);

    ASSERT_EQ(-1, sol.sumRange(0, 0));
    ASSERT_EQ(1, sol.sumRange(1, 1));
    ASSERT_EQ(0, sol.sumRange(0, 1));
}

TEST(RangeSumQueryImmutableTestSuite, RangeSumQueryImmutableTestSuiteTestCase2)
{
    std::vector<int> data{ -2, 0, 3, -5, 2, -1 };
    RangeSumQueryImmutableSolution sol(data);

    ASSERT_EQ(1, sol.sumRange(0, 2));
    ASSERT_EQ(-1, sol.sumRange(2, 5));
    ASSERT_EQ(-3, sol.sumRange(0, 5));
}

//
// -------------------------------------------------------------------------------------------
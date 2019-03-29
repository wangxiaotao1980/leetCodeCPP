/*******************************************************************************************
 *  @file      RangeSumQueryTestSuite.cpp 2015\12\10 19:10:01 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.307 Range Sum Query
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/NumArraySolution.hpp"
#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(RangeSumQueryTestSuite, RangeSumQueryTestSuiteTestCase0)
{
    std::vector<int> a{ 1 , 2 };
    NumArray regionTree(a);

    ASSERT_EQ(1, regionTree.sumRange(0, 0));
    ASSERT_EQ(2, regionTree.sumRange(1, 1));
    ASSERT_EQ(3, regionTree.sumRange(0, 1));

    regionTree.update(0, 2);
    ASSERT_EQ(2, a[0]);
    ASSERT_EQ(2, regionTree.sumRange(0, 0));
    ASSERT_EQ(2, regionTree.sumRange(1, 1));
    ASSERT_EQ(4, regionTree.sumRange(0, 1));

    regionTree.update(1, 1);
    ASSERT_EQ(1, a[1]);
    ASSERT_EQ(2, regionTree.sumRange(0, 0));
    ASSERT_EQ(1, regionTree.sumRange(1, 1));
    ASSERT_EQ(3, regionTree.sumRange(0, 1));
}

TEST(RangeSumQueryTestSuite, DISABLED_RangeSumQueryTestSuiteTestCase1)
{
    std::vector<int> a{ 1, 2, 3 };
    NumArray regionTree(a);

    ASSERT_EQ(1, regionTree.sumRange(0, 0));
    ASSERT_EQ(2, regionTree.sumRange(1, 1));
    ASSERT_EQ(3, regionTree.sumRange(2, 2));

    ASSERT_EQ(3, regionTree.sumRange(0, 1));
    ASSERT_EQ(5, regionTree.sumRange(1, 2));

    ASSERT_EQ(6, regionTree.sumRange(0, 2));
}

TEST(RangeSumQueryTestSuite, DISABLED_RangeSumQueryTestSuiteTestCase2)
{
    std::vector<int> a{ 1, 2, 3 };
    NumArray regionTree(a);

    ASSERT_EQ(1, regionTree.sumRange(0, 0));
    ASSERT_EQ(2, regionTree.sumRange(1, 1));
    ASSERT_EQ(3, regionTree.sumRange(2, 2));

    ASSERT_EQ(3, regionTree.sumRange(0, 1));
    ASSERT_EQ(5, regionTree.sumRange(1, 2));

    ASSERT_EQ(6, regionTree.sumRange(0, 2));
}

TEST(RangeSumQueryTestSuite, RangeSumQueryTestSuiteTestCase3)
{
    std::vector<int> a{ 1, 3, 5 };
    NumArray regionTree(a);

    ASSERT_EQ(9, regionTree.sumRange(0, 2));
    regionTree.update(1, 2);
    ASSERT_EQ(2, a[1]);
    ASSERT_EQ(1, regionTree.sumRange(0, 0));
    ASSERT_EQ(2, regionTree.sumRange(1, 1));
    ASSERT_EQ(5, regionTree.sumRange(2, 2));

    ASSERT_EQ(3, regionTree.sumRange(0, 1));
    ASSERT_EQ(7, regionTree.sumRange(1, 2));
    ASSERT_EQ(8, regionTree.sumRange(0, 2));
}

//
// -------------------------------------------------------------------------------------------
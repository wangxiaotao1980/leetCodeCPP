/***********************************************************************************************************************
 *  @file    LeetCode00301ToLeetCode00400TestSuite.cpp  2022-06-18 12:42:46
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include <gmock/gmock.h>
#include "../Src/LeetCode00301ToLeetCode00400.hpp"
//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.303  Range Sum Query - Immutable
#define LeetCode00303TestSuite DISABLED_LeetCode00303TestSuite
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

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.307 Range Sum Query
#define LeetCode00307TestSuite DISABLED_LeetCode00307TestSuite
TEST(LeetCode00307TestSuite, RangeSumQueryTestSuiteTestCase0)
{
    std::vector<int> a{ 1 , 2 };
    LeetCode00307 regionTree(a);

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

TEST(LeetCode00307TestSuite, DISABLED_RangeSumQueryTestSuiteTestCase1)
{
    std::vector<int> a{ 1, 2, 3 };
    LeetCode00307 regionTree(a);

    ASSERT_EQ(1, regionTree.sumRange(0, 0));
    ASSERT_EQ(2, regionTree.sumRange(1, 1));
    ASSERT_EQ(3, regionTree.sumRange(2, 2));

    ASSERT_EQ(3, regionTree.sumRange(0, 1));
    ASSERT_EQ(5, regionTree.sumRange(1, 2));

    ASSERT_EQ(6, regionTree.sumRange(0, 2));
}

TEST(LeetCode00307TestSuite, DISABLED_RangeSumQueryTestSuiteTestCase2)
{
    std::vector<int> a{ 1, 2, 3 };
    LeetCode00307 regionTree(a);

    ASSERT_EQ(1, regionTree.sumRange(0, 0));
    ASSERT_EQ(2, regionTree.sumRange(1, 1));
    ASSERT_EQ(3, regionTree.sumRange(2, 2));

    ASSERT_EQ(3, regionTree.sumRange(0, 1));
    ASSERT_EQ(5, regionTree.sumRange(1, 2));

    ASSERT_EQ(6, regionTree.sumRange(0, 2));
}

TEST(LeetCode00307TestSuite, RangeSumQueryTestSuiteTestCase3)
{
    std::vector<int> a{ 1, 3, 5 };
    LeetCode00307 regionTree(a);

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

//----------------------------------------------------------------------------------------------------------------------
//Leetcode No.367 Valid Perfect Square
#define LeetCode00367TestSuite DISABLED_LeetCode00367TestSuite
TEST(LeetCode00367TestSuite, ValidPerfectSquareTestSuiteTestCase)
{
    LeetCode00367 sol;


    for (int i = 0; i < 46341; ++i)
    {
        ASSERT_TRUE(sol.isPerfectSquare(i * i));
    }

    for (int i = 1; i < 46341; ++i)
    {
        ASSERT_FALSE(sol.isPerfectSquare(i * i + 1));
    }
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.374 Guess Number Higher or Lower   
#define LeetCode00374TestSuite DISABLED_LeetCode00374TestSuite
TEST(LeetCode00374TestSuite, GuessNumberHigherOrLowerTestSuiteTestCase0)
{
    LeetCode00374 sol(6);

    ASSERT_EQ(6, sol.guessNumber(10));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00374TestSuite, GuessNumberHigherOrLowerTestSuiteTestCase1)
{
    LeetCode00374 sol(1702766719);

    ASSERT_EQ(1702766719, sol.guessNumber(2126753390));
}

//
//----------------------------------------------------------------------------------------------------------------------

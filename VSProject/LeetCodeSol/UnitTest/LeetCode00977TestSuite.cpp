/*******************************************************************************************
 *  @file      LeetCode00977TestSuite.cpp 2019\2\12 17:49:35 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "../Src/LeetCode00977.hpp"

//Leetcode No.977 Squares of a Sorted Array
#define LeetCode00977TestSuite DISABLED_LeetCode00977TestSuite
// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00977TestSuite, SquaresOfASortedArrayTestSuiteTestCase0)
{
    LeetCode00977 sol;
    std::vector<int>      data{ -4, -1, 0, 3, 10 };
    std::vector<int>      result{ 0, 1, 9, 16, 100 };

    ASSERT_EQ(result, sol.sortedSquares(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00977TestSuite, SquaresOfASortedArrayTestSuiteTestCase1)
{
    LeetCode00977 sol;
    std::vector<int>      data{ -7, -3, 2, 3, 11 };
    std::vector<int>      result{ 4, 9, 9, 49, 121 };

    ASSERT_EQ(result, sol.sortedSquares(data));
}

// 
// -------------------------------------------------------------------------------------------

/*******************************************************************************************
 *  @file      LeetCode00268TestSuite.cpp 2015\12\15 12:27:03 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.268  Missing Number
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00268.hpp"

//LeetCode No.268  Missing Number
#define LeetCode00268TestSuite  DISABLED_LeetCode00268TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00268TestSuite, MissingNumberTestSuiteTestCase0)
{
    LeetCode00268 sol;
    std::vector<int> data{ 0 };

    ASSERT_EQ(1, sol.missingNumber(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00268TestSuite, MissingNumberTestSuiteTestCase1)
{
    LeetCode00268 sol;
    std::vector<int> data{ 1 };

    ASSERT_EQ(0, sol.missingNumber(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00268TestSuite, MissingNumberTestSuiteTestCase2)
{
    LeetCode00268 sol;
    std::vector<int> data{ 0, 1, 2, 3 };

    ASSERT_EQ(4, sol.missingNumber(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00268TestSuite, MissingNumberTestSuiteTestCase3)
{
    LeetCode00268 sol;
    std::vector<int> data{ 0, 1, 2, 4 };

    ASSERT_EQ(3, sol.missingNumber(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00268TestSuite, MissingNumberTestSuiteTestCase4)
{
    LeetCode00268 sol;
    std::vector<int> data{ 0, 1, 3, 4 };

    ASSERT_EQ(2, sol.missingNumber(data));
}

//
// -------------------------------------------------------------------------------------------
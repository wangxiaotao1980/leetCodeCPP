/*******************************************************************************************
 *  @file      LeetCode00238TestSuite.cpp 2015\12\15 11:47:06 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.238  Product of Array Except Self
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00238.hpp"

//LeetCode No.238  Product of Array Except Self
#define LeetCode00238TestSuite DISABLED_LeetCode00238TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00238TestSuite, ProductOfArrayExceptSelfTestSuiteTestCase0)
{
    LeetCode00238 sol;

    std::vector<int> data{ 1, 2, 3, 4 };
    std::vector<int> result{ 24, 12, 8, 6 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00238TestSuite, ProductOfArrayExceptSelfTestSuiteTestCase1)
{
    LeetCode00238 sol;

    std::vector<int> data{ 2, 2, 2, 2 };
    std::vector<int> result{ 8, 8, 8, 8 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00238TestSuite, ProductOfArrayExceptSelfTestSuiteTestCase2)
{
    LeetCode00238 sol;

    std::vector<int> data{ 3, 4 };
    std::vector<int> result{ 4, 3 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00238TestSuite, ProductOfArrayExceptSelfTestSuiteTestCase3)
{
    LeetCode00238 sol;

    std::vector<int> data{ 0, 1, 1, 0 };
    std::vector<int> result{ 0, 0, 0, 0 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00238TestSuite, ProductOfArrayExceptSelfTestSuiteTestCase4)
{
    LeetCode00238 sol;

    std::vector<int> data{ 0, 2, 3, 4, 5 };
    std::vector<int> result{ 120, 0, 0, 0, 0 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

//
// -------------------------------------------------------------------------------------------
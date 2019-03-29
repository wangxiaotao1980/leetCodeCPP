/*******************************************************************************************
 *  @file      ProductOfArrayExceptSelfTestSuite.cpp 2015\12\15 11:47:06 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.238  Product of Array Except Self
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/ProductOfArrayExceptSelfSolution.hpp"
#include "disabled.hpp"
 // ------------------------------------------------------------------------------------------
 //
TEST(ProductOfArrayExceptSelfTestSuite, ProductOfArrayExceptSelfTestSuiteTestCase0)
{
    ProductOfArrayExceptSelfSolution sol;

    std::vector<int> data{ 1, 2, 3, 4 };
    std::vector<int> result{ 24, 12, 8, 6 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(ProductOfArrayExceptSelfTestSuite, ProductOfArrayExceptSelfTestSuiteTestCase1)
{
    ProductOfArrayExceptSelfSolution sol;

    std::vector<int> data{ 2, 2, 2, 2 };
    std::vector<int> result{ 8, 8, 8, 8 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(ProductOfArrayExceptSelfTestSuite, ProductOfArrayExceptSelfTestSuiteTestCase2)
{
    ProductOfArrayExceptSelfSolution sol;

    std::vector<int> data{ 3, 4 };
    std::vector<int> result{ 4, 3 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(ProductOfArrayExceptSelfTestSuite, ProductOfArrayExceptSelfTestSuiteTestCase3)
{
    ProductOfArrayExceptSelfSolution sol;

    std::vector<int> data{ 0, 1, 1, 0 };
    std::vector<int> result{ 0, 0, 0, 0 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(ProductOfArrayExceptSelfTestSuite, ProductOfArrayExceptSelfTestSuiteTestCase4)
{
    ProductOfArrayExceptSelfSolution sol;

    std::vector<int> data{ 0, 2, 3, 4, 5 };
    std::vector<int> result{ 120, 0, 0, 0, 0 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

//
// -------------------------------------------------------------------------------------------
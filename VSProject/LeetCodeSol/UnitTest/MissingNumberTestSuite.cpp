/*******************************************************************************************
 *  @file      MissingNumberTestSuite.cpp 2015\12\15 12:27:03 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.268  Missing Number
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/MissingNumberSolution.hpp"
#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(MissingNumberTestSuite, MissingNumberTestSuiteTestCase0)
{
    MissingNumberSolution sol;
    std::vector<int> data{ 0 };

    ASSERT_EQ(1, sol.missingNumber(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(MissingNumberTestSuite, MissingNumberTestSuiteTestCase1)
{
    MissingNumberSolution sol;
    std::vector<int> data{ 1 };

    ASSERT_EQ(0, sol.missingNumber(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(MissingNumberTestSuite, MissingNumberTestSuiteTestCase2)
{
    MissingNumberSolution sol;
    std::vector<int> data{ 0, 1, 2, 3 };

    ASSERT_EQ(4, sol.missingNumber(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(MissingNumberTestSuite, MissingNumberTestSuiteTestCase3)
{
    MissingNumberSolution sol;
    std::vector<int> data{ 0, 1, 2, 4 };

    ASSERT_EQ(3, sol.missingNumber(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(MissingNumberTestSuite, MissingNumberTestSuiteTestCase4)
{
    MissingNumberSolution sol;
    std::vector<int> data{ 0, 1, 3, 4 };

    ASSERT_EQ(2, sol.missingNumber(data));
}

//
// -------------------------------------------------------------------------------------------
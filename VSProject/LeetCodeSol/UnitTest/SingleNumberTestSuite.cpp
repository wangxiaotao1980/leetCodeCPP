/*******************************************************************************************
 *  @file      SingleNumberTestSuite.cpp 2015\12\7 22:32:49 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.136 Single Number
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/SingleNumberSolution.hpp"
#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(SingleNumberTestSuite, SingleNumberTestSuiteTestCase)
{
    std::vector<int> data{ 1, 2, 1 };
    SingleNumberSolution sol;

    ASSERT_EQ(2, sol.singleNumber(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(SingleNumberTestSuite, SingleNumberTestSuiteTestCase1)
{
    std::vector<int> data{ 1, 1, 1 };
    SingleNumberSolution sol;

    ASSERT_EQ(1, sol.singleNumber(data));
}
//
// -------------------------------------------------------------------------------------------
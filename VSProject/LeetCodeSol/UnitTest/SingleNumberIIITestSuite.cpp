/*******************************************************************************************
 *  @file      SingleNumberIIITestSuite.cpp 2015\12\8 10:39:10 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.260 Single Number III
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/SingleNumberIII.hpp"
#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(SingleNumberIIITestSuite, SingleNumberIIITestSuiteTestCase0)
{
    SingleNumberIII sol;
    std::vector<int> data{ -1, 0 };
    std::vector<int> result = sol.singleNumberIII(data);

    std::vector<int> result1{ -1, 0 };
    std::vector<int> result2{ 0, -1 };

    bool rs = ((result == result1) || (result == result2));
    ASSERT_TRUE(rs);
}

// ------------------------------------------------------------------------------------------
//
TEST(SingleNumberIIITestSuite, SingleNumberIIITestSuiteTestCase1)
{
    std::vector<int> data{ 1, 2, 1, 3, 2, 5 };
    SingleNumberIII sol;
    std::vector<int> result = sol.singleNumberIII(data);

    std::vector<int> result1{ 3, 5 };
    std::vector<int> result2{ 5, 3 };

    bool rs = ((result == result1) || (result == result2));
    ASSERT_TRUE(rs);
}

// ------------------------------------------------------------------------------------------
//
TEST(SingleNumberIIITestSuite, SingleNumberIIITestSuiteTestCase2)
{
    std::vector<int> data{ 1, 2, 1, 1, 2, 2 };
    SingleNumberIII sol;
    std::vector<int> result = sol.singleNumberIII(data);

    std::vector<int> result1{ 1, 2 };
    std::vector<int> result2{ 2, 1 };

    bool rs = ((result == result1) || (result == result2));
    ASSERT_TRUE(rs);
}

//
// -------------------------------------------------------------------------------------------
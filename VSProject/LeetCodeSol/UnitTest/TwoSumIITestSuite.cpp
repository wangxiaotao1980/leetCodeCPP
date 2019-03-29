/*******************************************************************************************
 *  @file      TwoSumIITestSuite.cpp 2019\2\3 17:19:16 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include  "disabled.hpp"
#include "../Src/TwoSumII.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(TwoSumIITestSuite, TwoSumIITestSuiteTestCase)
{

    TwoSumII sol;
    std::vector<int> numbers { 2, 7, 11, 15 };
    std::vector<int> result { 1, 2 };
    int target = 9;

    ASSERT_EQ(result, sol.twoSum(numbers, target));


}

// 
// -------------------------------------------------------------------------------------------

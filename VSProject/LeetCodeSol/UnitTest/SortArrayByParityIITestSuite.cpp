/*******************************************************************************************
 *  @file      SortArrayByParityIITestSuite.cpp 2019\2\11 20:35:25 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "disabled.hpp"
#include "../Src/SortArrayByParityII.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(SortArrayByParityIITestSuite, SortArrayByParityIITestSuiteTestCase)
{
    SortArrayByParityII sol;
    std::vector<int> data  { 4, 2, 5, 7 };
    std::vector<int> result{ 4, 5, 2, 7 };
    ASSERT_EQ(result, sol.sortArrayByParityII(data));

}

// 
// -------------------------------------------------------------------------------------------

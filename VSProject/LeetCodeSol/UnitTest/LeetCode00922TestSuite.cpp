/*******************************************************************************************
 *  @file      LeetCode00922TestSuite.cpp 2019\2\11 20:35:25 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "../Src/LeetCode00922.hpp"

//LeetCode No.922 Sort Array By Parity II
#define LeetCode00922TestSuite DISABLED_LeetCode00922TestSuite
// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00922TestSuite, SortArrayByParityIITestSuiteTestCase)
{
    LeetCode00922 sol;
    std::vector<int> data  { 4, 2, 5, 7 };
    std::vector<int> result{ 4, 5, 2, 7 };
    ASSERT_EQ(result, sol.sortArrayByParityII(data));

}

// 
// -------------------------------------------------------------------------------------------

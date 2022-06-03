/*******************************************************************************************
 *  @file      LeetCode00718TestSuite.cpp 2019\2\12 16:50:37 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "../Src/LeetCode00718.hpp"


//Leetcode No.718 Maximum Length of Repeated Subarray
#define LeetCode00718TestSuite DISABLED_LeetCode00718TestSuite

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00718TestSuite, MaximumLengthOfRepeatedSubarrayTestSuiteTestCase)
{
    LeetCode00718 sol;

    std::vector<int> A{1, 2, 3, 2, 1};
    std::vector<int> B{3, 2, 1, 4, 7};


    ASSERT_EQ(3, sol.findLength(A, B));
}

// 
// -------------------------------------------------------------------------------------------

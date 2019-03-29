/*******************************************************************************************
 *  @file      MaximumLengthOfRepeatedSubarrayTestSuite.cpp 2019\2\12 16:50:37 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "disabled.hpp"
#include "../Src/MaximumLengthOfRepeatedSubarray.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(MaximumLengthOfRepeatedSubarrayTestSuite, MaximumLengthOfRepeatedSubarrayTestSuiteTestCase)
{
    MaximumLengthOfRepeatedSubarray sol;

    std::vector<int> A{1, 2, 3, 2, 1};
    std::vector<int> B{3, 2, 1, 4, 7};


    ASSERT_EQ(3, sol.findLength(A, B));
}

// 
// -------------------------------------------------------------------------------------------

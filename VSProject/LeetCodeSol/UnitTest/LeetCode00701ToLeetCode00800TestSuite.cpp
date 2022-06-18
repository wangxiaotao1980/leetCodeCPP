/***********************************************************************************************************************
 *  @file    LeetCode00701ToLeetCode00800TestSuite.cpp  2022-06-18 10:11:33
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include <gmock/gmock.h>

#include "../Src/LeetCode00701ToLeetCode00800.hpp"


 //----------------------------------------------------------------------------------------------------------------------
//Leetcode No.718 Maximum Length of Repeated Subarray
#define LeetCode00718TestSuite DISABLED_LeetCode00718TestSuite
TEST(LeetCode00718TestSuite, MaximumLengthOfRepeatedSubarrayTestSuiteTestCase)
{
    LeetCode00701ToLeetCode00800 sol;

    std::vector<int> A{ 1, 2, 3, 2, 1 };
    std::vector<int> B{ 3, 2, 1, 4, 7 };


    ASSERT_EQ(3, sol.findLength(A, B));
}

//
//----------------------------------------------------------------------------------------------------------------------

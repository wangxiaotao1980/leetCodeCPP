/*******************************************************************************************
 *  @file      LeetCode00961TestSuite.cpp 2019\2\11 16:42:33 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "../Src/LeetCode00961.hpp"


 //LeetCode No.961 N-Repeated Element in Size 2N Array
#define LeetCode00961TestSuite  DISABLED_LeetCode00961TestSuite

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00961TestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase0)
{
    LeetCode00961 sol;
    std::vector<int> data0{1, 2, 3, 3};
    ASSERT_EQ(3, sol.repeatedNTimes(data0));
}


// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00961TestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase1)
{
    LeetCode00961 sol;
    std::vector<int> data0{ 2,1,2,5,3,2 };
    ASSERT_EQ(2, sol.repeatedNTimes(data0));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00961TestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase2)
{
    LeetCode00961 sol;
    std::vector<int> data0{ 5,1,5,2,5,3,5,4 };
    ASSERT_EQ(5, sol.repeatedNTimes(data0));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00961TestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase3)
{
    LeetCode00961 sol;
    std::vector<int> data0{ 2, 1, 4, 2};
    ASSERT_EQ(2, sol.repeatedNTimes(data0));
}



// 
// -------------------------------------------------------------------------------------------

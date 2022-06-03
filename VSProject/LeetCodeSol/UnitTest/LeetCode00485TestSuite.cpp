/*******************************************************************************************
 *  @file      LeetCode00485TestSuite.cpp 2019\2\11 18:21:00 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "../Src/LeetCode00485.hpp"


//LeetCode No.485 Max Consecutive Ones
#define LeetCode00485TestSuite DISABLED_LeetCode00485TestSuite
// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00485TestSuite, MaxConsecutiveOnesTestSuiteTestCase)
{
    LeetCode00485 sol;
    std::vector<int> data{1,1,0,1,1,1};

    ASSERT_EQ(3, sol.findMaxConsecutiveOnes(data));
}

// 
// -------------------------------------------------------------------------------------------

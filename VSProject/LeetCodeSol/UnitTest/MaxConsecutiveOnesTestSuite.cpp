/*******************************************************************************************
 *  @file      MaxConsecutiveOnesTestSuite.cpp 2019\2\11 18:21:00 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "disabled.hpp"
#include "../Src/MaxConsecutiveOnes.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(MaxConsecutiveOnesTestSuite, MaxConsecutiveOnesTestSuiteTestCase)
{
    MaxConsecutiveOnes sol;
    std::vector<int> data{1,1,0,1,1,1};

    ASSERT_EQ(3, sol.findMaxConsecutiveOnes(data));
}

// 
// -------------------------------------------------------------------------------------------

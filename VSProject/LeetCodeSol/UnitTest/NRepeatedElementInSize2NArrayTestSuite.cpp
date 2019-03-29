/*******************************************************************************************
 *  @file      NRepeatedElementInSize2NArrayTestSuite.cpp 2019\2\11 16:42:33 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "disabled.hpp"
#include "../Src/NRepeatedElementInSize2NArray.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(NRepeatedElementInSize2NArrayTestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase0)
{
    NRepeatedElementInSize2NArray sol;
    std::vector<int> data0{1, 2, 3, 3};
    ASSERT_EQ(3, sol.repeatedNTimes(data0));
}


// ------------------------------------------------------------------------------------------
//
TEST(NRepeatedElementInSize2NArrayTestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase1)
{
    NRepeatedElementInSize2NArray sol;
    std::vector<int> data0{ 2,1,2,5,3,2 };
    ASSERT_EQ(2, sol.repeatedNTimes(data0));
}

// ------------------------------------------------------------------------------------------
//
TEST(NRepeatedElementInSize2NArrayTestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase2)
{
    NRepeatedElementInSize2NArray sol;
    std::vector<int> data0{ 5,1,5,2,5,3,5,4 };
    ASSERT_EQ(5, sol.repeatedNTimes(data0));
}

// ------------------------------------------------------------------------------------------
//
TEST(NRepeatedElementInSize2NArrayTestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase3)
{
    NRepeatedElementInSize2NArray sol;
    std::vector<int> data0{ 2, 1, 4, 2};
    ASSERT_EQ(2, sol.repeatedNTimes(data0));
}



// 
// -------------------------------------------------------------------------------------------

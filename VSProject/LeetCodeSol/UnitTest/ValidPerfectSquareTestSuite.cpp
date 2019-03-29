/*******************************************************************************************
 *  @file      ValidPerfectSquareTestSuite.cpp 2019\2\3 18:16:27 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "disabled.hpp"
#include "../Src/ValidPerfectSquare.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(ValidPerfectSquareTestSuite, ValidPerfectSquareTestSuiteTestCase)
{
    ValidPerfectSquareSolution sol;


    for (int i = 0; i < 46341; ++i)
    {
        ASSERT_TRUE(sol.isPerfectSquare(i*i));
    }

    for (int i = 1; i < 46341; ++i)
    {
        ASSERT_FALSE(sol.isPerfectSquare(i*i + 1));
    }
}
// 
// -------------------------------------------------------------------------------------------

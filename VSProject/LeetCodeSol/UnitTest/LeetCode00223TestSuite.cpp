/*******************************************************************************************
 *  @file      LeetCode00223TestSuite.cpp 2015\12\8 16:45:38 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.223 Rectangle Area
 *******************************************************************************************/
#include "gtest/gtest.h"
#include "../Src/LeetCode00223.hpp"



//LeetCode No.223 Rectangle Area
#define LeetCode00223TestSuite DISABLED_LeetCode00223TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00223TestSuite, RectangleAreaTestSuiteTestCase)
{
    LeetCode00223 sol;

    ASSERT_EQ(175, sol.computeArea(0, 0, 10, 10, 5, 5, 15, 15));
    ASSERT_EQ(45, sol.computeArea(-3, 0, 3, 4, 0, -1, 9, 2));
    ASSERT_EQ(50, sol.computeArea(0, 0, 5, 5, 10, 10, 15, 15));
    ASSERT_EQ(2, sol.computeArea(-1500000001, 0, -1500000000, 1, 1500000000, 0, 1500000001, 1));
}

//
// -------------------------------------------------------------------------------------------
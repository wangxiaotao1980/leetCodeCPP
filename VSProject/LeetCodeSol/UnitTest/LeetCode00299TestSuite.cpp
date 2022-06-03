/*******************************************************************************************
 *  @file      LeetCode00299TestSuite.cpp 2015\12\21 14:07:30 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.299 Bulls and Cows
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00299.hpp"



 //LeetCode No.299 Bulls and Cows
#define LeetCode00299TestSuite DISABLED_LeetCode00299TestSuite

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00299TestSuite, BullsAndCowsTestSuiteTestCase1)
{
    LeetCode00299 sol;

    std::string s1("1807");
    std::string s2("7810");
    std::string result("1A3B");

    ASSERT_EQ(result, sol.getHint(s1, s2));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00299TestSuite, BullsAndCowsTestSuiteTestCase2)
{
    LeetCode00299 sol;

    std::string s1("1123");
    std::string s2("0111");
    std::string result("1A1B");

    ASSERT_EQ(result, sol.getHint(s1, s2));
}

//
// -------------------------------------------------------------------------------------------
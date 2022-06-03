/*******************************************************************************************
 *  @file      BasicCalculatorIITestSuite.cpp 2015\12\18 17:50:54 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.227 Basic Calculator II
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00227.hpp"

//LeetCode No.227 Basic Calculator II
#define LeetCode00227TestSuite DISABLED_LeetCode00227TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00227TestSuite, BasicCalculatorIITestSuiteTestCase0)
{
    LeetCode00227 sol;

    std::string data("1+2");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00227TestSuite, BasicCalculatorIITestSuiteTestCase1)
{
    LeetCode00227 sol;

    std::string data("3+2*2");
    ASSERT_EQ(7, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00227TestSuite, BasicCalculatorIITestSuiteTestCase2)
{
    LeetCode00227 sol;

    std::string data("3/2");
    ASSERT_EQ(1, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00227TestSuite, BasicCalculatorIITestSuiteTestCase3)
{
    LeetCode00227 sol;

    std::string data(" 3+5 / 2 ");
    ASSERT_EQ(5, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00227TestSuite, BasicCalculatorIITestSuiteTestCase4)
{
    LeetCode00227 sol;

    std::string data(" 3 - 5 / 2 ");
    ASSERT_EQ(1, sol.calculate(data));
}

//
// -------------------------------------------------------------------------------------------
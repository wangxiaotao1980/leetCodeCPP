/*******************************************************************************************
 *  @file      LeetCode00224TestSuite.cpp 2015\12\15 22:39:51 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.224 Basic Calculator
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00224.hpp"


//LeetCode No.224 Basic Calculator
#define LeetCode00224TestSuite DISABLED_LeetCode00224TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase0)
{
    LeetCode00224 sol;

    std::string data("1+2");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase1)
{
    LeetCode00224 sol;

    std::string data("(1+2)");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase2)
{
    LeetCode00224 sol;

    std::string data(" 1 + 2 ");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase3)
{
    LeetCode00224 sol;

    std::string data("( 1 + 2 )");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase4)
{
    LeetCode00224 sol;

    std::string data(" 2 - 1 + 2 ");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase5)
{
    LeetCode00224 sol;

    std::string data(" (1+(4+5+2)-3)+(6+8) ");
    ASSERT_EQ(23, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase6)
{
    LeetCode00224 sol;

    std::string data("(7)-(0)+(4)");
    ASSERT_EQ(11, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase7)
{
    LeetCode00224 sol;

    std::string data("2-4-(8+2-6+(8+4-(1)+8-10))");
    ASSERT_EQ(-15, sol.calculate(data));
}

//
// -------------------------------------------------------------------------------------------
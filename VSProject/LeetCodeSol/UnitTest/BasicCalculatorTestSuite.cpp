/*******************************************************************************************
 *  @file      BasicCalculatorTestSuite.cpp 2015\12\15 22:39:51 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.224 Basic Calculator
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/BasicCalculatorSolution.hpp"
#include "disabled.hpp"
 // ------------------------------------------------------------------------------------------
 //
TEST(BasicCalculatorTestSuite, BasicCalculatorTestSuiteTestCase0)
{
    BasicCalculatorSolution sol;

    std::string data("1+2");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorTestSuite, BasicCalculatorTestSuiteTestCase1)
{
    BasicCalculatorSolution sol;

    std::string data("(1+2)");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorTestSuite, BasicCalculatorTestSuiteTestCase2)
{
    BasicCalculatorSolution sol;

    std::string data(" 1 + 2 ");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorTestSuite, BasicCalculatorTestSuiteTestCase3)
{
    BasicCalculatorSolution sol;

    std::string data("( 1 + 2 )");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorTestSuite, BasicCalculatorTestSuiteTestCase4)
{
    BasicCalculatorSolution sol;

    std::string data(" 2 - 1 + 2 ");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorTestSuite, BasicCalculatorTestSuiteTestCase5)
{
    BasicCalculatorSolution sol;

    std::string data(" (1+(4+5+2)-3)+(6+8) ");
    ASSERT_EQ(23, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorTestSuite, BasicCalculatorTestSuiteTestCase6)
{
    BasicCalculatorSolution sol;

    std::string data("(7)-(0)+(4)");
    ASSERT_EQ(11, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorTestSuite, BasicCalculatorTestSuiteTestCase7)
{
    BasicCalculatorSolution sol;

    std::string data("2-4-(8+2-6+(8+4-(1)+8-10))");
    ASSERT_EQ(-15, sol.calculate(data));
}

//
// -------------------------------------------------------------------------------------------
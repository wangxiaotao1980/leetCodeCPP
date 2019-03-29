/*******************************************************************************************
 *  @file      BasicCalculatorIITestSuite.cpp 2015\12\18 17:50:54 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.227 Basic Calculator II
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/BasicCalculatorIISolution.hpp"
#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(BasicCalculatorIITestSuite, BasicCalculatorIITestSuiteTestCase0)
{
    BasicCalculatorIISolution sol;

    std::string data("1+2");
    ASSERT_EQ(3, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorIITestSuite, BasicCalculatorIITestSuiteTestCase1)
{
    BasicCalculatorIISolution sol;

    std::string data("3+2*2");
    ASSERT_EQ(7, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorIITestSuite, BasicCalculatorIITestSuiteTestCase2)
{
    BasicCalculatorIISolution sol;

    std::string data("3/2");
    ASSERT_EQ(1, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorIITestSuite, BasicCalculatorIITestSuiteTestCase3)
{
    BasicCalculatorIISolution sol;

    std::string data(" 3+5 / 2 ");
    ASSERT_EQ(5, sol.calculate(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(BasicCalculatorIITestSuite, BasicCalculatorIITestSuiteTestCase4)
{
    BasicCalculatorIISolution sol;

    std::string data(" 3 - 5 / 2 ");
    ASSERT_EQ(1, sol.calculate(data));
}

//
// -------------------------------------------------------------------------------------------
/*******************************************************************************************
 *  @file      FibonacciNumberTestSuite.cpp 2019\2\11 19:27:25 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "disabled.hpp"
#include "../Src/FibonacciNumber.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(FibonacciNumberTestSuite, FibonacciNumberTestSuiteTestCase)
{
    FibonacciNumber sol;

    ASSERT_EQ(0, sol.fib(0));
    ASSERT_EQ(1, sol.fib(1));
    ASSERT_EQ(1, sol.fib(2));
    ASSERT_EQ(2, sol.fib(3));
    ASSERT_EQ(3, sol.fib(4));
    ASSERT_EQ(5, sol.fib(5));
    ASSERT_EQ(8, sol.fib(6));
}

// 
// -------------------------------------------------------------------------------------------

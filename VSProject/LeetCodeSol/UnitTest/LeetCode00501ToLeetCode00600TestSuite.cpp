/***********************************************************************************************************************
 *  @file    LeetCode00501ToLeetCode00600TestSuite.cpp  2022-06-18 10:17:03
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include <gmock/gmock.h>
#include "../Src/LeetCode00501ToLeetCode00600.hpp"

//----------------------------------------------------------------------------------------------------------------------
//Leetcode No.509 Fibonacci Number
#define LeetCode00509TestSuite DISABLED_LeetCode00509TestSuite
TEST(LeetCode00509TestSuite, FibonacciNumberTestSuiteTestCase)
{
    LeetCode00509 sol;

    ASSERT_EQ(0, sol.fib(0));
    ASSERT_EQ(1, sol.fib(1));
    ASSERT_EQ(1, sol.fib(2));
    ASSERT_EQ(2, sol.fib(3));
    ASSERT_EQ(3, sol.fib(4));
    ASSERT_EQ(5, sol.fib(5));
    ASSERT_EQ(8, sol.fib(6));
}

//
//----------------------------------------------------------------------------------------------------------------------

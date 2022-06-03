/*******************************************************************************************
 *  @file      LeetCode00204TestSuite.cpp 2015\12\7 21:48:47 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.204 Count Primes
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00204.hpp"

//LeetCode No.204 Count Primes
#define LeetCode00204TestSuite DISABLED_LeetCode00204TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase0)
{
    LeetCode00204 sol;
    ASSERT_EQ(0, sol.countPrimes(0));
    ASSERT_EQ(0, sol.countPrimes(1));
    ASSERT_EQ(0, sol.countPrimes(2));
}
// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase1)
{
    LeetCode00204 sol;
    ASSERT_EQ(1, sol.countPrimes(3));
}
// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase2)
{
    LeetCode00204 sol;
    ASSERT_EQ(2, sol.countPrimes(4));
    ASSERT_EQ(2, sol.countPrimes(5));
}
// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase3)
{
    LeetCode00204 sol;
    ASSERT_EQ(3, sol.countPrimes(6));
    ASSERT_EQ(3, sol.countPrimes(7));
}
// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase4)
{
    LeetCode00204 sol;
    ASSERT_EQ(4, sol.countPrimes(8));
    ASSERT_EQ(4, sol.countPrimes(9));
    ASSERT_EQ(4, sol.countPrimes(10));
    ASSERT_EQ(4, sol.countPrimes(11));
}
// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase5)
{
    LeetCode00204 sol;
    ASSERT_EQ(5, sol.countPrimes(12));
    ASSERT_EQ(5, sol.countPrimes(13));
}
// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase6)
{
    LeetCode00204 sol;
    ASSERT_EQ(6, sol.countPrimes(14));
    ASSERT_EQ(6, sol.countPrimes(15));
    ASSERT_EQ(6, sol.countPrimes(16));
    ASSERT_EQ(6, sol.countPrimes(17));
}

//
// -------------------------------------------------------------------------------------------
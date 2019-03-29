/*******************************************************************************************
 *  @file      CountPrimesTestSuite.cpp 2015\12\7 21:48:47 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.204 Count Primes
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/CountPrimesSolution.hpp"
#include "disabled.hpp"
 // ------------------------------------------------------------------------------------------
 //
TEST(CountPrimesTestSuite, CountPrimesTestSuiteTestCase0)
{
    CountPrimesSolution sol;
    ASSERT_EQ(0, sol.countPrimes(0));
    ASSERT_EQ(0, sol.countPrimes(1));
    ASSERT_EQ(0, sol.countPrimes(2));
}
// ------------------------------------------------------------------------------------------
//
TEST(CountPrimesTestSuite, CountPrimesTestSuiteTestCase1)
{
    CountPrimesSolution sol;
    ASSERT_EQ(1, sol.countPrimes(3));
}
// ------------------------------------------------------------------------------------------
//
TEST(CountPrimesTestSuite, CountPrimesTestSuiteTestCase2)
{
    CountPrimesSolution sol;
    ASSERT_EQ(2, sol.countPrimes(4));
    ASSERT_EQ(2, sol.countPrimes(5));
}
// ------------------------------------------------------------------------------------------
//
TEST(CountPrimesTestSuite, CountPrimesTestSuiteTestCase3)
{
    CountPrimesSolution sol;
    ASSERT_EQ(3, sol.countPrimes(6));
    ASSERT_EQ(3, sol.countPrimes(7));
}
// ------------------------------------------------------------------------------------------
//
TEST(CountPrimesTestSuite, CountPrimesTestSuiteTestCase4)
{
    CountPrimesSolution sol;
    ASSERT_EQ(4, sol.countPrimes(8));
    ASSERT_EQ(4, sol.countPrimes(9));
    ASSERT_EQ(4, sol.countPrimes(10));
    ASSERT_EQ(4, sol.countPrimes(11));
}
// ------------------------------------------------------------------------------------------
//
TEST(CountPrimesTestSuite, CountPrimesTestSuiteTestCase5)
{
    CountPrimesSolution sol;
    ASSERT_EQ(5, sol.countPrimes(12));
    ASSERT_EQ(5, sol.countPrimes(13));
}
// ------------------------------------------------------------------------------------------
//
TEST(CountPrimesTestSuite, CountPrimesTestSuiteTestCase6)
{
    CountPrimesSolution sol;
    ASSERT_EQ(6, sol.countPrimes(14));
    ASSERT_EQ(6, sol.countPrimes(15));
    ASSERT_EQ(6, sol.countPrimes(16));
    ASSERT_EQ(6, sol.countPrimes(17));
}

//
// -------------------------------------------------------------------------------------------
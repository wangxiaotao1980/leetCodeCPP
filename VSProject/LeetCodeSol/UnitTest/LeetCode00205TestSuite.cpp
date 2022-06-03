/*******************************************************************************************
 *  @file      LeetCode00205TestSuite.cpp 2015\12\15 16:58:48 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.205  Isomorphic Strings
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00205.hpp"


//LeetCode No.205  Isomorphic Strings
#define  LeetCode00205TestSuite DISABLED_LeetCode00205TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00205TestSuite, IsomorphicStringsTestSuiteTestCase0)
{
    LeetCode00205 sol;

    std::string s("f");
    std::string t("b");

    ASSERT_TRUE(sol.isIsomorphic(s, t));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00205TestSuite, IsomorphicStringsTestSuiteTestCase1)
{
    LeetCode00205 sol;

    std::string s("foo");
    std::string t("bar");

    ASSERT_FALSE(sol.isIsomorphic(s, t));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00205TestSuite, IsomorphicStringsTestSuiteTestCase2)
{
    LeetCode00205 sol;

    std::string s("egg");
    std::string t("add");

    ASSERT_TRUE(sol.isIsomorphic(s, t));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00205TestSuite, IsomorphicStringsTestSuiteTestCase3)
{
    LeetCode00205 sol;

    std::string s("paper");
    std::string t("title");

    ASSERT_TRUE(sol.isIsomorphic(s, t));
}
//
// -------------------------------------------------------------------------------------------
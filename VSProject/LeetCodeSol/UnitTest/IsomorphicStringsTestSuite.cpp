/*******************************************************************************************
 *  @file      IsomorphicStringsTestSuite.cpp 2015\12\15 16:58:48 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.205  Isomorphic Strings
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/IsomorphicStringsSolution.hpp"
#include "disabled.hpp"
 // ------------------------------------------------------------------------------------------
 //
TEST(IsomorphicStringsTestSuite, IsomorphicStringsTestSuiteTestCase0)
{
    IsomorphicStringsSolution sol;

    std::string s("f");
    std::string t("b");

    ASSERT_TRUE(sol.isIsomorphic(s, t));
}

// ------------------------------------------------------------------------------------------
//
TEST(IsomorphicStringsTestSuite, IsomorphicStringsTestSuiteTestCase1)
{
    IsomorphicStringsSolution sol;

    std::string s("foo");
    std::string t("bar");

    ASSERT_FALSE(sol.isIsomorphic(s, t));
}

// ------------------------------------------------------------------------------------------
//
TEST(IsomorphicStringsTestSuite, IsomorphicStringsTestSuiteTestCase2)
{
    IsomorphicStringsSolution sol;

    std::string s("egg");
    std::string t("add");

    ASSERT_TRUE(sol.isIsomorphic(s, t));
}

// ------------------------------------------------------------------------------------------
//
TEST(IsomorphicStringsTestSuite, IsomorphicStringsTestSuiteTestCase3)
{
    IsomorphicStringsSolution sol;

    std::string s("paper");
    std::string t("title");

    ASSERT_TRUE(sol.isIsomorphic(s, t));
}
//
// -------------------------------------------------------------------------------------------
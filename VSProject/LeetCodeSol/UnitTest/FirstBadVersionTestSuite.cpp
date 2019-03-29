/*******************************************************************************************
 *  @file      FirstBadVersionTestSuite.cpp 2015\12\21 19:00:28 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.278 First Bad Version
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/FirstBadVersionSolution.hpp"
#include  "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(FirstBadVersionTestSuite, FirstBadVersionTest2SuiteTestCase0)
{
    bool data[] ={ false, false };
    FirstBadVersionSolution sol(data);

    ASSERT_EQ(1, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(FirstBadVersionTestSuite, FirstBadVersionTestSuiteTestCase0)
{
    bool data[] ={ true, true, false };
    FirstBadVersionSolution sol(data);

    ASSERT_EQ(3, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(FirstBadVersionTestSuite, FirstBadVersionTestSuiteTestCase1)
{
    bool data[] ={ true, false, false };
    FirstBadVersionSolution sol(data);

    ASSERT_EQ(2, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(FirstBadVersionTestSuite, FirstBadVersionTestSuiteTestCase2)
{
    bool data[] ={ false, false, false };
    FirstBadVersionSolution sol(data);

    ASSERT_EQ(1, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(FirstBadVersionTestSuite, FirstBadVersionTestSuiteTestCase3)
{
    bool data[] ={ false, false, false, false };
    FirstBadVersionSolution sol(data);

    ASSERT_EQ(1, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(FirstBadVersionTestSuite, FirstBadVersionTestSuiteTestCase4)
{
    bool data[] ={ true, false, false, false };
    FirstBadVersionSolution sol(data);

    ASSERT_EQ(2, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(FirstBadVersionTestSuite, FirstBadVersionTestSuiteTestCase5)
{
    bool data[] ={ true, true, false, false };
    FirstBadVersionSolution sol(data);

    ASSERT_EQ(3, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(FirstBadVersionTestSuite, FirstBadVersionTestSuiteTestCase6)
{
    bool data[] ={ true, true, true, false };
    FirstBadVersionSolution sol(data);

    ASSERT_EQ(4, sol.firstBadVersion(sizeof(data)));
}

//
// -------------------------------------------------------------------------------------------
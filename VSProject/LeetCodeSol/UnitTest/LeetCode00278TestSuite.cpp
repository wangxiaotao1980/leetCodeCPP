/*******************************************************************************************
 *  @file      LeetCode00278TestSuite.cpp 2015\12\21 19:00:28 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.278 First Bad Version
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00278.hpp"

//LeetCode No.278 First Bad Version
#define LeetCode00278TestSuite DISABLED_LeetCode00278TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00278TestSuite, FirstBadVersionTest2SuiteTestCase0)
{
    bool data[] ={ false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(1, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase0)
{
    bool data[] ={ true, true, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(3, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase1)
{
    bool data[] ={ true, false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(2, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase2)
{
    bool data[] ={ false, false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(1, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase3)
{
    bool data[] ={ false, false, false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(1, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase4)
{
    bool data[] ={ true, false, false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(2, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase5)
{
    bool data[] ={ true, true, false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(3, sol.firstBadVersion(sizeof(data)));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase6)
{
    bool data[] ={ true, true, true, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(4, sol.firstBadVersion(sizeof(data)));
}

//
// -------------------------------------------------------------------------------------------
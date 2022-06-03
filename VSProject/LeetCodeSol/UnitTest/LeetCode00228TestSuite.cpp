/*******************************************************************************************
 *  @file      LeetCode00228TestSuite.cpp 2015\12\7 18:04:28 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.228 Summary Ranges
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00228.hpp"



//LeetCode No.228 Summary Ranges
#define LeetCode00228TestSuite DISABLED_LeetCode00228TestSuite
 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseEmpty)
{
    std::vector<int> data;
    LeetCode00228 sol;
    std::vector<std::string> result;
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseOneData)
{
    std::vector<int> data{ 0 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseTwoDatas0)
{
    std::vector<int> data{ 0, 1 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0->1" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseTwoDatas1)
{
    std::vector<int> data{ 0, 2 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0", "2" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseTreeDatas0)
{
    std::vector<int> data{ 0, 1, 2 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0->2" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseTreeDatas2)
{
    std::vector<int> data{ 0, 1, 4 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0->1", "4" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteDemo)
{
    std::vector<int> data{ 0, 1, 2, 4, 5, 7 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0->2", "4->5", "7" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

//
// -------------------------------------------------------------------------------------------
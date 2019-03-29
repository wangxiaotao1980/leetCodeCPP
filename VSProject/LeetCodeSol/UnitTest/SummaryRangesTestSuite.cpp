/*******************************************************************************************
 *  @file      SummaryRangesTestSuite.cpp 2015\12\7 18:04:28 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.228 Summary Ranges
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/SummaryRangesSolution.hpp"
#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(SummaryRangesTestSuite, SummaryRangesTestSuiteTestCaseEmpty)
{
    std::vector<int> data;
    SummaryRangesSolution sol;
    std::vector<std::string> result;
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(SummaryRangesTestSuite, SummaryRangesTestSuiteTestCaseOneData)
{
    std::vector<int> data{ 0 };
    SummaryRangesSolution sol;
    std::vector<std::string> result{ "0" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(SummaryRangesTestSuite, SummaryRangesTestSuiteTestCaseTwoDatas0)
{
    std::vector<int> data{ 0, 1 };
    SummaryRangesSolution sol;
    std::vector<std::string> result{ "0->1" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(SummaryRangesTestSuite, SummaryRangesTestSuiteTestCaseTwoDatas1)
{
    std::vector<int> data{ 0, 2 };
    SummaryRangesSolution sol;
    std::vector<std::string> result{ "0", "2" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(SummaryRangesTestSuite, SummaryRangesTestSuiteTestCaseTreeDatas0)
{
    std::vector<int> data{ 0, 1, 2 };
    SummaryRangesSolution sol;
    std::vector<std::string> result{ "0->2" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(SummaryRangesTestSuite, SummaryRangesTestSuiteTestCaseTreeDatas2)
{
    std::vector<int> data{ 0, 1, 4 };
    SummaryRangesSolution sol;
    std::vector<std::string> result{ "0->1", "4" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(SummaryRangesTestSuite, SummaryRangesTestSuiteDemo)
{
    std::vector<int> data{ 0, 1, 2, 4, 5, 7 };
    SummaryRangesSolution sol;
    std::vector<std::string> result{ "0->2", "4->5", "7" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

//
// -------------------------------------------------------------------------------------------
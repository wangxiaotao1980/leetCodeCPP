/*******************************************************************************************
 *  @file      LeetCode00295TestSuite.cpp 2015\12\11 19:08:55 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.295 Find Median from Data Stream
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00295.hpp"


//LeetCode No.295 Find Median from Data Stream
#define LeetCode00295TestSuite DISABLED_LeetCode00295TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00295TestSuite, MedianFinderTestSuiteTestCase0)
{
    LeetCode00295 mediaFinder;

    mediaFinder.addNum(1);
    ASSERT_DOUBLE_EQ(1.0, mediaFinder.findMedian());
    mediaFinder.addNum(2);
    ASSERT_DOUBLE_EQ(1.5, mediaFinder.findMedian());
    mediaFinder.addNum(4);
    ASSERT_DOUBLE_EQ(2, mediaFinder.findMedian());
    mediaFinder.addNum(100);
    ASSERT_DOUBLE_EQ(3, mediaFinder.findMedian());
}

TEST(LeetCode00295TestSuite, MedianFinderTestSuiteTestCase1)
{
    LeetCode00295 mediaFinder;

    mediaFinder.addNum(100);
    ASSERT_DOUBLE_EQ(100, mediaFinder.findMedian());
    mediaFinder.addNum(2);
    ASSERT_DOUBLE_EQ(51, mediaFinder.findMedian());
    mediaFinder.addNum(1);
    ASSERT_DOUBLE_EQ(2, mediaFinder.findMedian());
    mediaFinder.addNum(0);
    ASSERT_DOUBLE_EQ(1.5, mediaFinder.findMedian());
}

TEST(LeetCode00295TestSuite, MedianFinderTestSuiteTestCase2)
{
    LeetCode00295 mediaFinder;

    mediaFinder.addNum(100);
    ASSERT_DOUBLE_EQ(100.0, mediaFinder.findMedian());
    mediaFinder.addNum(0);
    ASSERT_DOUBLE_EQ(50.0, mediaFinder.findMedian());
    mediaFinder.addNum(1);
    ASSERT_DOUBLE_EQ(1, mediaFinder.findMedian());
    mediaFinder.addNum(10);
    ASSERT_DOUBLE_EQ(5.5, mediaFinder.findMedian());
}

//
// -------------------------------------------------------------------------------------------
/*******************************************************************************************
 *  @file      MedianFinderTestSuite.cpp 2015\12\11 19:08:55 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.295 Find Median from Data Stream
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/MedianFinder.hpp"
#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(MedianFinderTestSuite, MedianFinderTestSuiteTestCase0)
{
    MedianFinder mediaFinder;

    mediaFinder.addNum(1);
    ASSERT_FLOAT_EQ(1.0, mediaFinder.findMedian());
    mediaFinder.addNum(2);
    ASSERT_FLOAT_EQ(1.5, mediaFinder.findMedian());
    mediaFinder.addNum(4);
    ASSERT_FLOAT_EQ(2, mediaFinder.findMedian());
    mediaFinder.addNum(100);
    ASSERT_FLOAT_EQ(3, mediaFinder.findMedian());
}

TEST(MedianFinderTestSuite, MedianFinderTestSuiteTestCase1)
{
    MedianFinder mediaFinder;

    mediaFinder.addNum(100);
    ASSERT_FLOAT_EQ(100, mediaFinder.findMedian());
    mediaFinder.addNum(2);
    ASSERT_FLOAT_EQ(51, mediaFinder.findMedian());
    mediaFinder.addNum(1);
    ASSERT_FLOAT_EQ(2, mediaFinder.findMedian());
    mediaFinder.addNum(0);
    ASSERT_FLOAT_EQ(1.5, mediaFinder.findMedian());
}

TEST(MedianFinderTestSuite, MedianFinderTestSuiteTestCase2)
{
    MedianFinder mediaFinder;

    mediaFinder.addNum(100);
    ASSERT_FLOAT_EQ(100.0, mediaFinder.findMedian());
    mediaFinder.addNum(0);
    ASSERT_FLOAT_EQ(50.0, mediaFinder.findMedian());
    mediaFinder.addNum(1);
    ASSERT_FLOAT_EQ(1, mediaFinder.findMedian());
    mediaFinder.addNum(10);
    ASSERT_FLOAT_EQ(5.5, mediaFinder.findMedian());
}

//
// -------------------------------------------------------------------------------------------
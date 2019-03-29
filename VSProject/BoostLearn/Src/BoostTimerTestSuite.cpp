/*******************************************************************************************
 *  @file      BoostTimerTestSuite.cpp 2019\2\15 13:10:05 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (÷–Œƒ±‡¬Î≤‚ ‘)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include <iostream>
#include "boost/timer.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(BoostTimerTestSuite, BoostTimerTestSuiteTestCase)
{
    boost::timer t;
    std::cout << "max timespan     : " << t.elapsed_max() / 3600 << "h" << std::endl;
    std::cout << "min timespan     : " << t.elapsed_min() << "s" << std::endl;

    std::cout << "now time elapsed : " << t.elapsed() << std::endl;
}

// 
// -------------------------------------------------------------------------------------------

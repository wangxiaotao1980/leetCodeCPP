/*******************************************************************************************
 *  @file      HouseRobberTestSuite.cpp 2015\12\14 16:25:07 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.198 House Robber
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/HouseRobberSolution.hpp"

#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(HouseRobberTestSuite, HouseRobberTestSuiteTestCase0)
{
    HouseRobberSolution sol;
    std::vector<int> data{ 0 };

    ASSERT_EQ(0, sol.rob(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(HouseRobberTestSuite, HouseRobberTestSuiteTestCase1)
{
    HouseRobberSolution sol;
    std::vector<int> data{ 1 };

    ASSERT_EQ(1, sol.rob(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(HouseRobberTestSuite, HouseRobberTestSuiteTestCase2)
{
    HouseRobberSolution sol;
    std::vector<int> data{ 1, 2 };

    ASSERT_EQ(2, sol.rob(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(HouseRobberTestSuite, HouseRobberTestSuiteTestCase3)
{
    HouseRobberSolution sol;
    std::vector<int> data{ 2, 1 };

    ASSERT_EQ(2, sol.rob(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(HouseRobberTestSuite, HouseRobberTestSuiteTestCase4)
{
    HouseRobberSolution sol;
    std::vector<int> data{ 1, 2, 3 };

    ASSERT_EQ(4, sol.rob(data));
}

// ------------------------------------------------------------------------------------------
//
TEST(HouseRobberTestSuite, HouseRobberTestSuiteTestCase5)
{
    HouseRobberSolution sol;
    std::vector<int> data{ 1, 9, 3 };

    ASSERT_EQ(9, sol.rob(data));
}

//
// -------------------------------------------------------------------------------------------
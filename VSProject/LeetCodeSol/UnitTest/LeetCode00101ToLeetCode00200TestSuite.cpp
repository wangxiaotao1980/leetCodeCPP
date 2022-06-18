/***********************************************************************************************************************
 *  @file    LeetCode00101ToLeetCode00200TestSuite.cpp  2022-06-18 00:09:15
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include <gmock/gmock.h>
#include "../Src/LeetCode00101ToLeetCode00200.hpp"


//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.136 Single Number
#define  LeetCode00136TestSuite DISABLED_LeetCode00136TestSuite
TEST(LeetCode00136TestSuite, SingleNumberTestSuiteTestCase)
{
    std::vector<int> data{ 1, 2, 1 };
    LeetCode00136 sol;

    ASSERT_EQ(2, sol.singleNumber(data));
}

TEST(LeetCode00136TestSuite, SingleNumberTestSuiteTestCase1)
{
    std::vector<int> data{ 1, 1, 1 };
    LeetCode00136 sol;

    ASSERT_EQ(1, sol.singleNumber(data));
}

//----------------------------------------------------------------------------------------------------------------------
//Leetcode No.167 Two Sum II - Input array is sorted
#define LeetCode00167TestSuite DISABLED_LeetCode00167TestSuite
TEST(LeetCode00167TestSuite, TwoSumIITestSuiteTestCase)
{

    LeetCode00167 sol;
    std::vector<int> numbers{ 2, 7, 11, 15 };
    std::vector<int> result{ 1, 2 };
    int target = 9;

    ASSERT_EQ(result, sol.twoSum(numbers, target));


}
//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.198 House Robber
#define LeetCode00198TestSuite DISABLED_LeetCode00198TestSuite
TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase0)
{
    LeetCode00198 sol;
    std::vector<int> data{ 0 };

    ASSERT_EQ(0, sol.rob(data));
}

TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase1)
{
    LeetCode00198 sol;
    std::vector<int> data{ 1 };

    ASSERT_EQ(1, sol.rob(data));
}

TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase2)
{
    LeetCode00198 sol;
    std::vector<int> data{ 1, 2 };

    ASSERT_EQ(2, sol.rob(data));
}

TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase3)
{
    LeetCode00198 sol;
    std::vector<int> data{ 2, 1 };

    ASSERT_EQ(2, sol.rob(data));
}

TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase4)
{
    LeetCode00198 sol;
    std::vector<int> data{ 1, 2, 3 };

    ASSERT_EQ(4, sol.rob(data));
}

TEST(LeetCode00198TestSuite, HouseRobberTestSuiteTestCase5)
{
    LeetCode00198 sol;
    std::vector<int> data{ 1, 9, 3 };

    ASSERT_EQ(9, sol.rob(data));
}

//
//----------------------------------------------------------------------------------------------------------------------

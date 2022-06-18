/***********************************************************************************************************************
 *  @file    LeetCode00401ToLeetCode00500TestSuite.cpp  2022-06-18 10:21:50
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/
#include <gmock/gmock.h>
#include "../Src/LeetCode00401ToLeetCode00500.hpp"
//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.405 Convert a Number to Hexadecimal
#define LeetCode00405TestSuite DISABLED_LeetCode00405TestSuite
TEST(LeetCode00405TestSuite, ConvertANumberToHexadecimalTestSuiteTestCase)
{
    LeetCode00405 sol;

    std::string result("ffffffff");
    ASSERT_EQ(result, sol.toHex(-1));
}

TEST(LeetCode00405TestSuite, ConvertANumberToHexadecimalTestSuiteTestCase0)
{
    LeetCode00405 sol;

    std::string result("f");
    ASSERT_EQ(result, sol.toHex(15));
}

TEST(LeetCode00405TestSuite, ConvertANumberToHexadecimalTestSuiteTestCase1)
{
    LeetCode00405 sol;

    std::string result("0");
    ASSERT_EQ(result, sol.toHex(-0));
}

//----------------------------------------------------------------------------------------------------------------------
#define LeetCode00453TestSuite DISABLED_LeetCode00453TestSuite
template <typename T>
class LeetCode00453TestSuite :
    public testing::Test
{
};

//----------------------------------------------------------------------------------------------------------------------
//
TYPED_TEST_SUITE_P(LeetCode00453TestSuite);
//----------------------------------------------------------------------------------------------------------------------
//
TYPED_TEST_P(LeetCode00453TestSuite, TestCase0)
{
    TypeParam sol;

    std::vector<int> data;

    ASSERT_EQ(0, sol.minMoves(data));
}

//----------------------------------------------------------------------------------------------------------------------
//
TYPED_TEST_P(LeetCode00453TestSuite, TestCase1)
{
    TypeParam sol;

    std::vector<int> data{ 1, 2, 3 };

    ASSERT_EQ(3, sol.minMoves(data));
}


//----------------------------------------------------------------------------------------------------------------------
//
TYPED_TEST_P(LeetCode00453TestSuite, TestCase3)
{
    TypeParam sol;

    std::vector<int> data{ 1, 1, 1 };

    ASSERT_EQ(0, sol.minMoves(data));
}


//----------------------------------------------------------------------------------------------------------------------
//
REGISTER_TYPED_TEST_SUITE_P(LeetCode00453TestSuite, TestCase0, TestCase1, TestCase3);
using TypesList = testing::Types<LeetCode00453, LeetCode00453_1, LeetCode00453_2>;
INSTANTIATE_TYPED_TEST_SUITE_P(TestPSuiteName, LeetCode00453TestSuite, TypesList);

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.485 Max Consecutive Ones
#define LeetCode00485TestSuite DISABLED_LeetCode00485TestSuite
TEST(LeetCode00485TestSuite, MaxConsecutiveOnesTestSuiteTestCase)
{
    LeetCode00485 sol;
    std::vector<int> data{ 1,1,0,1,1,1 };

    ASSERT_EQ(3, sol.findMaxConsecutiveOnes(data));
}




//
//----------------------------------------------------------------------------------------------------------------------

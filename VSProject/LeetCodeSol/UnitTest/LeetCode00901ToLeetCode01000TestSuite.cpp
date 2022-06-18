/***********************************************************************************************************************
 *  @file    LeetCode00901ToLeetCode01000TestSuite.cpp  2022-06-18 09:39:07
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include <gmock/gmock.h>
#include "../Src/LeetCode00901ToLeetCode01000.hpp"

//LeetCode No.917. Reverse Only Letters
#define LeetCode00917TestSuite DISABLED_LeetCode00917TestSuite
TEST(LeetCode00917TestSuite, ReverseOnlyLettersTestSuiteTestCase0)
{
    std::string s("ab-cd");
    std::string result("dc-ba");

    LeetCode00901ToLeetCode01000 sol;

    ASSERT_EQ(result, sol.reverseOnlyLetters(s));

}

TEST(LeetCode00917TestSuite, ReverseOnlyLettersTestSuiteTestCase1)
{
    std::string s("a-bC-dEf-ghIj");
    std::string result("j-Ih-gfE-dCba");

    LeetCode00901ToLeetCode01000 sol;

    ASSERT_EQ(result, sol.reverseOnlyLetters(s));

}

TEST(LeetCode00917TestSuite, ReverseOnlyLettersTestSuiteTestCase2)
{
    std::string s("Test1ng-Leet=code-Q!");
    std::string result("Qedo1ct-eeLg=ntse-T!");

    LeetCode00901ToLeetCode01000 sol;

    ASSERT_EQ(result, sol.reverseOnlyLetters(s));

}
//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.922 Sort Array By Parity II
#define LeetCode00922TestSuite DISABLED_LeetCode00922TestSuite
TEST(LeetCode00922TestSuite, SortArrayByParityIITestSuiteTestCase)
{
    LeetCode00901ToLeetCode01000 sol;
    std::vector<int> data{ 4, 2, 5, 7 };
    std::vector<int> result{ 4, 5, 2, 7 };
    ASSERT_EQ(result, sol.sortArrayByParityII(data));

}
//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.961 N-Repeated Element in Size 2N Array
#define LeetCode00961TestSuite  DISABLED_LeetCode00961TestSuite
TEST(LeetCode00961TestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase0)
{
    LeetCode00901ToLeetCode01000 sol;

    std::vector<int> data0{ 1, 2, 3, 3 };
    ASSERT_EQ(3, sol.repeatedNTimes(data0));
}

TEST(LeetCode00961TestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase1)
{
    LeetCode00901ToLeetCode01000 sol;
    std::vector<int> data0{ 2,1,2,5,3,2 };
    ASSERT_EQ(2, sol.repeatedNTimes(data0));
}

TEST(LeetCode00961TestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase2)
{
    LeetCode00901ToLeetCode01000 sol;
    std::vector<int> data0{ 5,1,5,2,5,3,5,4 };
    ASSERT_EQ(5, sol.repeatedNTimes(data0));
}

TEST(LeetCode00961TestSuite, NRepeatedElementInSize2NArrayTestSuiteTestCase3)
{
    LeetCode00901ToLeetCode01000 sol;
    std::vector<int> data0{ 2, 1, 4, 2 };
    ASSERT_EQ(2, sol.repeatedNTimes(data0));
}
//----------------------------------------------------------------------------------------------------------------------
//Leetcode No.977 Squares of a Sorted Array
#define LeetCode00977TestSuite DISABLED_LeetCode00977TestSuite
TEST(LeetCode00977TestSuite, SquaresOfASortedArrayTestSuiteTestCase0)
{
    LeetCode00901ToLeetCode01000 sol;
    std::vector<int>      data{ -4, -1, 0, 3, 10 };
    std::vector<int>      result{ 0, 1, 9, 16, 100 };

    ASSERT_EQ(result, sol.sortedSquares(data));
}

TEST(LeetCode00977TestSuite, SquaresOfASortedArrayTestSuiteTestCase1)
{
    LeetCode00901ToLeetCode01000 sol;
    std::vector<int>      data{ -7, -3, 2, 3, 11 };
    std::vector<int>      result{ 4, 9, 9, 49, 121 };

    ASSERT_EQ(result, sol.sortedSquares(data));
}

//----------------------------------------------------------------------------------------------------------------------
//Leetcode No.1000
#define LeetCode01000TestSuite DISABLED_LeetCode01000TestSuite
TEST(LeetCode01000TestSuite, TestCase0)
{
    LeetCode00901ToLeetCode01000 sol;

    std::vector<int> stones = { 3, 2, 4, 1 };
    int k = 2;

    ASSERT_EQ(20, sol.mergeStones(stones, k));
}

TEST(LeetCode01000TestSuite, TestCase1)
{
    LeetCode00901ToLeetCode01000 sol;

    std::vector<int> stones = { 3, 2, 4, 1 };
    int k = 3;

    ASSERT_EQ(-1, sol.mergeStones(stones, k));
}

TEST(LeetCode01000TestSuite, TestCase2)
{
    LeetCode00901ToLeetCode01000 sol;

    std::vector<int> stones = { 3,5,1,2,6 };
    int k = 3;

    ASSERT_EQ(25, sol.mergeStones(stones, k));
}

TEST(LeetCode01000TestSuite, TestCase3)
{
    LeetCode00901ToLeetCode01000 sol;

    std::vector<int> stones = { 6, 4, 4, 2 };
    int k = 2;

    ASSERT_EQ(40, sol.mergeStones(stones, k));
}

//
//----------------------------------------------------------------------------------------------------------------------

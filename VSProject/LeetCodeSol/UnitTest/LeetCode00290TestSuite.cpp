/*******************************************************************************************
 *  @file      LeetCode00290TestSuite.cpp 2015\12\21 14:48:43 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.290  Word Pattern
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00290.hpp"


 //LeetCode No.290  Word Pattern
#define LeetCode00290TestSuite DISABLED_LeetCode00290TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00290TestSuite, WordPatternTestSuiteTestCase1)
{
    LeetCode00290 sol;

    std::string pattern = "abba";
    std::string str = "dog cat cat dog";

    ASSERT_TRUE(sol.wordPattern(pattern, str));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00290TestSuite, WordPatternTestSuiteTestCase2)
{
    LeetCode00290 sol;

    std::string pattern = "abba";
    std::string str     =  "dog cat cat fish";

    ASSERT_FALSE(sol.wordPattern(pattern, str));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00290TestSuite, WordPatternTestSuiteTestCase3)
{
    LeetCode00290 sol;

    std::string pattern = "aaaa";
    std::string str     =  "dog cat cat dog";

    ASSERT_FALSE(sol.wordPattern(pattern, str));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00290TestSuite, WordPatternTestSuiteTestCase4)
{
    LeetCode00290 sol;

    std::string pattern = "abba";
    std::string str     =  "dog dog dog dog";

    ASSERT_FALSE(sol.wordPattern(pattern, str));
}

//
// -------------------------------------------------------------------------------------------
/*******************************************************************************************
 *  @file      WordPatternTestSuite.cpp 2015\12\21 14:48:43 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.290  Word Pattern
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/WordPatternSolution.hpp"
#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(WordPatternTestSuite, WordPatternTestSuiteTestCase1)
{
    WordPatternSolution sol;

    std::string pattern = "abba";
    std::string str = "dog cat cat dog";

    ASSERT_TRUE(sol.wordPattern(pattern, str));
}

// ------------------------------------------------------------------------------------------
//
TEST(WordPatternTestSuite, WordPatternTestSuiteTestCase2)
{
    WordPatternSolution sol;

    std::string pattern = "abba";
    std::string str     =  "dog cat cat fish";

    ASSERT_FALSE(sol.wordPattern(pattern, str));
}

// ------------------------------------------------------------------------------------------
//
TEST(WordPatternTestSuite, WordPatternTestSuiteTestCase3)
{
    WordPatternSolution sol;

    std::string pattern = "aaaa";
    std::string str     =  "dog cat cat dog";

    ASSERT_FALSE(sol.wordPattern(pattern, str));
}

// ------------------------------------------------------------------------------------------
//
TEST(WordPatternTestSuite, WordPatternTestSuiteTestCase4)
{
    WordPatternSolution sol;

    std::string pattern = "abba";
    std::string str     =  "dog dog dog dog";

    ASSERT_FALSE(sol.wordPattern(pattern, str));
}

//
// -------------------------------------------------------------------------------------------
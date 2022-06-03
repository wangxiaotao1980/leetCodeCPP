/*******************************************************************************************
 *  @file      LeetCode00405TestSuite.cpp 2019\2\3 20:59:08 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "../Src/LeetCode00405.hpp"

//LeetCode No.405 Convert a Number to Hexadecimal
#define LeetCode00405TestSuite DISABLED_LeetCode00405TestSuite

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00405TestSuite, ConvertANumberToHexadecimalTestSuiteTestCase)
{
    LeetCode00405 sol;

    std::string result("ffffffff"); 
    ASSERT_EQ(result, sol.toHex(-1));
}


// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00405TestSuite, ConvertANumberToHexadecimalTestSuiteTestCase0)
{
    LeetCode00405 sol;

    std::string result("f");
    ASSERT_EQ(result, sol.toHex(15));
}


// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00405TestSuite, ConvertANumberToHexadecimalTestSuiteTestCase1)
{
    LeetCode00405 sol;

    std::string result("0");
    ASSERT_EQ(result, sol.toHex(-0));
}

// 
// -------------------------------------------------------------------------------------------

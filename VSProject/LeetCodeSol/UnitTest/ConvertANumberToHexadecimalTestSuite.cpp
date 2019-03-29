/*******************************************************************************************
 *  @file      ConvertANumberToHexadecimalTestSuite.cpp 2019\2\3 20:59:08 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "disabled.hpp"
#include "../Src/ConvertANumberToHexadecimal.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(ConvertANumberToHexadecimalTestSuite, ConvertANumberToHexadecimalTestSuiteTestCase)
{
    ConvertANumberToHexadecimal sol;

    std::string result("ffffffff"); 
    ASSERT_EQ(result, sol.toHex(-1));
}


// ------------------------------------------------------------------------------------------
//
TEST(ConvertANumberToHexadecimalTestSuite, ConvertANumberToHexadecimalTestSuiteTestCase0)
{
    ConvertANumberToHexadecimal sol;

    std::string result("f");
    ASSERT_EQ(result, sol.toHex(15));
}


// ------------------------------------------------------------------------------------------
//
TEST(ConvertANumberToHexadecimalTestSuite, ConvertANumberToHexadecimalTestSuiteTestCase1)
{
    ConvertANumberToHexadecimal sol;

    std::string result("0");
    ASSERT_EQ(result, sol.toHex(-0));
}

// 
// -------------------------------------------------------------------------------------------

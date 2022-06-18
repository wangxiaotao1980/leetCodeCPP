/***********************************************************************************************************************
 *  @file      2022-06-18 15:29:08
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/
#include <gmock/gmock.h>
#include "../Src/LeetCode01601ToLeetCode01700.hpp"
//----------------------------------------------------------------------------------------------------------------------
//No 1646. Get Maximum in Generated Array
#define LeetCode01646TestSuite DISABLED_LeetCode01646TestSuite
TEST(LeetCode01646TestSuite, getMaximumGeneratedTestCase0)
{
    LeetCode01646 sol;
    ASSERT_EQ(3, sol.getMaximumGenerated(7));
    ASSERT_EQ(1, sol.getMaximumGenerated(2));
    ASSERT_EQ(2, sol.getMaximumGenerated(2));
}



//
//----------------------------------------------------------------------------------------------------------------------
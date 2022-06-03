/*******************************************************************************************
 *  @file      LeetCode00257TestSuite.cpp 2015\12\15 15:38:54 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.257 Binary Tree Paths
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00257.hpp"
#include "../Src/Struct.hpp"

 //LeetCode No.257 Binary Tree Paths
#define LeetCode00257TestSuite DISABLED_LeetCode00257TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00257TestSuite, BinaryTreePathsTestSuiteTestCaseEmpty)
{
    LeetCode00257 sol;

    std::vector<std::string> result;

    ASSERT_EQ(result, sol.binaryTreePaths(0));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00257TestSuite, BinaryTreePathsTestSuiteTestCase0)
{
    TreeNode a(0);

    LeetCode00257 sol;

    std::vector<std::string> result{ "0" };

    ASSERT_EQ(result, sol.binaryTreePaths(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00257TestSuite, BinaryTreePathsTestSuiteTestCase1)
{
    TreeNode a(0);
    TreeNode b(1);
    TreeNode c(2);

    a.left  = &b;
    a.right = &c;
    LeetCode00257 sol;

    std::vector<std::string> result{ "0->1", "0->2" };

    ASSERT_EQ(result, sol.binaryTreePaths(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00257TestSuite, BinaryTreePathsTestSuiteTestCase2)
{
    TreeNode a(1);
    TreeNode b(2);
    TreeNode c(3);
    TreeNode d(5);

    a.left  = &b;
    a.right = &c;
    b.right = &d;

    LeetCode00257 sol;

    std::vector<std::string> result{ "1->2->5", "1->3" };

    ASSERT_EQ(result, sol.binaryTreePaths(&a));
}
//
// -------------------------------------------------------------------------------------------
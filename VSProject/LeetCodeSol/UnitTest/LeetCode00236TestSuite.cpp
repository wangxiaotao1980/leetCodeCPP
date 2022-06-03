/*******************************************************************************************
 *  @file      LeetCode00236TestSuite.cpp 2015\12\23 11:05:17 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.236 Lowest Common Ancestor of a Binary Tree
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LeetCode00236.hpp"
#include "../Src/Struct.hpp"


 //LeetCode No.236 Lowest Common Ancestor of a Binary Tree
#define LeetCode00236TestSuite DISABLED_LeetCode00236TestSuite
 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00236TestSuite, LowestCommonAncestorOfABinaryTreeTestSuiteTestCase0)
{
    TreeNode treeNode3(3);

    TreeNode treeNode5(5);
    TreeNode treeNode1(1);

    TreeNode treeNode6(6);
    TreeNode treeNode2(2);
    TreeNode treeNode0(0);
    TreeNode treeNode8(8);

    TreeNode treeNode7(7);
    TreeNode treeNode4(4);

    treeNode3.left  = &treeNode5;
    treeNode3.right = &treeNode1;

    treeNode5.left  = &treeNode6;
    treeNode5.right = &treeNode2;

    treeNode1.left  = &treeNode0;
    treeNode1.right = &treeNode8;

    treeNode2.left  = &treeNode0;
    treeNode2.right = &treeNode4;

    LeetCode00236 sol;
    ASSERT_EQ(&treeNode3, sol.lowestCommonAncestor(&treeNode3, &treeNode5, &treeNode1));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00236TestSuite, LowestCommonAncestorOfABinaryTreeTestSuiteTestCase1)
{
    TreeNode treeNode3(3);

    TreeNode treeNode5(5);
    TreeNode treeNode1(1);

    TreeNode treeNode6(6);
    TreeNode treeNode2(2);
    TreeNode treeNode0(0);
    TreeNode treeNode8(8);

    TreeNode treeNode7(7);
    TreeNode treeNode4(4);

    treeNode3.left  = &treeNode5;
    treeNode3.right = &treeNode1;

    treeNode5.left  = &treeNode6;
    treeNode5.right = &treeNode2;

    treeNode1.left  = &treeNode0;
    treeNode1.right = &treeNode8;

    treeNode2.left  = &treeNode0;
    treeNode2.right = &treeNode4;

    LeetCode00236 sol;
    ASSERT_EQ(&treeNode5, sol.lowestCommonAncestor(&treeNode3, &treeNode5, &treeNode4));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00236TestSuite, LowestCommonAncestorOfABinaryTreeTestSuiteTestCase2)
{
    TreeNode treeNode3(3);

    TreeNode treeNode5(5);
    TreeNode treeNode1(1);

    TreeNode treeNode6(6);
    TreeNode treeNode2(2);
    TreeNode treeNode0(0);
    TreeNode treeNode8(8);

    TreeNode treeNode7(7);
    TreeNode treeNode4(4);

    treeNode3.left  = &treeNode5;
    treeNode3.right = &treeNode1;

    treeNode5.left  = &treeNode6;
    treeNode5.right = &treeNode2;

    treeNode1.left  = &treeNode0;
    treeNode1.right = &treeNode8;

    treeNode2.left  = &treeNode0;
    treeNode2.right = &treeNode4;

    LeetCode00236 sol;
    ASSERT_EQ(&treeNode5, sol.lowestCommonAncestor(&treeNode3, &treeNode6, &treeNode4));
}

//
// -------------------------------------------------------------------------------------------
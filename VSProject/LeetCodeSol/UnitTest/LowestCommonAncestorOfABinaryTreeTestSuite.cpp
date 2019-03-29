/*******************************************************************************************
 *  @file      LowestCommonAncestorOfABinaryTreeTestSuite.cpp 2015\12\23 11:05:17 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.236 Lowest Common Ancestor of a Binary Tree
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/LowestCommonAncestorOfABinaryTreeSolution.hpp"
#include "../Src/Struct.hpp"
#include "disabled.hpp"
 // ------------------------------------------------------------------------------------------
 //
TEST(LowestCommonAncestorOfABinaryTreeTestSuite, LowestCommonAncestorOfABinaryTreeTestSuiteTestCase0)
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

    LowestCommonAncestorOfABinaryTreeSolution sol;
    ASSERT_EQ(&treeNode3, sol.lowestCommonAncestor(&treeNode3, &treeNode5, &treeNode1));
}

// ------------------------------------------------------------------------------------------
//
TEST(LowestCommonAncestorOfABinaryTreeTestSuite, LowestCommonAncestorOfABinaryTreeTestSuiteTestCase1)
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

    LowestCommonAncestorOfABinaryTreeSolution sol;
    ASSERT_EQ(&treeNode5, sol.lowestCommonAncestor(&treeNode3, &treeNode5, &treeNode4));
}

// ------------------------------------------------------------------------------------------
//
TEST(LowestCommonAncestorOfABinaryTreeTestSuite, LowestCommonAncestorOfABinaryTreeTestSuiteTestCase2)
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

    LowestCommonAncestorOfABinaryTreeSolution sol;
    ASSERT_EQ(&treeNode5, sol.lowestCommonAncestor(&treeNode3, &treeNode6, &treeNode4));
}

//
// -------------------------------------------------------------------------------------------
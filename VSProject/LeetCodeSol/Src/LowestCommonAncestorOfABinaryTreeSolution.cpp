/*******************************************************************************************
 *  @file      LowestCommonAncestorOfABinaryTreeSolution.cpp 2015\12\23 10:45:37 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.236 Lowest Common Ancestor of a Binary Tree
 *******************************************************************************************/

#include "LowestCommonAncestorOfABinaryTreeSolution.hpp"
#include "Struct.hpp"
#include <algorithm>

 // ------------------------------------------------------------------------------------------
 //
TreeNode* LowestCommonAncestorOfABinaryTreeSolution::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if (!root)
    {
        return root;
    }

    if ((p == root) || (q == root))
    {
        return root;
    }

    TreeNode* pLeftAncestor  = lowestCommonAncestor(root->left, p, q);
    TreeNode* pRightAncestor = lowestCommonAncestor(root->right, p, q);

    if (pLeftAncestor && pRightAncestor)
    {
        return root;
    }

    if (pLeftAncestor)
    {
        return pLeftAncestor;
    }

    if (pRightAncestor)
    {
        return pRightAncestor;
    }

    return 0;
}

//
// ------------------------------------------------------------------------------------------
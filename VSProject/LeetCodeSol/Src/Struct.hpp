/*******************************************************************************************
 *  @file      Struct.hpp 2015\12\7 20:32:19 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/
#ifndef STRUCT_B670C323_B9B8_482A_BC3D_48B9C6C4BFBC_HPP__
#define STRUCT_B670C323_B9B8_482A_BC3D_48B9C6C4BFBC_HPP__

#include <vector>
/*******************************************************************************************/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(0)
    {
    }
};

/**
 * Definition for a binary tree node.
 *
 */
struct TreeNode
{
    int       val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(0), right(0)
    {
    }
};


class Node
{
public:
    int val;
    std::vector<Node*> children;

    Node()
    {
    }

    Node(int _val, std::vector<Node*> _children)
    {
        val = _val;
        children = _children;
    }
};

/*******************************************************************************************/
#endif// STRUCT_B670C323_B9B8_482A_BC3D_48B9C6C4BFBC_HPP__
/*******************************************************************************************
 *  @file      LeetCode00257.hpp 2015\12\15 13:23:51 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.257 Binary Tree Paths
 *******************************************************************************************/
#ifndef BINARYTREEPATHSSOLUTION_F151D1E5_2A5F_4A3F_92E5_1125A9961C29_HPP__
#define BINARYTREEPATHSSOLUTION_F151D1E5_2A5F_4A3F_92E5_1125A9961C29_HPP__

#include <vector>
#include <string>
#include <deque>

struct TreeNode;

/*******************************************************************************************/

/**
 * The class <code>BinaryTreePathsSolution</code>
 *
 */
class LeetCode00257
{
public:
    std::vector<std::string> binaryTreePaths(TreeNode* root);

private:
    void pushNodeInStack(TreeNode* pNode);
private:
    std::deque<TreeNode*>    m_nodeDeque;
    std::vector<std::string> m_result;
};

/*******************************************************************************************/
#endif// BINARYTREEPATHSSOLUTION_F151D1E5_2A5F_4A3F_92E5_1125A9961C29_HPP__

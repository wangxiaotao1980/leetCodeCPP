/*******************************************************************************************
 *  @file      LeetCode00257.cpp 2015\12\15 13:24:02 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.257 Binary Tree Paths
 *******************************************************************************************/

#include "LeetCode00257.hpp"
#include "Struct.hpp"
#include <sstream>

 // ------------------------------------------------------------------------------------------
 //
std::vector<std::string> LeetCode00257::binaryTreePaths(TreeNode* root)
{
    if (root)
    {
        pushNodeInStack(root);
    }

    return m_result;
}

// ------------------------------------------------------------------------------------------
//
void LeetCode00257::pushNodeInStack(TreeNode* pNode)
{
    m_nodeDeque.push_back(pNode);

    TreeNode*& top = m_nodeDeque.back();

    if (!(top->left) && !(top->right))
    {
        std::stringstream ostr;
        for (std::deque<TreeNode*>::const_iterator cit = m_nodeDeque.cbegin(); cit != m_nodeDeque.cend(); ++cit)
        {
            ostr << (*cit)->val << "->";
        }

        std::string tempStr = ostr.str();
        m_result.push_back(tempStr.substr(0, tempStr.size() - 2));
    }

    if (top->left)
    {
        pushNodeInStack(top->left);
    }

    if (top->right)
    {
        pushNodeInStack(top->right);
    }

    m_nodeDeque.pop_back();
}

//
// ------------------------------------------------------------------------------------------
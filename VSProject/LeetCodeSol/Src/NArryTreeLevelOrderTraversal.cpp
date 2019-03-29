/*******************************************************************************************
 *  @file      NArryTreeLevelOrderTraversal.cpp 2019\2\3 23:27:33 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include "NArryTreeLevelOrderTraversal.hpp"
#include "Struct.hpp"
#include <deque>
// ------------------------------------------------------------------------------------------
//
std::vector<std::vector<int>> NArryTreeLevelOrderTraversal::levelOrder(Node* root)
{
    std::deque<std::pair<std::size_t, Node*>> deque;

    std::vector<std::vector<int>> result;

    if (root != nullptr)
    {
        deque.push_back(std::make_pair(0u, root));
    }

    while (!deque.empty())
    {
        std::pair<std::size_t, Node*> item = deque.front();
        deque.pop_front();

        if (result.size() == item.first)
        {
            result.push_back(std::vector<int>());
        }

        std::vector<std::vector<int>>::reverse_iterator rit = result.rbegin();

        rit->push_back(item.second->val);

        for(std::vector<Node*>::iterator it = item.second->children.begin(); it != item.second->children.end(); ++it)
        {
            deque.push_back(std::make_pair(result.size(), *it));
        }

    }


    return result;
}

// 
// -------------------------------------------------------------------------------------------
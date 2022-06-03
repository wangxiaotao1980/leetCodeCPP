/*******************************************************************************************
 *  @file      LeetCode00002.cpp 2015\12\7 18:00:31 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.2 Add Two Numbers
 *******************************************************************************************/

#include "LeetCode00002.hpp"
#include "Struct.hpp"
 // ------------------------------------------------------------------------------------------
 //

ListNode* LeetCode00002::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* headNode = new ListNode(0);
    ListNode* current = headNode;

    int isopsephy = 0;
    while (l1 && l2)
    {
        current->next = new ListNode(l1->val + l2->val + isopsephy);

        isopsephy = (current->next->val) / 10;
        current->next->val = (current->next->val) % 10;

        current = current->next;
        l1 = l1->next;
        l2 = l2->next;
    }

    while (l1)
    {
        current->next = new ListNode(l1->val + isopsephy);

        isopsephy = (current->next->val) / 10;
        current->next->val = (current->next->val) % 10;

        current = current->next;
        l1 = l1->next;
    }

    while (l2)
    {
        current->next = new ListNode(l2->val + isopsephy);

        isopsephy = (current->next->val) / 10;
        current->next->val = (current->next->val) % 10;

        current = current->next;
        l2 = l2->next;
    }

    if (isopsephy)
    {
        current->next = new ListNode(isopsephy);
    }

    ListNode* returnNode = headNode->next;
    delete headNode;
    return returnNode;
}

//
// ------------------------------------------------------------------------------------------
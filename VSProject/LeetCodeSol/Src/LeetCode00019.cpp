/*******************************************************************************************
 *  @file      RemoveNthNodeFromEndOfListSolution.cpp 2015\12\7 18:00:31 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.19 Remove Nth Node From End of List
 *******************************************************************************************/

#include "LeetCode00019.hpp"
#include "Struct.hpp"
 // ------------------------------------------------------------------------------------------
 // LeetCode No.19 Remove Nth Node From End of List
ListNode* LeetCode00019::removeNthFromEnd(ListNode* head, int n)
{
    ListNode* pRealHead = new ListNode(0);
    pRealHead->next = head;

    ListNode* pFirst  = pRealHead;
    ListNode* pSecond = head;
    for (int i = 0; i < n - 1; ++i)
    {
        pSecond = pSecond->next;
    }

    while (pSecond->next)
    {
        pFirst  = pFirst->next;
        pSecond = pSecond->next;
    }

    ListNode* pDelete = pFirst->next;

    pFirst->next = pFirst->next->next;
    delete pDelete;

    ListNode* pReturn = pRealHead->next;
    delete pRealHead;

    return pReturn;
}

//
// ------------------------------------------------------------------------------------------
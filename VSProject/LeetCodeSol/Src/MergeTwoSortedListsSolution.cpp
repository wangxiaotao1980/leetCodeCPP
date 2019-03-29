/*******************************************************************************************
 *  @file      MergeTwoSortedListsSolution.cpp 2015\12\7 18:00:31 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.21 Merge Two Sorted Lists
 *******************************************************************************************/
#include "MergeTwoSortedListsSolution.hpp"
#include "Struct.hpp"
 // ------------------------------------------------------------------------------------------
 // LeetCode No.21 Merge Two Sorted Lists
ListNode* MergeTwoSortedListsSolution::mergeTwoLists(ListNode* l1, ListNode* l2)
{
    ListNode* pRealHead = new ListNode(0);
    ListNode* pCurrent  = pRealHead;

    while (l1 && l2)
    {
        if ((l1->val) > (l2->val))
        {
            pCurrent->next = l2;
            pCurrent = pCurrent->next;
            l2 = l2->next;
        }
        else
        {
            pCurrent->next = l1;
            pCurrent = pCurrent->next;
            l1 = l1->next;
        }
    }

    if (l1)
    {
        pCurrent->next = l1;
    }

    if (l2)
    {
        pCurrent->next = l2;
    }

    ListNode* pResult = pRealHead->next;
    delete pRealHead;
    return pResult;
}

//
// ------------------------------------------------------------------------------------------
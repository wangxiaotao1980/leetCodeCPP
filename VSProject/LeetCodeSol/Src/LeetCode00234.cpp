/*******************************************************************************************
 *  @file      LeetCode00234.cpp 2015\12\15 17:19:04 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.234  Palindrome Linked List
 *******************************************************************************************/

#include "LeetCode00234.hpp"
#include "Struct.hpp"

 // ------------------------------------------------------------------------------------------
 //
bool LeetCode00234::isPalindrome(ListNode* head)
{
    ListNode realHead(0);
    realHead.next = head;
    ListNode* pSlow = &realHead;
    ListNode* pFast = &realHead;

    while ((pFast->next) && (pFast->next->next))
    {
        pSlow = pSlow->next;
        pFast = pFast->next->next;
    }

    ListNode* pend = reverseList(pSlow->next);
    ListNode* pbegin = head;
    while (pbegin && pend)
    {
        if (pbegin->val == pend->val)
        {
            pbegin = pbegin->next;
            pend   = pend->next;
        }
        else
        {
            return false;
        }
    }

    return true;
}

// ------------------------------------------------------------------------------------------
//
ListNode* LeetCode00234::reverseList(ListNode* head)
{
    ListNode firstNode(0);
    ListNode* pFirstNode = &firstNode;
    pFirstNode->next = head;

    ListNode* pend = pFirstNode->next;

    ListNode* p1st = pFirstNode;
    ListNode* p2ed = pFirstNode->next;

    ListNode* pResult = 0;

    while (p2ed)
    {
        pResult         = p2ed;
        ListNode* pTemp = p2ed->next;
        p2ed->next      = p1st;
        p1st            = p2ed;
        p2ed            = pTemp;
    }

    if (pend)
    {
        pend->next = 0;
    }

    return pResult;
}

//
// ------------------------------------------------------------------------------------------
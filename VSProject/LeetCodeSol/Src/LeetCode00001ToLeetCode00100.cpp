/***********************************************************************************************************************
 *  @file    LeetCode00001ToLeetCode00100.hpp  2022-06-17 23:39:15
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include "LeetCode00001ToLeetCode00100.hpp"
#include "Struct.hpp"

#include <unordered_map>
#include <algorithm>

//----------------------------------------------------------------------------------------------------------------------
// No.1 Two Sum
std::vector<int> LeetCode00001::twoSum(std::vector<int>& nums, int target)
{
    std::unordered_multimap<int, int> theMap;

    for (int i = 0; i < nums.size(); ++i)
    {
        theMap.insert(std::make_pair(nums[i], i + 1));
    }

    std::vector<int> result;
    for (auto cit = theMap.cbegin(); cit != theMap.cend(); ++cit)
    {
        int theOther = target - (cit->first);

        if (theOther == cit->first)
        {
            std::pair<std::unordered_multimap<int, int>::const_iterator,
                std::unordered_multimap<int, int>::const_iterator> rangeIter = theMap.equal_range(theOther);

            std::vector<int> temResult;
            for (auto cit = rangeIter.first; cit != rangeIter.second;
                ++cit)
            {
                temResult.push_back(cit->second);
            }
            if (temResult.size() >= 2)
            {
                std::sort(temResult.begin(), temResult.end());

                return std::vector<int>{temResult[0], temResult[1]};
            }
        }
        else
        {
            std::unordered_multimap<int, int>::const_iterator theResult = theMap.find(theOther);

            if (theResult != theMap.end())
            {
                std::vector<int> temResult;
                temResult.push_back(cit->second);
                temResult.push_back(theResult->second);

                if (temResult[0] > temResult[1])
                {
                    temResult[0] ^= temResult[1];
                    temResult[1] ^= temResult[0];
                    temResult[0] ^= temResult[1];
                }

                return temResult;
            }
        }
    }

    return std::vector<int>();
}

//----------------------------------------------------------------------------------------------------------------------
// No.2 Add Two Numbers 
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

//----------------------------------------------------------------------------------------------------------------------
// LeetCode No.19 Remove Nth Node From End of List
ListNode* LeetCode00019::removeNthFromEnd(ListNode* head, int n)
{
    ListNode* pRealHead = new ListNode(0);
    pRealHead->next = head;

    ListNode* pFirst = pRealHead;
    ListNode* pSecond = head;
    for (int i = 0; i < n - 1; ++i)
    {
        pSecond = pSecond->next;
    }

    while (pSecond->next)
    {
        pFirst = pFirst->next;
        pSecond = pSecond->next;
    }

    ListNode* pDelete = pFirst->next;

    pFirst->next = pFirst->next->next;
    delete pDelete;

    ListNode* pReturn = pRealHead->next;
    delete pRealHead;

    return pReturn;
}

//----------------------------------------------------------------------------------------------------------------------
// LeetCode No.21 Merge Two Sorted Lists
ListNode* LeetCode00021::mergeTwoLists(ListNode* l1, ListNode* l2)
{
    ListNode* pRealHead = new ListNode(0);
    ListNode* pCurrent = pRealHead;

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
//----------------------------------------------------------------------------------------------------------------------

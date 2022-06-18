/***********************************************************************************************************************
 *  @file    LeetCode00001ToLeetCode00100.hpp  2022-06-17 23:39:15
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/
#pragma once
#include <vector>

struct ListNode;
//----------------------------------------------------------------------------------------------------------------------
class LeetCode00001
{
public:
    // No.1 Two Sum
    std::vector<int> twoSum(std::vector<int>& nums, int target);
};
class LeetCode00002
{
public:
    // No.2 Add Two Numbers 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};
class LeetCode00019
{
public:
    // No.19 Remove Nth Node From End of List
    ListNode* removeNthFromEnd(ListNode* head, int n);
};

class LeetCode00021
{
public:
    // No.21 Merge Two Sorted Lists
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};

//
//----------------------------------------------------------------------------------------------------------------------

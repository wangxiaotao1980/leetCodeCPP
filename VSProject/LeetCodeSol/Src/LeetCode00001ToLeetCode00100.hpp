/***********************************************************************************************************************
 *  @file    LeetCode00001ToLeetCode00100.hpp  2022-06-17 23:39:15
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/
#pragma once
#include <vector>

struct ListNode;
//----------------------------------------------------------------------------------------------------------------------
// No.1 Two Sum
class LeetCode00001
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target);
};

// No.2 Add Two Numbers
class LeetCode00002
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

// No.19 Remove Nth Node From End of List
class LeetCode00019
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n);
};

// No.21 Merge Two Sorted Lists
class LeetCode00021
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};

// No.53
class LeetCode00053
{
public:
    int maxSubArray(std::vector<int>& nums);
};
//
//----------------------------------------------------------------------------------------------------------------------

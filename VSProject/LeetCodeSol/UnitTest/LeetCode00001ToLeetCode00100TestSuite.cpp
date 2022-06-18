/***********************************************************************************************************************
 *  @file    LeetCode00001ToLeetCode00100TestSuite.cpp  2022-06-17 23:48:59
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include <gmock/gmock.h>
#include "../Src/LeetCode00001ToLeetCode00100.hpp"
#include "../Src/Struct.hpp"

// LeetCode No.1 Two Sum
#define  LeetCode00001TestSuite DISABLED_LeetCode00001TestSuite
//----------------------------------------------------------------------------------------------------------------------
//

TEST(LeetCode00001TestSuite, TowSumTestSuiteTestCase0)
{
    LeetCode00001 sol;

    std::vector<int> thedata{ 2, 7, 11, 15 };
    int target = 9;

    std::vector<int> result = sol.twoSum(thedata, target);
    std::vector<int> expect{ 1, 2 };
    ASSERT_EQ(expect, result);
}

TEST(LeetCode00001TestSuite, TowSumTestSuiteTestCase1)
{
    LeetCode00001 sol;

    std::vector<int> thedata{ 2, 7, 11, 15, 7 };
    int target = 14;

    std::vector<int> result = sol.twoSum(thedata, target);
    std::vector<int> expect{ 2, 5 };
    ASSERT_EQ(expect, result);
}


// LeetCode No.2 Add Two Numbers
#define LeetCode00002TestSuite  DISABLED_LeetCode00002TestSuite
//----------------------------------------------------------------------------------------------------------------------
//
namespace
{
    void DeleteNodeList(ListNode* l1)
    {
        while (l1)
        {
            ListNode* cur = l1;
            l1 = l1->next;
            delete cur;
        }
    }
}


TEST(LeetCode00002TestSuite, AddTwoNumbersTestSuiteEmptyPointerTestCase)
{
    LeetCode00002 sol;
    ListNode* l1 = 0;
    ListNode* l2 = 0;

    ASSERT_EQ(static_cast<ListNode*>(0), sol.addTwoNumbers(l1, l2));
}

TEST(LeetCode00002TestSuite, AddTwoNumbersTestSuiteOneAddNULLTestCase0)
{
    LeetCode00002 sol;
    ListNode* l1 = new ListNode(1);
    ListNode* l2 = 0;
    ListNode* pResult = sol.addTwoNumbers(l1, l2);

    ASSERT_EQ(1, pResult->val);
    DeleteNodeList(l1);
    DeleteNodeList(l2);
    DeleteNodeList(pResult);
}

TEST(LeetCode00002TestSuite, AddTwoNumbersTestSuiteOneAddNULLTestCase1)
{
    LeetCode00002 sol;
    ListNode* l1 = new ListNode(1);
    ListNode* l2 = 0;
    ListNode* pResult = sol.addTwoNumbers(l2, l1);

    ASSERT_EQ(1, pResult->val);
    DeleteNodeList(l1);
    DeleteNodeList(l2);
    DeleteNodeList(pResult);
}

TEST(LeetCode00002TestSuite, AddTwoNumbersTestSuiteOneAddOneTestCase)
{
    LeetCode00002 sol;
    ListNode* l1 = new ListNode(1);
    ListNode* l2 = new ListNode(2);
    ListNode* pResult = sol.addTwoNumbers(l1, l2);

    ASSERT_EQ(3, pResult->val);
    DeleteNodeList(l1);
    DeleteNodeList(l2);
    DeleteNodeList(pResult);
}

TEST(LeetCode00002TestSuite, AddTwoNumbersTestSuiteOneAddOneReturnTestCase)
{
    LeetCode00002 sol;
    ListNode* l1 = new ListNode(1);
    ListNode* l2 = new ListNode(9);
    ListNode* pResult = sol.addTwoNumbers(l1, l2);
    ListNode* pResultBegin = pResult;

    ASSERT_EQ(0, pResultBegin->val);
    pResultBegin = pResultBegin->next;
    ASSERT_EQ(1, pResultBegin->val);

    DeleteNodeList(l1);
    DeleteNodeList(l2);
    DeleteNodeList(pResult);
}

TEST(LeetCode00002TestSuite, AddTwoNumbersTestSuiteTestCase0)
{
    LeetCode00002 sol;
    ListNode* l1 = new ListNode(1);
    ListNode* pL1Begin = l1;

    ListNode* l2 = new ListNode(9);
    ListNode* pL2Begin = l2;

    l2->next = new ListNode(9);
    l2 = l2->next;

    ListNode* pResult = sol.addTwoNumbers(pL1Begin, pL2Begin);
    ListNode* pResultBegin = pResult;

    ASSERT_EQ(0, pResultBegin->val);
    pResultBegin = pResultBegin->next;
    ASSERT_EQ(0, pResultBegin->val);
    pResultBegin = pResultBegin->next;
    ASSERT_EQ(1, pResultBegin->val);

    DeleteNodeList(l1);
    DeleteNodeList(l2);
    DeleteNodeList(pResult);
}

TEST(LeetCode00002TestSuite, AddTwoNumbersTestSuiteTestCase1)
{
    LeetCode00002 sol;
    ListNode* l1 = new ListNode(2);
    ListNode* pL1Begin = l1;

    l1->next = new ListNode(4);
    l1 = l1->next;
    l1->next = new ListNode(3);
    l1 = l1->next;

    ListNode* l2 = new ListNode(5);
    ListNode* pL2Begin = l2;

    l2->next = new ListNode(6);
    l2 = l2->next;
    l2->next = new ListNode(4);
    l2 = l2->next;

    ListNode* pResult = sol.addTwoNumbers(pL1Begin, pL2Begin);
    ListNode* pResultBegin = pResult;

    ASSERT_EQ(7, pResultBegin->val);
    pResultBegin = pResultBegin->next;
    ASSERT_EQ(0, pResultBegin->val);
    pResultBegin = pResultBegin->next;
    ASSERT_EQ(8, pResultBegin->val);

    DeleteNodeList(l1);
    DeleteNodeList(l2);
    DeleteNodeList(pResult);
}

TEST(LeetCode00002TestSuite, AddTwoNumbersTestSuiteTestCase2)
{
    LeetCode00002 sol;
    ListNode* l1 = new ListNode(2);
    ListNode* pL1Begin = l1;

    l1->next = new ListNode(4);
    l1 = l1->next;
    l1->next = new ListNode(3);
    l1 = l1->next;

    ListNode* l2 = new ListNode(9);
    ListNode* pL2Begin = l2;

    l2->next = new ListNode(6);
    l2 = l2->next;
    l2->next = new ListNode(7);
    l2 = l2->next;

    ListNode* pResult = sol.addTwoNumbers(pL1Begin, pL2Begin);
    ListNode* pResultBegin = pResult;

    ASSERT_EQ(1, pResultBegin->val);
    pResultBegin = pResultBegin->next;
    ASSERT_EQ(1, pResultBegin->val);
    pResultBegin = pResultBegin->next;
    ASSERT_EQ(1, pResultBegin->val);
    pResultBegin = pResultBegin->next;
    ASSERT_EQ(1, pResultBegin->val);

    DeleteNodeList(l1);
    DeleteNodeList(l2);
    DeleteNodeList(pResult);
}

//----------------------------------------------------------------------------------------------------------------------
// LeetCode No.19 Remove Nth Node From End of List
#define LeetCode00019TestSuite DISABLED_LeetCode00019TestSuite
TEST(LeetCode00019TestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase0)
{
    LeetCode00019 sol;
    ListNode* l1 = new ListNode(2);
    ListNode* pL1Begin = l1;

    ListNode* pResult = sol.removeNthFromEnd(l1, 1);
    ASSERT_EQ(static_cast<ListNode*>(0), pResult);

    DeleteNodeList(pResult);
}


TEST(LeetCode00019TestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase1)
{
    LeetCode00019 sol;
    ListNode* l = new ListNode(2);
    ListNode* pBegin = l;
    l->next = new ListNode(3);
    l = l->next;

    ListNode* pResult = sol.removeNthFromEnd(pBegin, 1);
    ListNode* pDelete = pResult;

    ASSERT_EQ(2, pResult->val);
    pResult = pResult->next;

    DeleteNodeList(pDelete);
}

TEST(LeetCode00019TestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase2)
{
    LeetCode00019 sol;
    ListNode* l = new ListNode(2);
    ListNode* pBegin = l;
    l->next = new ListNode(3);
    l = l->next;

    ListNode* pResult = sol.removeNthFromEnd(pBegin, 2);
    ListNode* pDelete = pResult;

    ASSERT_EQ(3, pResult->val);
    pResult = pResult->next;

    DeleteNodeList(pDelete);
}

TEST(LeetCode00019TestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase3)
{
    LeetCode00019 sol;
    ListNode* l = new ListNode(1);
    ListNode* pBegin = l;
    l->next = new ListNode(2);
    l = l->next;
    l->next = new ListNode(3);
    l = l->next;
    l->next = new ListNode(4);
    l = l->next;
    l->next = new ListNode(5);
    l = l->next;

    ListNode* pResult = sol.removeNthFromEnd(pBegin, 1);
    ListNode* pDelete = pResult;

    ASSERT_EQ(1, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(2, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(3, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(4, pResult->val);
    pResult = pResult->next;

    DeleteNodeList(pDelete);
}

TEST(LeetCode00019TestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase4)
{
    LeetCode00019 sol;
    ListNode* l = new ListNode(1);
    ListNode* pBegin = l;
    l->next = new ListNode(2);
    l = l->next;
    l->next = new ListNode(3);
    l = l->next;
    l->next = new ListNode(4);
    l = l->next;
    l->next = new ListNode(5);
    l = l->next;

    ListNode* pResult = sol.removeNthFromEnd(pBegin, 2);
    ListNode* pDelete = pResult;

    ASSERT_EQ(1, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(2, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(3, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(5, pResult->val);
    pResult = pResult->next;

    DeleteNodeList(pDelete);
}

TEST(LeetCode00019TestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase5)
{
    LeetCode00019 sol;
    ListNode* l = new ListNode(1);
    ListNode* pBegin = l;
    l->next = new ListNode(2);
    l = l->next;
    l->next = new ListNode(3);
    l = l->next;
    l->next = new ListNode(4);
    l = l->next;
    l->next = new ListNode(5);
    l = l->next;

    ListNode* pResult = sol.removeNthFromEnd(pBegin, 5);
    ListNode* pDelete = pResult;

    ASSERT_EQ(2, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(3, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(4, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(5, pResult->val);
    pResult = pResult->next;

    DeleteNodeList(pDelete);
}

//----------------------------------------------------------------------------------------------------------------------
// LeetCode No.21 Merge Two Sorted Lists
#define  LeetCode00021TestSuite DISABLED_LeetCode00021TestSuite
TEST(LeetCode00021TestSuite, MergeTwoSortedListsTestSuiteTestCase0)
{
    LeetCode00021 sol;
    ListNode* l1 = 0;
    ListNode* pL1Begin = l1;

    ListNode* l2 = 0;
    ListNode* pL2Begin = l2;

    ListNode* pResult = sol.mergeTwoLists(pL1Begin, pL2Begin);
    ListNode* pDelete = pResult;

    ASSERT_EQ(static_cast<ListNode*>(0), pResult);

    DeleteNodeList(pDelete);
}

TEST(LeetCode00021TestSuite, MergeTwoSortedListsTestSuiteTestCase1)
{
    LeetCode00021 sol;
    ListNode* l1 = 0;
    ListNode* pL1Begin = l1;

    ListNode* l2 = new ListNode(1);
    ListNode* pL2Begin = l2;

    ListNode* pResult = sol.mergeTwoLists(pL1Begin, pL2Begin);
    ListNode* pDelete = pResult;

    ASSERT_EQ(1, pResult->val);

    DeleteNodeList(pDelete);
}

TEST(LeetCode00021TestSuite, MergeTwoSortedListsTestSuiteTestCase2)
{
    LeetCode00021 sol;
    ListNode* l1 = 0;
    ListNode* pL1Begin = l1;

    ListNode* l2 = new ListNode(1);
    ListNode* pL2Begin = l2;
    l2->next = new ListNode(2);
    l2 = l2->next;

    ListNode* pResult = sol.mergeTwoLists(pL2Begin, pL1Begin);
    ListNode* pDelete = pResult;

    ASSERT_EQ(1, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(2, pResult->val);
    pResult = pResult->next;

    DeleteNodeList(pDelete);
}

TEST(LeetCode00021TestSuite, MergeTwoSortedListsTestSuiteTestCase3)
{
    LeetCode00021 sol;
    ListNode* l1 = new ListNode(1);
    ListNode* pL1Begin = l1;
    l1->next = new ListNode(2);
    l1 = l1->next;

    ListNode* l2 = new ListNode(1);
    ListNode* pL2Begin = l2;
    l2->next = new ListNode(2);
    l2 = l2->next;

    ListNode* pResult = sol.mergeTwoLists(pL2Begin, pL1Begin);
    ListNode* pDelete = pResult;

    ASSERT_EQ(1, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(1, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(2, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(2, pResult->val);
    pResult = pResult->next;

    DeleteNodeList(pDelete);
}

TEST(LeetCode00021TestSuite, MergeTwoSortedListsTestSuiteTestCase4)
{
    LeetCode00021 sol;
    ListNode* l1 = new ListNode(1);
    ListNode* pL1Begin = l1;
    l1->next = new ListNode(3);
    l1 = l1->next;

    ListNode* l2 = new ListNode(2);
    ListNode* pL2Begin = l2;
    l2->next = new ListNode(4);
    l2 = l2->next;

    ListNode* pResult = sol.mergeTwoLists(pL2Begin, pL1Begin);
    ListNode* pDelete = pResult;

    ASSERT_EQ(1, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(2, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(3, pResult->val);
    pResult = pResult->next;
    ASSERT_EQ(4, pResult->val);
    pResult = pResult->next;

    DeleteNodeList(pDelete);
}


//----------------------------------------------------------------------------------------------------------------------
// LeetCode No.21 Merge Two Sorted Lists
#define  LeetCode00053TestSuite DISABLED_LeetCode00053TestSuite
TEST(LeetCode00053TestSuite, maxSubArrayTestCase0)
{
    std::vector<int> nums{ -2,1,-3,4,-1,2,1,-5,4 };
    LeetCode00053 sol;

    ASSERT_EQ(6, sol.maxSubArray(nums));
}

TEST(LeetCode00053TestSuite, maxSubArrayTestCase1)
{
    std::vector<int> nums{ 1 };
    LeetCode00053 sol;

    ASSERT_EQ(1, sol.maxSubArray(nums));
}

TEST(LeetCode00053TestSuite, maxSubArrayTestCase2)
{
    std::vector<int> nums{ 5,4,-1,7,8 };
    LeetCode00053 sol;

    ASSERT_EQ(23, sol.maxSubArray(nums));
}

//
//----------------------------------------------------------------------------------------------------------------------

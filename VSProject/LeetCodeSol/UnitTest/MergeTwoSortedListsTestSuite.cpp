/*******************************************************************************************
 *  @file      MergeTwoSortedListsTestSuite.cpp 2015\12\8 15:23:16 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.21 Merge Two Sorted Lists
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/MergeTwoSortedListsSolution.hpp"
#include "../Src/Struct.hpp"
#include "disabled.hpp"
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

// ------------------------------------------------------------------------------------------
//
TEST(MergeTwoSortedListsTestSuite, MergeTwoSortedListsTestSuiteTestCase0)
{
    MergeTwoSortedListsSolution sol;
    ListNode* l1 = 0;
    ListNode* pL1Begin = l1;

    ListNode* l2 = 0;
    ListNode* pL2Begin = l2;

    ListNode* pResult = sol.mergeTwoLists(pL1Begin, pL2Begin);
    ListNode* pDelete = pResult;

    ASSERT_EQ(static_cast<ListNode*>(0), pResult);

    DeleteNodeList(pDelete);
}

// ------------------------------------------------------------------------------------------
//
TEST(MergeTwoSortedListsTestSuite, MergeTwoSortedListsTestSuiteTestCase1)
{
    MergeTwoSortedListsSolution sol;
    ListNode* l1 = 0;
    ListNode* pL1Begin = l1;

    ListNode* l2 = new ListNode(1);
    ListNode* pL2Begin = l2;

    ListNode* pResult = sol.mergeTwoLists(pL1Begin, pL2Begin);
    ListNode* pDelete = pResult;

    ASSERT_EQ(1, pResult->val);

    DeleteNodeList(pDelete);
}

// ------------------------------------------------------------------------------------------
//
TEST(MergeTwoSortedListsTestSuite, MergeTwoSortedListsTestSuiteTestCase2)
{
    MergeTwoSortedListsSolution sol;
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

// ------------------------------------------------------------------------------------------
//
TEST(MergeTwoSortedListsTestSuite, MergeTwoSortedListsTestSuiteTestCase3)
{
    MergeTwoSortedListsSolution sol;
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

// ------------------------------------------------------------------------------------------
//
TEST(MergeTwoSortedListsTestSuite, MergeTwoSortedListsTestSuiteTestCase4)
{
    MergeTwoSortedListsSolution sol;
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
//
// -------------------------------------------------------------------------------------------
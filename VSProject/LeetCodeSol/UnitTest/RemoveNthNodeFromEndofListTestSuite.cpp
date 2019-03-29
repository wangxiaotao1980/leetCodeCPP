/*******************************************************************************************
 *  @file      RemoveNthNodeFromEndofListTestSuite.cpp 2015\12\8 11:31:45 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.19 Remove Nth Node From End of List
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/RemoveNthNodeFromEndOfListSolution.hpp"
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
TEST(RemoveNthNodeFromEndofListTestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase0)
{
    RemoveNthNodeFromEndOfListSolution sol;
    ListNode* l1 = new ListNode(2);
    ListNode* pL1Begin = l1;

    ListNode* pResult = sol.removeNthFromEnd(l1, 1);
    ASSERT_EQ(static_cast<ListNode*>(0), pResult);

    DeleteNodeList(pResult);
}

// ------------------------------------------------------------------------------------------
//
TEST(RemoveNthNodeFromEndofListTestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase1)
{
    RemoveNthNodeFromEndOfListSolution sol;
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

// ------------------------------------------------------------------------------------------
//
TEST(RemoveNthNodeFromEndofListTestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase2)
{
    RemoveNthNodeFromEndOfListSolution sol;
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

// ------------------------------------------------------------------------------------------
//
TEST(RemoveNthNodeFromEndofListTestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase3)
{
    RemoveNthNodeFromEndOfListSolution sol;
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

// ------------------------------------------------------------------------------------------
//
TEST(RemoveNthNodeFromEndofListTestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase4)
{
    RemoveNthNodeFromEndOfListSolution sol;
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

// ------------------------------------------------------------------------------------------
//
TEST(RemoveNthNodeFromEndofListTestSuite, RemoveNthNodeFromEndofListTestSuiteTestCase5)
{
    RemoveNthNodeFromEndOfListSolution sol;
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

//
// -------------------------------------------------------------------------------------------
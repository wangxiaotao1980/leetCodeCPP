/*******************************************************************************************
 *  @file      AddTwoNumbersTestSuite.cpp 2015\12\7 20:35:37 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.2 Add Two Numbers
 *******************************************************************************************/

#include "gtest/gtest.h"

#include "disabled.hpp"
#include "../Src/AddTwoNumbersSolution.hpp"
#include "../Src/Struct.hpp"

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
TEST(AddTwoNumbersTestSuite, AddTwoNumbersTestSuiteEmptyPointerTestCase)
{
    AddTwoNumbersSolution sol;
    ListNode* l1 = 0;
    ListNode* l2 = 0;

    ASSERT_EQ(static_cast<ListNode*>(0), sol.addTwoNumbers(l1, l2));
}
// ------------------------------------------------------------------------------------------
//
TEST(AddTwoNumbersTestSuite, AddTwoNumbersTestSuiteOneAddNULLTestCase0)
{
    AddTwoNumbersSolution sol;
    ListNode* l1 = new ListNode(1);
    ListNode* l2 = 0;
    ListNode* pResult = sol.addTwoNumbers(l1, l2);

    ASSERT_EQ(1, pResult->val);
    DeleteNodeList(l1);
    DeleteNodeList(l2);
    DeleteNodeList(pResult);
}
// ------------------------------------------------------------------------------------------
//
TEST(AddTwoNumbersTestSuite, AddTwoNumbersTestSuiteOneAddNULLTestCase1)
{
    AddTwoNumbersSolution sol;
    ListNode* l1 = new ListNode(1);
    ListNode* l2 = 0;
    ListNode* pResult = sol.addTwoNumbers(l2, l1);

    ASSERT_EQ(1, pResult->val);
    DeleteNodeList(l1);
    DeleteNodeList(l2);
    DeleteNodeList(pResult);
}
// ------------------------------------------------------------------------------------------
//
TEST(AddTwoNumbersTestSuite, AddTwoNumbersTestSuiteOneAddOneTestCase)
{
    AddTwoNumbersSolution sol;
    ListNode* l1 = new ListNode(1);
    ListNode* l2 = new ListNode(2);
    ListNode* pResult = sol.addTwoNumbers(l1, l2);

    ASSERT_EQ(3, pResult->val);
    DeleteNodeList(l1);
    DeleteNodeList(l2);
    DeleteNodeList(pResult);
}
// ------------------------------------------------------------------------------------------
//
TEST(AddTwoNumbersTestSuite, AddTwoNumbersTestSuiteOneAddOneReturnTestCase)
{
    AddTwoNumbersSolution sol;
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
// ------------------------------------------------------------------------------------------
//
TEST(AddTwoNumbersTestSuite, AddTwoNumbersTestSuiteTestCase0)
{
    AddTwoNumbersSolution sol;
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
// ------------------------------------------------------------------------------------------
//
TEST(AddTwoNumbersTestSuite, AddTwoNumbersTestSuiteTestCase1)
{
    AddTwoNumbersSolution sol;
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
// ------------------------------------------------------------------------------------------
//
TEST(AddTwoNumbersTestSuite, AddTwoNumbersTestSuiteTestCase2)
{
    AddTwoNumbersSolution sol;
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
//
// -------------------------------------------------------------------------------------------
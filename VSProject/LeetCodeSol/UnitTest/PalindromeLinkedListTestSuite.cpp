/*******************************************************************************************
 *  @file      PalindromeLinkedListTestSuite.cpp 2015\12\15 19:45:21 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.234  Palindrome Linked List
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/PalindromeLinkedListSolution.hpp"
#include "../Src/Struct.hpp"
#include "disabled.hpp"
 // ------------------------------------------------------------------------------------------
 //
TEST(PalindromeLinkedListTestSuite, PalindromeLinkedListTestSuiteTestCase0)
{
    PalindromeLinkedListSolution sol;

    ListNode* pNode = 0;
    ASSERT_TRUE(sol.isPalindrome(pNode));
}

// ------------------------------------------------------------------------------------------
//
TEST(PalindromeLinkedListTestSuite, PalindromeLinkedListTestSuiteTestCase1)
{
    PalindromeLinkedListSolution sol;

    ListNode a(0);
    ASSERT_TRUE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(PalindromeLinkedListTestSuite, PalindromeLinkedListTestSuiteTestCase2False)
{
    PalindromeLinkedListSolution sol;

    ListNode a(0);
    ListNode b(1);

    a.next = &b;

    ASSERT_FALSE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(PalindromeLinkedListTestSuite, PalindromeLinkedListTestSuiteTestCase2True)
{
    PalindromeLinkedListSolution sol;

    ListNode a(1);
    ListNode b(1);

    a.next = &b;

    ASSERT_TRUE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(PalindromeLinkedListTestSuite, PalindromeLinkedListTestSuiteTestCase3False)
{
    PalindromeLinkedListSolution sol;

    ListNode a(0);
    ListNode b(1);
    ListNode c(1);

    a.next = &b;
    b.next = &c;

    ASSERT_FALSE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(PalindromeLinkedListTestSuite, PalindromeLinkedListTestSuiteTestCase3True)
{
    PalindromeLinkedListSolution sol;

    ListNode a(0);
    ListNode b(1);
    ListNode c(0);

    a.next = &b;
    b.next = &c;

    ASSERT_TRUE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(PalindromeLinkedListTestSuite, PalindromeLinkedListTestSuiteTestCase4False)
{
    PalindromeLinkedListSolution sol;

    ListNode a(0);
    ListNode b(1);
    ListNode c(1);
    ListNode d(2);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    ASSERT_FALSE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(PalindromeLinkedListTestSuite, PalindromeLinkedListTestSuiteTestCase4True)
{
    PalindromeLinkedListSolution sol;

    ListNode a(0);
    ListNode b(1);
    ListNode c(1);
    ListNode d(0);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    ASSERT_TRUE(sol.isPalindrome(&a));
}

//
// -------------------------------------------------------------------------------------------
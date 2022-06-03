/*******************************************************************************************
 *  @file      LeetCode00234TestSuite.cpp 2015\12\15 19:45:21 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.234  Palindrome Linked List
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/Struct.hpp"
#include "../Src/LeetCode00234.hpp"


//LeetCode No.234  Palindrome Linked List
#define LeetCode00234TestSuite DISABLED_LeetCode234TestSuite

 // ------------------------------------------------------------------------------------------
 //
TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase0)
{
    LeetCode00234 sol;

    ListNode* pNode = 0;
    ASSERT_TRUE(sol.isPalindrome(pNode));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase1)
{
    LeetCode00234 sol;

    ListNode a(0);
    ASSERT_TRUE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase2False)
{
    LeetCode00234 sol;

    ListNode a(0);
    ListNode b(1);

    a.next = &b;

    ASSERT_FALSE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase2True)
{
    LeetCode00234 sol;

    ListNode a(1);
    ListNode b(1);

    a.next = &b;

    ASSERT_TRUE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase3False)
{
    LeetCode00234 sol;

    ListNode a(0);
    ListNode b(1);
    ListNode c(1);

    a.next = &b;
    b.next = &c;

    ASSERT_FALSE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase3True)
{
    LeetCode00234 sol;

    ListNode a(0);
    ListNode b(1);
    ListNode c(0);

    a.next = &b;
    b.next = &c;

    ASSERT_TRUE(sol.isPalindrome(&a));
}

// ------------------------------------------------------------------------------------------
//
TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase4False)
{
    LeetCode00234 sol;

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
TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase4True)
{
    LeetCode00234 sol;

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
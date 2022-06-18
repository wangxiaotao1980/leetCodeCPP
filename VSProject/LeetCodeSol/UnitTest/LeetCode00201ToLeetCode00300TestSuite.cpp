/***********************************************************************************************************************
 *  @file    LeetCode00201ToLeetCode00300TestSuite.cpp  2022-06-18 00:23:47
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include <gmock/gmock.h>
#include "../Src/LeetCode00201ToLeetCode00300.hpp"
#include "../Src/Struct.hpp"
//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.204 Count Primes
#define LeetCode00204TestSuite DISABLED_LeetCode00204TestSuite
TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase0)
{
    LeetCode00204 sol;
    ASSERT_EQ(0, sol.countPrimes(0));
    ASSERT_EQ(0, sol.countPrimes(1));
    ASSERT_EQ(0, sol.countPrimes(2));
}

TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase1)
{
    LeetCode00204 sol;
    ASSERT_EQ(1, sol.countPrimes(3));
}

TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase2)
{
    LeetCode00204 sol;
    ASSERT_EQ(2, sol.countPrimes(4));
    ASSERT_EQ(2, sol.countPrimes(5));
}

TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase3)
{
    LeetCode00204 sol;
    ASSERT_EQ(3, sol.countPrimes(6));
    ASSERT_EQ(3, sol.countPrimes(7));
}

TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase4)
{
    LeetCode00204 sol;
    ASSERT_EQ(4, sol.countPrimes(8));
    ASSERT_EQ(4, sol.countPrimes(9));
    ASSERT_EQ(4, sol.countPrimes(10));
    ASSERT_EQ(4, sol.countPrimes(11));
}

TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase5)
{
    LeetCode00204 sol;
    ASSERT_EQ(5, sol.countPrimes(12));
    ASSERT_EQ(5, sol.countPrimes(13));
}

TEST(LeetCode00204TestSuite, CountPrimesTestSuiteTestCase6)
{
    LeetCode00204 sol;
    ASSERT_EQ(6, sol.countPrimes(14));
    ASSERT_EQ(6, sol.countPrimes(15));
    ASSERT_EQ(6, sol.countPrimes(16));
    ASSERT_EQ(6, sol.countPrimes(17));
}

//LeetCode No.205  Isomorphic Strings
#define  LeetCode00205TestSuite DISABLED_LeetCode00205TestSuite
//----------------------------------------------------------------------------------------------------------------------
//
TEST(LeetCode00205TestSuite, IsomorphicStringsTestSuiteTestCase0)
{
    LeetCode00205 sol;

    std::string s("f");
    std::string t("b");

    ASSERT_TRUE(sol.isIsomorphic(s, t));
}

TEST(LeetCode00205TestSuite, IsomorphicStringsTestSuiteTestCase1)
{
    LeetCode00205 sol;

    std::string s("foo");
    std::string t("bar");

    ASSERT_FALSE(sol.isIsomorphic(s, t));
}

TEST(LeetCode00205TestSuite, IsomorphicStringsTestSuiteTestCase2)
{
    LeetCode00205 sol;

    std::string s("egg");
    std::string t("add");

    ASSERT_TRUE(sol.isIsomorphic(s, t));
}

TEST(LeetCode00205TestSuite, IsomorphicStringsTestSuiteTestCase3)
{
    LeetCode00205 sol;

    std::string s("paper");
    std::string t("title");

    ASSERT_TRUE(sol.isIsomorphic(s, t));
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.208  Implement Trie(Prefix Tree)
#define LeetCode00208TestSuite DISABLED_LeetCode00208TestSuite
TEST(LeetCode00208TestSuite, EmptyTestCase)
{
    Trie tree;

    ASSERT_TRUE(tree.search(""));
}

TEST(LeetCode00208TestSuite, SearchTestCase)
{
    Trie tree;
    tree.insert("hello");
    tree.insert("helloworld");
    tree.insert("hellow");

    ASSERT_FALSE(tree.search("g"));
    ASSERT_FALSE(tree.search("hell"));

    ASSERT_TRUE(tree.search("hello"));
    ASSERT_TRUE(tree.search("hellow"));
    ASSERT_TRUE(tree.search("helloworld"));
}

TEST(LeetCode00208TestSuite, StartsWithTestCase)
{
    Trie tree;
    tree.insert("hello");
    tree.insert("helloworld");
    tree.insert("hellow");

    ASSERT_FALSE(tree.startsWith("g"));
    ASSERT_TRUE(tree.startsWith("hello"));
    ASSERT_TRUE(tree.startsWith("hellow"));
    ASSERT_TRUE(tree.startsWith("helloworld"));
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.223 Rectangle Area
#define LeetCode00223TestSuite DISABLED_LeetCode00223TestSuite
TEST(LeetCode00223TestSuite, RectangleAreaTestSuiteTestCase)
{
    LeetCode00223 sol;

    ASSERT_EQ(175, sol.computeArea(0, 0, 10, 10, 5, 5, 15, 15));
    ASSERT_EQ(45, sol.computeArea(-3, 0, 3, 4, 0, -1, 9, 2));
    ASSERT_EQ(50, sol.computeArea(0, 0, 5, 5, 10, 10, 15, 15));
    ASSERT_EQ(2, sol.computeArea(-1500000001, 0, -1500000000, 1, 1500000000, 0, 1500000001, 1));
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.224 Basic Calculator
#define LeetCode00224TestSuite DISABLED_LeetCode00224TestSuite
TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase0)
{
    LeetCode00224 sol;

    std::string data("1+2");
    ASSERT_EQ(3, sol.calculate(data));
}

TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase1)
{
    LeetCode00224 sol;

    std::string data("(1+2)");
    ASSERT_EQ(3, sol.calculate(data));
}

TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase2)
{
    LeetCode00224 sol;

    std::string data(" 1 + 2 ");
    ASSERT_EQ(3, sol.calculate(data));
}

TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase3)
{
    LeetCode00224 sol;

    std::string data("( 1 + 2 )");
    ASSERT_EQ(3, sol.calculate(data));
}

TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase4)
{
    LeetCode00224 sol;

    std::string data(" 2 - 1 + 2 ");
    ASSERT_EQ(3, sol.calculate(data));
}

TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase5)
{
    LeetCode00224 sol;

    std::string data(" (1+(4+5+2)-3)+(6+8) ");
    ASSERT_EQ(23, sol.calculate(data));
}

TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase6)
{
    LeetCode00224 sol;

    std::string data("(7)-(0)+(4)");
    ASSERT_EQ(11, sol.calculate(data));
}

TEST(LeetCode00224TestSuite, BasicCalculatorTestSuiteTestCase7)
{
    LeetCode00224 sol;

    std::string data("2-4-(8+2-6+(8+4-(1)+8-10))");
    ASSERT_EQ(-15, sol.calculate(data));
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.227 Basic Calculator II
#define LeetCode00227TestSuite DISABLED_LeetCode00227TestSuite
TEST(LeetCode00227TestSuite, BasicCalculatorIITestSuiteTestCase0)
{
    LeetCode00227 sol;

    std::string data("1+2");
    ASSERT_EQ(3, sol.calculateII(data));
}

TEST(LeetCode00227TestSuite, BasicCalculatorIITestSuiteTestCase1)
{
    LeetCode00227 sol;

    std::string data("3+2*2");
    ASSERT_EQ(7, sol.calculateII(data));
}

TEST(LeetCode00227TestSuite, BasicCalculatorIITestSuiteTestCase2)
{
    LeetCode00227 sol;

    std::string data("3/2");
    ASSERT_EQ(1, sol.calculateII(data));
}

TEST(LeetCode00227TestSuite, BasicCalculatorIITestSuiteTestCase3)
{
    LeetCode00227 sol;

    std::string data(" 3+5 / 2 ");
    ASSERT_EQ(5, sol.calculateII(data));
}

TEST(LeetCode00227TestSuite, BasicCalculatorIITestSuiteTestCase4)
{
    LeetCode00227 sol;

    std::string data(" 3 - 5 / 2 ");
    ASSERT_EQ(1, sol.calculateII(data));
}


//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.228 Summary Ranges
#define LeetCode00228TestSuite DISABLED_LeetCode00228TestSuite
TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseEmpty)
{
    std::vector<int> data;
    LeetCode00228 sol;
    std::vector<std::string> result;
    ASSERT_EQ(result, sol.summaryRanges(data));
}

TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseOneData)
{
    std::vector<int> data{ 0 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseTwoDatas0)
{
    std::vector<int> data{ 0, 1 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0->1" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseTwoDatas1)
{
    std::vector<int> data{ 0, 2 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0", "2" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseTreeDatas0)
{
    std::vector<int> data{ 0, 1, 2 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0->2" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteTestCaseTreeDatas2)
{
    std::vector<int> data{ 0, 1, 4 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0->1", "4" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

TEST(LeetCode00228TestSuite, SummaryRangesTestSuiteDemo)
{
    std::vector<int> data{ 0, 1, 2, 4, 5, 7 };
    LeetCode00228 sol;
    std::vector<std::string> result{ "0->2", "4->5", "7" };
    ASSERT_EQ(result, sol.summaryRanges(data));
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.234  Palindrome Linked List
#define LeetCode00234TestSuite DISABLED_LeetCode234TestSuite
TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase0)
{
    LeetCode00234 sol;

    ListNode* pNode = 0;
    ASSERT_TRUE(sol.isPalindrome(pNode));
}

TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase1)
{
    LeetCode00234 sol;

    ListNode a(0);
    ASSERT_TRUE(sol.isPalindrome(&a));
}

TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase2False)
{
    LeetCode00234 sol;

    ListNode a(0);
    ListNode b(1);

    a.next = &b;

    ASSERT_FALSE(sol.isPalindrome(&a));
}

TEST(LeetCode00234TestSuite, PalindromeLinkedListTestSuiteTestCase2True)
{
    LeetCode00234 sol;

    ListNode a(1);
    ListNode b(1);

    a.next = &b;

    ASSERT_TRUE(sol.isPalindrome(&a));
}

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

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.236 Lowest Common Ancestor of a Binary Tree
#define LeetCode00236TestSuite DISABLED_LeetCode00236TestSuite
TEST(LeetCode00236TestSuite, LowestCommonAncestorOfABinaryTreeTestSuiteTestCase0)
{
    TreeNode treeNode3(3);

    TreeNode treeNode5(5);
    TreeNode treeNode1(1);

    TreeNode treeNode6(6);
    TreeNode treeNode2(2);
    TreeNode treeNode0(0);
    TreeNode treeNode8(8);

    TreeNode treeNode7(7);
    TreeNode treeNode4(4);

    treeNode3.left = &treeNode5;
    treeNode3.right = &treeNode1;

    treeNode5.left = &treeNode6;
    treeNode5.right = &treeNode2;

    treeNode1.left = &treeNode0;
    treeNode1.right = &treeNode8;

    treeNode2.left = &treeNode0;
    treeNode2.right = &treeNode4;

    LeetCode00236 sol;
    ASSERT_EQ(&treeNode3, sol.lowestCommonAncestor(&treeNode3, &treeNode5, &treeNode1));
}

TEST(LeetCode00236TestSuite, LowestCommonAncestorOfABinaryTreeTestSuiteTestCase1)
{
    TreeNode treeNode3(3);

    TreeNode treeNode5(5);
    TreeNode treeNode1(1);

    TreeNode treeNode6(6);
    TreeNode treeNode2(2);
    TreeNode treeNode0(0);
    TreeNode treeNode8(8);

    TreeNode treeNode7(7);
    TreeNode treeNode4(4);

    treeNode3.left = &treeNode5;
    treeNode3.right = &treeNode1;

    treeNode5.left = &treeNode6;
    treeNode5.right = &treeNode2;

    treeNode1.left = &treeNode0;
    treeNode1.right = &treeNode8;

    treeNode2.left = &treeNode0;
    treeNode2.right = &treeNode4;

    LeetCode00236 sol;
    ASSERT_EQ(&treeNode5, sol.lowestCommonAncestor(&treeNode3, &treeNode5, &treeNode4));
}

TEST(LeetCode00236TestSuite, LowestCommonAncestorOfABinaryTreeTestSuiteTestCase2)
{
    TreeNode treeNode3(3);

    TreeNode treeNode5(5);
    TreeNode treeNode1(1);

    TreeNode treeNode6(6);
    TreeNode treeNode2(2);
    TreeNode treeNode0(0);
    TreeNode treeNode8(8);

    TreeNode treeNode7(7);
    TreeNode treeNode4(4);

    treeNode3.left = &treeNode5;
    treeNode3.right = &treeNode1;

    treeNode5.left = &treeNode6;
    treeNode5.right = &treeNode2;

    treeNode1.left = &treeNode0;
    treeNode1.right = &treeNode8;

    treeNode2.left = &treeNode0;
    treeNode2.right = &treeNode4;

    LeetCode00236 sol;
    ASSERT_EQ(&treeNode5, sol.lowestCommonAncestor(&treeNode3, &treeNode6, &treeNode4));
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.238  Product of Array Except Self
#define LeetCode00238TestSuite DISABLED_LeetCode00238TestSuite
TEST(LeetCode00238TestSuite, ProductOfArrayExceptSelfTestSuiteTestCase0)
{
    LeetCode00238 sol;

    std::vector<int> data{ 1, 2, 3, 4 };
    std::vector<int> result{ 24, 12, 8, 6 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

TEST(LeetCode00238TestSuite, ProductOfArrayExceptSelfTestSuiteTestCase1)
{
    LeetCode00238 sol;

    std::vector<int> data{ 2, 2, 2, 2 };
    std::vector<int> result{ 8, 8, 8, 8 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

TEST(LeetCode00238TestSuite, ProductOfArrayExceptSelfTestSuiteTestCase2)
{
    LeetCode00238 sol;

    std::vector<int> data{ 3, 4 };
    std::vector<int> result{ 4, 3 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

TEST(LeetCode00238TestSuite, ProductOfArrayExceptSelfTestSuiteTestCase3)
{
    LeetCode00238 sol;

    std::vector<int> data{ 0, 1, 1, 0 };
    std::vector<int> result{ 0, 0, 0, 0 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

TEST(LeetCode00238TestSuite, ProductOfArrayExceptSelfTestSuiteTestCase4)
{
    LeetCode00238 sol;

    std::vector<int> data{ 0, 2, 3, 4, 5 };
    std::vector<int> result{ 120, 0, 0, 0, 0 };

    ASSERT_EQ(result, sol.productExceptSelf(data));
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.257 Binary Tree Paths
#define LeetCode00257TestSuite DISABLED_LeetCode00257TestSuite
TEST(LeetCode00257TestSuite, BinaryTreePathsTestSuiteTestCaseEmpty)
{
    LeetCode00257 sol;

    std::vector<std::string> result;

    ASSERT_EQ(result, sol.binaryTreePaths(0));
}

TEST(LeetCode00257TestSuite, BinaryTreePathsTestSuiteTestCase0)
{
    TreeNode a(0);

    LeetCode00257 sol;

    std::vector<std::string> result{ "0" };

    ASSERT_EQ(result, sol.binaryTreePaths(&a));
}

TEST(LeetCode00257TestSuite, BinaryTreePathsTestSuiteTestCase1)
{
    TreeNode a(0);
    TreeNode b(1);
    TreeNode c(2);

    a.left = &b;
    a.right = &c;
    LeetCode00257 sol;

    std::vector<std::string> result{ "0->1", "0->2" };

    ASSERT_EQ(result, sol.binaryTreePaths(&a));
}

TEST(LeetCode00257TestSuite, BinaryTreePathsTestSuiteTestCase2)
{
    TreeNode a(1);
    TreeNode b(2);
    TreeNode c(3);
    TreeNode d(5);

    a.left = &b;
    a.right = &c;
    b.right = &d;

    LeetCode00257 sol;

    std::vector<std::string> result{ "1->2->5", "1->3" };

    ASSERT_EQ(result, sol.binaryTreePaths(&a));
}

//LeetCode No.260 Single Number III
#define LeetCode00260TestSuite DISABLED_LeetCode00260TestSuite
TEST(LeetCode00260TestSuite, SingleNumberIIITestSuiteTestCase0)
{
    LeetCode00260 sol;
    std::vector<int> data{ -1, 0 };
    std::vector<int> result = sol.singleNumberIII(data);

    std::vector<int> result1{ -1, 0 };
    std::vector<int> result2{ 0, -1 };

    bool rs = ((result == result1) || (result == result2));
    ASSERT_TRUE(rs);
}

TEST(LeetCode00260TestSuite, SingleNumberIIITestSuiteTestCase1)
{
    std::vector<int> data{ 1, 2, 1, 3, 2, 5 };
    LeetCode00260 sol;
    std::vector<int> result = sol.singleNumberIII(data);

    std::vector<int> result1{ 3, 5 };
    std::vector<int> result2{ 5, 3 };

    bool rs = ((result == result1) || (result == result2));
    ASSERT_TRUE(rs);
}

TEST(LeetCode00260TestSuite, SingleNumberIIITestSuiteTestCase2)
{
    std::vector<int> data{ 1, 2, 1, 1, 2, 2 };
    LeetCode00260 sol;
    std::vector<int> result = sol.singleNumberIII(data);

    std::vector<int> result1{ 1, 2 };
    std::vector<int> result2{ 2, 1 };

    bool rs = ((result == result1) || (result == result2));
    ASSERT_TRUE(rs);
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.268  Missing Number
#define LeetCode00268TestSuite  DISABLED_LeetCode00268TestSuite
TEST(LeetCode00268TestSuite, MissingNumberTestSuiteTestCase0)
{
    LeetCode00268 sol;
    std::vector<int> data{ 0 };

    ASSERT_EQ(1, sol.missingNumber(data));
}

TEST(LeetCode00268TestSuite, MissingNumberTestSuiteTestCase1)
{
    LeetCode00268 sol;
    std::vector<int> data{ 1 };

    ASSERT_EQ(0, sol.missingNumber(data));
}

TEST(LeetCode00268TestSuite, MissingNumberTestSuiteTestCase2)
{
    LeetCode00268 sol;
    std::vector<int> data{ 0, 1, 2, 3 };

    ASSERT_EQ(4, sol.missingNumber(data));
}

TEST(LeetCode00268TestSuite, MissingNumberTestSuiteTestCase3)
{
    LeetCode00268 sol;
    std::vector<int> data{ 0, 1, 2, 4 };

    ASSERT_EQ(3, sol.missingNumber(data));
}

TEST(LeetCode00268TestSuite, MissingNumberTestSuiteTestCase4)
{
    LeetCode00268 sol;
    std::vector<int> data{ 0, 1, 3, 4 };

    ASSERT_EQ(2, sol.missingNumber(data));
}

//LeetCode No.278 First Bad Version
#define LeetCode00278TestSuite DISABLED_LeetCode00278TestSuite
TEST(LeetCode00278TestSuite, FirstBadVersionTest2SuiteTestCase0)
{
    bool data[] = { false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(1, sol.firstBadVersion(sizeof(data)));
}

TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase0)
{
    bool data[] = { true, true, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(3, sol.firstBadVersion(sizeof(data)));
}

TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase1)
{
    bool data[] = { true, false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(2, sol.firstBadVersion(sizeof(data)));
}

TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase2)
{
    bool data[] = { false, false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(1, sol.firstBadVersion(sizeof(data)));
}

TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase3)
{
    bool data[] = { false, false, false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(1, sol.firstBadVersion(sizeof(data)));
}

TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase4)
{
    bool data[] = { true, false, false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(2, sol.firstBadVersion(sizeof(data)));
}

TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase5)
{
    bool data[] = { true, true, false, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(3, sol.firstBadVersion(sizeof(data)));
}

TEST(LeetCode00278TestSuite, FirstBadVersionTestSuiteTestCase6)
{
    bool data[] = { true, true, true, false };
    LeetCode00278 sol(data);

    ASSERT_EQ(4, sol.firstBadVersion(sizeof(data)));
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.290  Word Pattern
#define LeetCode00290TestSuite DISABLED_LeetCode00290TestSuite
TEST(LeetCode00290TestSuite, WordPatternTestSuiteTestCase1)
{
    LeetCode00290 sol;

    std::string pattern = "abba";
    std::string str = "dog cat cat dog";

    ASSERT_TRUE(sol.wordPattern(pattern, str));
}

TEST(LeetCode00290TestSuite, WordPatternTestSuiteTestCase2)
{
    LeetCode00290 sol;

    std::string pattern = "abba";
    std::string str = "dog cat cat fish";

    ASSERT_FALSE(sol.wordPattern(pattern, str));
}

TEST(LeetCode00290TestSuite, WordPatternTestSuiteTestCase3)
{
    LeetCode00290 sol;

    std::string pattern = "aaaa";
    std::string str = "dog cat cat dog";

    ASSERT_FALSE(sol.wordPattern(pattern, str));
}

TEST(LeetCode00290TestSuite, WordPatternTestSuiteTestCase4)
{
    LeetCode00290 sol;

    std::string pattern = "abba";
    std::string str = "dog dog dog dog";

    ASSERT_FALSE(sol.wordPattern(pattern, str));
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.292 Nim Game
#define LeetCode00292TestSuite DISABLED_LeetCode00292TestSuite
TEST(LeetCode00292TestSuite, NimGameTestSuiteTestCase)
{
    LeetCode00292 sol;

    ASSERT_TRUE(sol.canWinNim(1));
    ASSERT_TRUE(sol.canWinNim(2));
    ASSERT_TRUE(sol.canWinNim(3));
    ASSERT_FALSE(sol.canWinNim(4));
}

//----------------------------------------------------------------------------------------------------------------------
//LeetCode No.295 Find Median from Data Stream
#define LeetCode00295TestSuite DISABLED_LeetCode00295TestSuite
TEST(LeetCode00295TestSuite, MedianFinderTestSuiteTestCase0)
{
    LeetCode00295 mediaFinder;

    mediaFinder.addNum(1);
    ASSERT_DOUBLE_EQ(1.0, mediaFinder.findMedian());
    mediaFinder.addNum(2);
    ASSERT_DOUBLE_EQ(1.5, mediaFinder.findMedian());
    mediaFinder.addNum(4);
    ASSERT_DOUBLE_EQ(2, mediaFinder.findMedian());
    mediaFinder.addNum(100);
    ASSERT_DOUBLE_EQ(3, mediaFinder.findMedian());
}

TEST(LeetCode00295TestSuite, MedianFinderTestSuiteTestCase1)
{
    LeetCode00295 mediaFinder;

    mediaFinder.addNum(100);
    ASSERT_DOUBLE_EQ(100, mediaFinder.findMedian());
    mediaFinder.addNum(2);
    ASSERT_DOUBLE_EQ(51, mediaFinder.findMedian());
    mediaFinder.addNum(1);
    ASSERT_DOUBLE_EQ(2, mediaFinder.findMedian());
    mediaFinder.addNum(0);
    ASSERT_DOUBLE_EQ(1.5, mediaFinder.findMedian());
}

TEST(LeetCode00295TestSuite, MedianFinderTestSuiteTestCase2)
{
    LeetCode00295 mediaFinder;

    mediaFinder.addNum(100);
    ASSERT_DOUBLE_EQ(100.0, mediaFinder.findMedian());
    mediaFinder.addNum(0);
    ASSERT_DOUBLE_EQ(50.0, mediaFinder.findMedian());
    mediaFinder.addNum(1);
    ASSERT_DOUBLE_EQ(1, mediaFinder.findMedian());
    mediaFinder.addNum(10);
    ASSERT_DOUBLE_EQ(5.5, mediaFinder.findMedian());
}


//
//----------------------------------------------------------------------------------------------------------------------

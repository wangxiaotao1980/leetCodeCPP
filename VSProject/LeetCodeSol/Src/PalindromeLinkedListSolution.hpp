/*******************************************************************************************
 *  @file      PalindromeLinkedListSolution.hpp 2015\12\15 17:18:57 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.234  Palindrome Linked List
 *******************************************************************************************/
#ifndef PALINDROMELINKEDLISTSOLUTION_A23E8ABC_C2C0_4BAC_8D84_B43A8D66BB37_HPP__
#define PALINDROMELINKEDLISTSOLUTION_A23E8ABC_C2C0_4BAC_8D84_B43A8D66BB37_HPP__

 /*******************************************************************************************/

struct ListNode;
/**
 * The class <code>PalindromeLinkedListSolution</code>
 *
 */
class PalindromeLinkedListSolution
{
public:
    bool isPalindrome(ListNode* head);
private:
    ListNode* reverseList(ListNode* head);
};

/*******************************************************************************************/
#endif// PALINDROMELINKEDLISTSOLUTION_A23E8ABC_C2C0_4BAC_8D84_B43A8D66BB37_HPP__
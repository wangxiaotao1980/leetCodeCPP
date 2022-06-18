/***********************************************************************************************************************
 *  @file    LeetCode00201ToLeetCode00300.hpp  2022-06-18 00:20:28
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/
#pragma once
#include <deque>
#include <queue>
#include <string>
#include <vector>

struct TreeNode;
struct ListNode;
//----------------------------------------------------------------------------------------------------------------------
class LeetCode00204
{
public:
    // No.204 Count Primes
    int countPrimes(int n);
};
class LeetCode00205
{
public:
    // No.205  Isomorphic Strings
    bool isIsomorphic(std::string s, std::string t);
};

//  No.208  Implement Trie (Prefix Tree)
class TrieNode
{
public:
    // Initialize your data structure here.
    TrieNode()
        : m_val(0)
        , m_isEnd(false)
    {
        ::memset(m_nexts, 0, sizeof(m_nexts));
    }

    char      m_val;
    bool      m_isEnd;
    TrieNode* m_nexts[26];
};

/**
 * The class <code>TrieNode</code>
 *
 */
class Trie
{
public:
    Trie();
    ~Trie();
    // Inserts a word into the trie.
    void insert(std::string word);

    // Returns if the word is in the trie.
    bool search(std::string word);

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(std::string prefix);

private:
    void deleteTrieNode(TrieNode* pRoot);
private:
    TrieNode* m_root;
};


class LeetCode00223
{
public:
    // LeetCode No.223 Rectangle Area
    int computeArea(int A, int B,
                    int C, int D,
                    int E, int F,
                    int G, int H);
};

class LeetCode00224
{
public:
    // No.224 Basic Calculator
    int calculate(std::string s);
};
class LeetCode00227
{
public:
    // No.227 Basic Calculator II
    int calculateII(std::string s);
};

class LeetCode00228
{
public:
    // No.228 Summary Ranges
    std::vector<std::string> summaryRanges(std::vector<int>& nums);
};

class LeetCode00234
{
public:
    // No.234  Palindrome Linked List
    bool isPalindrome(ListNode* head);
    ListNode* reverseList(ListNode* head);
};

class LeetCode00236
{
public:
    // No.236 Lowest Common Ancestor of a Binary Tree
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
};


class LeetCode00238
{
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums);
};


/**
 * The class <code>BinaryTreePathsSolution</code>
 *
 */
class LeetCode00257
{
public:
    std::vector<std::string> binaryTreePaths(TreeNode* root);

private:
    void pushNodeInStack(TreeNode* pNode);
private:
    std::deque<TreeNode*>    m_nodeDeque;
    std::vector<std::string> m_result;
};

class LeetCode00260
{
public:
    /**
     * LeetCode No.260 Single Number III
     */
    std::vector<int> singleNumberIII(std::vector<int>& nums);
};

/**
 * The class <code>MissingNumberSolution</code>
 *
 */
class LeetCode00268
{
public:
    int missingNumber(std::vector<int>& nums);
};

/**
 * The class <code>FirstBadVersionSolution</code>
 *
 */
class LeetCode00278
{
public:
    LeetCode00278(const bool* pBool);
    int firstBadVersion(int                 n);
private:
    bool isBadVersion(int version);
private:
    const bool* m_pBool;
};


// No.284  Peeking Iterator(本题无单元测试)
class Iterator
{
    struct Data;
    Data* data;
public:
    Iterator(const std::vector<int>& nums);
    Iterator(const Iterator& iter);
    virtual ~Iterator();
    // Returns the next element in the iteration.
    int next();
    // Returns true if the iteration has more elements.
    bool hasNext() const;
};

class LeetCode00284 : public Iterator
{
public:
    LeetCode00284(const std::vector<int>& nums);

    // Returns the next element in the iteration without advancing the iterator.
    int peek();

    // hasNext() and next() should behave the same as in the Iterator interface.
    // Override them if needed.
    int next();

    bool hasNext() const;

private:
    bool m_isHasNext;
    int  m_nextValue;
};

/**
 * The class <code>LeetCode00290</code>
 *
 */
class LeetCode00290
{
public:
    bool wordPattern(std::string pattern, std::string str);
};

/**
 * The class <code>LeetCode00292</code>
 *
 */
class LeetCode00292
{
public:
    /**
     * LeetCode No.292 Nim Game
     */
    bool canWinNim(int n);
};

/**
 * The class <code>MedianFinder</code>
 *
 */
class LeetCode00295
{
public:
    LeetCode00295();
    // Adds a number into the data structure.
    void addNum(int num);

    // Returns the median of current data stream
    double findMedian();
private:

    std::priority_queue<int, std::deque<int>, std::less<int> >       m_lessMedianQueue;
    std::priority_queue<int, std::deque<int>, std::greater<int> >    m_greaterMedianQueueQueue;
};

/**
 * The class <code>LeetCode00299</code>
 *
 */
class LeetCode00299
{
public:
    std::string getHint(std::string secret, std::string guess);
};

//
//----------------------------------------------------------------------------------------------------------------------

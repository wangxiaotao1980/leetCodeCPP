/*******************************************************************************************
 *  @file      TrieSolution.hpp 2015\12\11 20:24:37 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.208  Implement Trie (Prefix Tree)
 *******************************************************************************************/
#ifndef TRIENODE_0A1822F0_897F_401B_B8AE_76DDC59A90C4_HPP__
#define TRIENODE_0A1822F0_897F_401B_B8AE_76DDC59A90C4_HPP__
#include <cstring>
#include <string>
 /*******************************************************************************************/

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

/*******************************************************************************************/
#endif// TRIENODE_0A1822F0_897F_401B_B8AE_76DDC59A90C4_HPP__
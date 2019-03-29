/*******************************************************************************************
 *  @file      TrieSolution.cpp 2015\12\11 20:24:43 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.208  Implement Trie (Prefix Tree)
 *******************************************************************************************/
#include "ImplementTriePrefixTree.hpp"
 // ------------------------------------------------------------------------------------------
 //
Trie::Trie()
{
    m_root = new TrieNode();
    m_root->m_isEnd = true;
}

// ------------------------------------------------------------------------------------------
//
Trie::~Trie()
{
    deleteTrieNode(m_root);
}

// ------------------------------------------------------------------------------------------
//
void Trie::insert(std::string word)
{
    TrieNode* pcurrent = m_root;
    for (std::string::const_iterator cit = word.cbegin(); cit != word.cend(); ++cit)
    {
        if (0 == pcurrent->m_nexts[(*cit) - 'a'])
        {
            pcurrent->m_nexts[(*cit) - 'a'] = new TrieNode();
            pcurrent->m_nexts[(*cit) - 'a']->m_val = (*cit);
        }

        pcurrent = pcurrent->m_nexts[(*cit) - 'a'];
    }

    pcurrent->m_isEnd = true;
}

// ------------------------------------------------------------------------------------------
//
bool Trie::search(std::string word)
{
    TrieNode* pcurrent = m_root;
    for (std::string::const_iterator cit = word.cbegin(); cit != word.cend(); ++cit)
    {
        if (0 != pcurrent->m_nexts[(*cit) - 'a'])
        {
            pcurrent = pcurrent->m_nexts[(*cit) - 'a'];
        }
        else
        {
            return false;
        }
    }

    if (pcurrent->m_isEnd)
    {
        return true;
    }

    return false;
}

// ------------------------------------------------------------------------------------------
//
bool Trie::startsWith(std::string prefix)
{
    TrieNode* pcurrent = m_root;
    for (std::string::const_iterator cit = prefix.cbegin(); cit != prefix.cend(); ++cit)
    {
        if (0 != pcurrent->m_nexts[(*cit) - 'a'])
        {
            pcurrent = pcurrent->m_nexts[(*cit) - 'a'];
        }
        else
        {
            return false;
        }
    }
    return true;
}

// ------------------------------------------------------------------------------------------
//
void Trie::deleteTrieNode(TrieNode* pRoot)
{
    if (!pRoot)
    {
        return;
    }

    for (int i = 0; i < 26; ++i)
    {
        deleteTrieNode(pRoot->m_nexts[i]);
    }

    delete pRoot;
}

//
// ------------------------------------------------------------------------------------------
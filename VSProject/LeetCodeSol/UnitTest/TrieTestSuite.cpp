/*******************************************************************************************
 *  @file      TrieTestSuite.cpp 2015\12\11 21:11:02 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.208  Implement Trie (Prefix Tree)
 *******************************************************************************************/

#include "gtest/gtest.h"
#include "../Src/ImplementTriePrefixTree.hpp"
#include "disabled.hpp"

 // ------------------------------------------------------------------------------------------
 //
TEST(TrieTestSuite, EmptyTestCase)
{
    Trie tree;

    ASSERT_TRUE(tree.search(""));
}

// ------------------------------------------------------------------------------------------
//
TEST(TrieTestSuite, SearchTestCase)
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

// ------------------------------------------------------------------------------------------
//
TEST(TrieTestSuite, StartsWithTestCase)
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

//
// -------------------------------------------------------------------------------------------
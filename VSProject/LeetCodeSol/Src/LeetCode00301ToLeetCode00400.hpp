/***********************************************************************************************************************
 *  @file    LeetCode00301ToLeetCode00400.hpp  2022-06-18 00:55:03
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/
#pragma once
#include <vector>

//----------------------------------------------------------------------------------------------------------------------
 /**
  * No.303  Range Sum Query - Immutable
  */
class LeetCode00303
{
public:
    LeetCode00303(std::vector<int>& num);

    ~LeetCode00303();

    int sumRange(int i, int j);

private:
    int* m_pSum;
};

/**
 * No.307 Range Sum Query
 *
 */
class LeetCode00307
{
private:
    class RegionTreeNode
    {
    public:
        int             left;
        int             right;
        int             cover;
        RegionTreeNode* leftChild;
        RegionTreeNode* rightChild;
        RegionTreeNode()
            : left(0)
            , right(0)
            , cover(0)
            , leftChild(0)
            , rightChild(0)
        {
        }
    };

public:
    LeetCode00307(std::vector<int>& number);

    void update(int i, int val);
    int sumRange(int i, int j);

private:
    RegionTreeNode* createRegionTree(int min, int max);
    int upDateImpl(RegionTreeNode* root, int i, int val);
    int sumRangeImpl(RegionTreeNode* root, int min, int max);
private:
    RegionTreeNode* m_pHead;
    std::vector<int>& m_data;
};

// No.367 Valid Perfect Square
class LeetCode00367
{
public:
    bool isPerfectSquare(int num);
};


/**
 * The class <code>GuessNumberHigherOrLower<code>
 *
 */
class LeetCode00374
{
public:
    LeetCode00374(int theNumber);

    int guessNumber(int n);
};
//
//----------------------------------------------------------------------------------------------------------------------

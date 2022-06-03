/*******************************************************************************************
 *  @file      LeetCode00307.hpp 2015\12\10 16:09:05 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.307 Range Sum Query
 *******************************************************************************************/
#ifndef NUMARRAY_AC341006_64F2_454A_B626_FEB7A47C200B_HPP__
#define NUMARRAY_AC341006_64F2_454A_B626_FEB7A47C200B_HPP__

#include <vector>
 /*******************************************************************************************/
 /**
  * The class <code>NumArray</code>
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
    RegionTreeNode*   m_pHead;
    std::vector<int>& m_data;
};

/*******************************************************************************************/
#endif// NUMARRAY_AC341006_64F2_454A_B626_FEB7A47C200B_HPP__
/*******************************************************************************************
 *  @file      NumArraySolution.cpp 2015\12\10 16:13:38 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @summary   LeetCode No.307 Range Sum Query
 *******************************************************************************************/

#include "NumArraySolution.hpp"
 // ------------------------------------------------------------------------------------------
 //  NumArray: Public, Constructor
NumArray::NumArray(std::vector<int>& number)
    : m_pHead(0)
    , m_data(number)
{
    m_pHead = createRegionTree(0, m_data.size() - 1);
}

// ------------------------------------------------------------------------------------------
//
void NumArray::update(int i, int val)
{
    upDateImpl(m_pHead, i, val);
}
// ------------------------------------------------------------------------------------------
//
int NumArray::sumRange(int i, int j)
{
    return sumRangeImpl(m_pHead, i, j);
}

// ------------------------------------------------------------------------------------------
//
NumArray::RegionTreeNode* NumArray::createRegionTree(int min, int max)
{
    if (max < min)
    {
        return 0;
    }

    RegionTreeNode* pRootNode = new RegionTreeNode();

    pRootNode->left = min;
    pRootNode->right = max;
    pRootNode->cover = 0;

    pRootNode->leftChild  = 0;
    pRootNode->rightChild = 0;

    if (max == min)
    {
        pRootNode->cover = m_data[min];
        return pRootNode;
    }

    int mid = (min + max) >> 1;

    pRootNode->leftChild = createRegionTree(min, mid);
    if (pRootNode->leftChild)
    {
        pRootNode->cover += pRootNode->leftChild->cover;
    }

    pRootNode->rightChild = createRegionTree(mid + 1, max);

    if (pRootNode->rightChild)
    {
        pRootNode->cover += pRootNode->rightChild->cover;
    }

    return pRootNode;
}

// ------------------------------------------------------------------------------------------
//
int NumArray::upDateImpl(RegionTreeNode* root, int i, int val)
{
    if (((root->left) == i) && ((root->right) == i))
    {
        root->cover = val;
        m_data[i] =val;
        return val;
    }

    int mid = ((root->left) + (root->right)) >> 1;

    if ((mid + 1) <= i)
    {
        root->cover = (root->leftChild->cover) + upDateImpl(root->rightChild, i, val);
    }
    else
    {
        root->cover = upDateImpl(root->leftChild, i, val) + (root->rightChild->cover);
    }
    return root->cover;
}

// ------------------------------------------------------------------------------------------
//
int NumArray::sumRangeImpl(RegionTreeNode* root, int min, int max)
{
    if (((root->left) == min) && ((root->right) == max))
    {
        return root->cover;
    }

    int mid = ((root->left) + (root->right)) >> 1;

    if ((mid + 1) <= min)
    {
        return sumRangeImpl(root->rightChild, min, max);
    }

    if ((mid + 1) > max)
    {
        return sumRangeImpl(root->leftChild, min, max);
    }

    return sumRangeImpl(root->leftChild, min, mid) +
        sumRangeImpl(root->rightChild, mid + 1, max);
}

//
// ------------------------------------------------------------------------------------------
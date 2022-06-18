/***********************************************************************************************************************
 *  @file    LeetCode00301ToLeetCode00400.hpp  2022-06-18 00:55:03
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include "LeetCode00301ToLeetCode00400.hpp"
 //----------------------------------------------------------------------------------------------------------------------
//  LeetCode00303: Public, Constructor
LeetCode00303::LeetCode00303(std::vector<int>& num)
    : m_pSum(0)
{
    const int len = num.size();

    m_pSum = new int[len + 1];
    m_pSum[0] = 0;

    for (int i = 0; i < len; ++i)
    {
        m_pSum[i + 1] = m_pSum[i] + num[i];
    }
}

//----------------------------------------------------------------------------------------------------------------------
//  LeetCode00303: Public, Destructor
LeetCode00303::~LeetCode00303()
{
    delete[] m_pSum;
}

int LeetCode00303::sumRange(int i, int j)
{
    return m_pSum[j + 1] - m_pSum[i];
}

//----------------------------------------------------------------------------------------------------------------------
//  No.307 Range Sum Query
LeetCode00307::LeetCode00307(std::vector<int>& number)
    : m_pHead(0)
    , m_data(number)
{
    m_pHead = createRegionTree(0, m_data.size() - 1);
}

void LeetCode00307::update(int i, int val)
{
    upDateImpl(m_pHead, i, val);
}

int LeetCode00307::sumRange(int i, int j)
{
    return sumRangeImpl(m_pHead, i, j);
}

LeetCode00307::RegionTreeNode* LeetCode00307::createRegionTree(int min, int max)
{
    if (max < min)
    {
        return 0;
    }

    RegionTreeNode* pRootNode = new RegionTreeNode();

    pRootNode->left = min;
    pRootNode->right = max;
    pRootNode->cover = 0;

    pRootNode->leftChild = 0;
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

int LeetCode00307::upDateImpl(RegionTreeNode* root, int i, int val)
{
    if (((root->left) == i) && ((root->right) == i))
    {
        root->cover = val;
        m_data[i] = val;
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

int LeetCode00307::sumRangeImpl(RegionTreeNode* root, int min, int max)
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

//----------------------------------------------------------------------------------------------------------------------
//
bool LeetCode00367::isPerfectSquare(int num)
{
    int i = 1;
    while (num > 0)
    {
        num -= i;
        i += 2;
    }


    return num == 0;
}

//----------------------------------------------------------------------------------------------------------------------
namespace
{
    int s_result;
    int guess(int num)
    {
        if (num < s_result)
        {
            return -1;
        }

        if (num > s_result)
        {
            return 1;
        }

        if (num == s_result)
        {
            return 0;
        }
    }
}

LeetCode00374::LeetCode00374(int theNumber)
{
    s_result = theNumber;
}

int LeetCode00374::guessNumber(int n)
{
    int left = 1;
    int right = n;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        int result = guess(mid);


        if (result == 0)
        {
            return mid;
        }


        if (result == 1)
        {
            right = mid - 1;
        }

        if (result == -1)
        {
            left = mid + 1;
        }

    }

    return left;
}
//
//----------------------------------------------------------------------------------------------------------------------

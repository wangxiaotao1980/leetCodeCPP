/*******************************************************************************************
 *  @file      LeetCode00238.cpp 2015\12\14 17:31:39 $
 *  @author    Wang Xiaotao<wangxiaotao@gmail.com> (中文编码测试)
 *  @note      LeetCode No.303  Range Sum Query - Immutable
 *******************************************************************************************/

#include "LeetCode00303.hpp"

// ------------------------------------------------------------------------------------------
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

// ------------------------------------------------------------------------------------------
//  LeetCode00303: Public, Destructor
LeetCode00303::~LeetCode00303()
{
    delete[] m_pSum;
}

int LeetCode00303::sumRange(int i, int j)
{
    return m_pSum[j + 1] - m_pSum[i];
}

//
// ------------------------------------------------------------------------------------------
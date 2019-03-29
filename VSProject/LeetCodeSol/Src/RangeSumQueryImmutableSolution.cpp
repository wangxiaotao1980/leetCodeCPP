/*******************************************************************************************
 *  @file      RangeSumQueryImmutableSolution.cpp 2015\12\14 17:31:39 $
 *  @author    Wang Xiaotao<wangxiaotao@gmail.com> (中文编码测试)
 *  @note      LeetCode No.303  Range Sum Query - Immutable
 *******************************************************************************************/

#include "RangeSumQueryImmutableSolution.hpp"

 // ------------------------------------------------------------------------------------------
 //  RangeSumQueryImmutableSolution: Public, Constructor
RangeSumQueryImmutableSolution::RangeSumQueryImmutableSolution(std::vector<int>& num)
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
//  RangeSumQueryImmutableSolution: Public, Destructor
RangeSumQueryImmutableSolution::~RangeSumQueryImmutableSolution()
{
    delete[] m_pSum;
}

int RangeSumQueryImmutableSolution::sumRange(int i, int j)
{
    return m_pSum[j + 1] - m_pSum[i];
}

//
// ------------------------------------------------------------------------------------------
/*******************************************************************************************
 *  @file      LeetCode00198.cpp 2015\12\14 16:16:50 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.198 House Robber
 *******************************************************************************************/

#include "LeetCode00198.hpp"
#include <string.h>

 // ------------------------------------------------------------------------------------------
 // 简单的 DP 问题， 递归。
 //
int LeetCode00198::rob(std::vector<int>& nums)
{
    const int len = nums.size() + 2;
    int* pRobData = new int[len];

    ::memset(pRobData, 0, sizeof(int)*len);

    int numsLen = nums.size();
    for (int i = 0; i < numsLen; ++i)
    {
        const int stealNow = pRobData[i] + nums[i];

        pRobData[i + 2] = stealNow > pRobData[i + 1] ?
            (stealNow) : pRobData[i + 1];
    }

    int result = pRobData[len - 1];
    delete[] pRobData;
    return result;
}

//
// ------------------------------------------------------------------------------------------
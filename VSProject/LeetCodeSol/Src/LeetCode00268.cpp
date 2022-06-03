/*******************************************************************************************
 *  @file      MissingNumberSolution.cpp 2015\12\15 12:15:03 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.268  Missing Number
 *******************************************************************************************/

#include "LeetCode00268.hpp"

// ------------------------------------------------------------------------------------------
 //
int LeetCode00268::missingNumber(std::vector<int>& nums)
{
    const int len = nums.size();

    int sum = (len * (len + 1)) >> 1;

    int realSum = 0;
    for (int i = 0; i < len; ++i)
    {
        realSum += nums[i];
    }

    return sum - realSum;
}

//
// ------------------------------------------------------------------------------------------
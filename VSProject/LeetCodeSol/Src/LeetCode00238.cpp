/*******************************************************************************************
 *  @file      LeetCode00238.cpp 2015\12\15 10:56:26 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.238  Product of Array Except Self
 *******************************************************************************************/

#include "LeetCode00238.hpp"

// ------------------------------------------------------------------------------------------
 //
std::vector<int> LeetCode00238::productExceptSelf(std::vector<int>& nums)
{
    int len = nums.size();
    std::vector<int> result(len + 2, 1);

    for (int i = 0; i < len; ++i)
    {
        result[i + 1] = result[i] * nums[i];
    }

    for (int i = len; i != 0; --i)
    {
        result[i] = result[i - 1] * result[len + 1];
        result[len + 1] *= nums[i - 1];
    }

    return std::vector<int>(result.begin() + 1, result.end() - 1);
}

//
// ------------------------------------------------------------------------------------------
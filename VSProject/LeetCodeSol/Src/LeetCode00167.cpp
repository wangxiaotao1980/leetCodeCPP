/*******************************************************************************************
 *  @file      LeetCode00167.cpp 2019\2\3 17:14:35 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      Leetcode 167. Two Sum II - Input array is sorted
 *******************************************************************************************/

#include "LeetCode00167.hpp"
// ------------------------------------------------------------------------------------------
//
std::vector<int> LeetCode00167::twoSum(std::vector<int>& numbers, int target)
{
    std::vector<int> result;

    int beg = 0;
    int end = numbers.size() - 1;

    while (beg < end)
    {
        int sum = numbers[beg] + numbers[end];
        if (sum == target)
        {
            result.push_back(beg + 1);
            result.push_back(end + 1);
            ++beg;
            --end;
        }

        if (sum < target)
        {
            ++beg;
        }

        if (sum > target)
        {
            --end;
        }
    }
    return result;

}
// 
// -------------------------------------------------------------------------------------------

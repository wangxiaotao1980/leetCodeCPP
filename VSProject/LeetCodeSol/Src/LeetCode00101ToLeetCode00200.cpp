/***********************************************************************************************************************
 *  @file    LeetCode00101ToLeetCode00200.hpp  2022-06-18 00:07:06
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include "LeetCode00101ToLeetCode00200.hpp"

 //----------------------------------------------------------------------------------------------------------------------
// LeetCode No.136 Single Number
int LeetCode00136::singleNumber(std::vector<int>& nums)
{
    int result = 0;

    for (std::vector<int>::const_iterator cit = nums.cbegin(); cit != nums.cend(); ++cit)
    {
        result ^= (*cit);
    }

    return result;
}

//----------------------------------------------------------------------------------------------------------------------
// 167. Two Sum II - Input array is sorted
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

//----------------------------------------------------------------------------------------------------------------------
// No.198 House Robber
int LeetCode00198::rob(std::vector<int>& nums)
{
    const int len = nums.size() + 2;
    int* pRobData = new int[len];

    ::memset(pRobData, 0, sizeof(int) * len);

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
//----------------------------------------------------------------------------------------------------------------------

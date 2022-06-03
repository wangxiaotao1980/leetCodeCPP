/*******************************************************************************************
 *  @file      LeetCode00260.hpp 2015\12\7 18:00:31 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.260 Single Number III
 *******************************************************************************************/

#include "LeetCode00260.hpp"
// ------------------------------------------------------------------------------------------
 // LeetCode No.260 Single Number III
std::vector<int> LeetCode00260::singleNumberIII(std::vector<int> &nums)
{
    int xorValue = 0;

    for (std::vector<int>::const_iterator cit = nums.cbegin(); cit != nums.cend(); ++cit)
    {
        xorValue ^= *cit;
    }

    int flags = xorValue ^ (~(xorValue - 1));

    std::vector<int> resultVector{ 0, 0 };

    for (std::vector<int>::const_iterator cit = nums.cbegin(); cit != nums.cend(); ++cit)
    {
        if (flags & (*cit))
        {
            resultVector[0] ^= *cit;
        }
        else
        {
            resultVector[1] ^= *cit;
        }
    }

    return resultVector;
}

//
// ------------------------------------------------------------------------------------------
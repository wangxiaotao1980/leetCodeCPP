/*******************************************************************************************
 *  @file      SingleNumberSolution.cpp 2015\12\7 18:00:31 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.136 Single Number
 *******************************************************************************************/

#include "SingleNumberSolution.hpp"
#include <vector>
 // ------------------------------------------------------------------------------------------
 // LeetCode No.136 Single Number
int SingleNumberSolution::singleNumber(std::vector<int>& nums)
{
    int result = 0;

    for (std::vector<int>::const_iterator cit = nums.cbegin(); cit != nums.cend(); ++cit)
    {
        result ^= (*cit);
    }

    return result;
}

//
// ------------------------------------------------------------------------------------------
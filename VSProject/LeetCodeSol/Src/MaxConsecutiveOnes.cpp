/*******************************************************************************************
 *  @file      MaxConsecutiveOnes.cpp 2019\2\11 18:04:49 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include "MaxConsecutiveOnes.hpp"
 // ------------------------------------------------------------------------------------------
 //
int MaxConsecutiveOnes::findMaxConsecutiveOnes(std::vector<int>& nums)
{
    int max = 0;
    int cur = 0;

    for(int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == 1)
        {
            ++cur;
        }
        else
        {
            max = cur > max ? cur : max;
            cur = 0;
        }

    }
    
    return max = cur > max ? cur : max;
}
// 
// -------------------------------------------------------------------------------------------

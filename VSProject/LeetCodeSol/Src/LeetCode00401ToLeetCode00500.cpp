/***********************************************************************************************************************
 *  @file    LeetCode00401ToLeetCode00500.hpp  2022-06-18 00:55:26
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include "LeetCode00401ToLeetCode00500.hpp"

#include <algorithm>
#include <map>
namespace
{
    char data[16] = { '0', '1', '2', '3', '4', '5', '6', '7','8','9', 'a', 'b', 'c', 'd', 'e', 'f' };
}


//----------------------------------------------------------------------------------------------------------------------
// No.405 Convert a Number to Hexadecimal
std::string LeetCode00405::toHex(int num)
{
    std::string result;
    if (num == 0)
    {
        result += '0';
        return result;
    }

    while (num)
    {
        int sub = (num & 0xf0000000) >> 28;
        if (!(sub == 0 && result.empty()))
        {
            result += data[sub];
        }

        num <<= 4;

    }

    return result;
}
//----------------------------------------------------------------------------------------------------------------------
//

int LeetCode00453::minMoves(std::vector<int>& nums)
{
    if (nums.empty())
    {
        return  0;
    }


    auto sub = std::min_element(nums.begin(), nums.end());

    int minvale = *sub;


    int sum = 0;

    std::for_each(nums.begin(), nums.end(), [&minvale, &sum](int& num) {sum += num - minvale; });

    return  sum;
}


//
//----------------------------------------------------------------------------------------------------------------------

int LeetCode00453_1::minMoves(std::vector<int>& nums)
{
    if (nums.empty())
    {
        return  0;
    }

    int minvalue = nums[0];

    int sub = 0;

    int sum = 0;


    std::for_each(nums.begin(), nums.end(),

        [&minvalue, &sub, &sum](const int& val)
        {
            if (val >= minvalue)
            {
                sum += (val - minvalue);
            }
            else
            {
                sum += (minvalue - val) * sub;

                minvalue = val;
            }

            ++sub;
        }
    );

    return  sum;
}

int LeetCode00453_2::minMoves(std::vector<int>& nums)
{
    if (nums.empty())
    {
        return  0;
    }

    int minvalue = nums[0];
    int sum = 0;


    std::for_each(nums.begin(), nums.end(),

        [&minvalue, &sum](const int& val)
        {
            sum += val;
            if (val < minvalue)
            {
                minvalue = val;
            }
        }
    );

    return  sum - minvalue * std::distance(nums.begin(), nums.end());

}

// ------------------------------------------------------------------------------------------
//
int LeetCode00485::findMaxConsecutiveOnes(std::vector<int>& nums)
{
    int max = 0;
    int cur = 0;

    for (int i = 0; i < nums.size(); ++i)
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
//----------------------------------------------------------------------------------------------------------------------

/*******************************************************************************************
 *  @file      GuessNumberHigherOrLower.cpp 2019\2\3 18:58:21 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.374 Guess Number Higher or Lower   GuessNumberHigherOrLowerTestSuite
 *******************************************************************************************/

#include "GuessNumberHigherOrLower.hpp"

namespace
{
    int s_result;
    int guess(int num)
    {
        if (num < s_result)
        {
            return -1;
        }

        if (num > s_result)
        {
            return 1;
        }

        if (num == s_result)
        {
            return 0;
        }
    }
}
// ------------------------------------------------------------------------------------------
//
GuessNumberHigherOrLower::GuessNumberHigherOrLower(int theNumber)
{
    s_result = theNumber;
}

// ------------------------------------------------------------------------------------------
//
int GuessNumberHigherOrLower::guessNumber(int n)
{
    int left  = 1;
    int right = n;

    while(left < right)
    {
        int mid = left + (right -left) / 2;

        int result = guess(mid);


        if (result == 0)
        {
            return mid;
        }


        if (result == 1)
        {
            right = mid - 1;
        }

        if ( result == -1)
        {
            left = mid + 1;
        }

    }

    return left;
}

// 
// -------------------------------------------------------------------------------------------

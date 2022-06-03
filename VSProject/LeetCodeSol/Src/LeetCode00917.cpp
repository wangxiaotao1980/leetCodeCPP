/*******************************************************************************************
 *  @file      LeetCode00019.cpp 2019\2\11 16:02:54 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include "LeetCode00917.hpp"
#include <cctype>
// ------------------------------------------------------------------------------------------
 //
std::string LeetCode00917::reverseOnlyLetters(std::string S)
{
    int left = 0;
    int right = S.size() - 1;

    while (left < right)
    {
        if (!std::isalpha(S[left]))
        {
            ++left;
            continue;
        }

        if (!std::isalpha(S[right]))
        {
            --right;
            continue;
        }

        S[left]  ^= S[right];
        S[right] ^= S[left];
        S[left]  ^= S[right];

        ++left;
        --right;
    }

    return S;
}
// 
// ------------------------------------------------------------------------------------------



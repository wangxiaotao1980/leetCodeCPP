/*******************************************************************************************
 *  @file      LeetCode00205.cpp 2015\12\15 16:15:58 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.205  Isomorphic Strings
 *******************************************************************************************/

#include "LeetCode00205.hpp"
#include <string.h>

 // ------------------------------------------------------------------------------------------
 //
bool LeetCode00205::isIsomorphic(std::string s, std::string t)
{
    char sHash[256];
    memset(sHash, 0, sizeof(sHash));

    char number = 0;

    for (std::string::iterator it = s.begin(); it != s.end(); ++it)
    {
        if (sHash[*it])
        {
            *it = sHash[*it];
        }
        else
        {
            sHash[*it] = ++number;
            *it = number;
        }
    }

    memset(sHash, 0, sizeof(sHash));
    number = 0;

    for (std::string::iterator it = t.begin(); it != t.end(); ++it)
    {
        if (sHash[*it])
        {
            *it = sHash[*it];
        }
        else
        {
            sHash[*it] = ++number;
            *it = number;
        }
    }

    return s == t;
}

//
// ------------------------------------------------------------------------------------------
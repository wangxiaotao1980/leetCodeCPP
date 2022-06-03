/*******************************************************************************************
 *  @file      LeetCode00299.cpp 2015\12\21 13:39:07 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.299 Bulls and Cows
 *******************************************************************************************/

#include "LeetCode00299.hpp"
#include <algorithm>
#include <sstream>
#include <iterator>

// ------------------------------------------------------------------------------------------
 //
std::string LeetCode00299::getHint(std::string secret, std::string guess)
{
    std::size_t secretLen = secret.size();
    std::size_t guessLen  = guess.size();

    std::size_t bullnumber = 0;

    std::size_t minsize = std::min(secretLen, guessLen);

    for (int i = 0; i != minsize; ++i)
    {
        char temp = secret[i] ^ guess[i];

        if (!temp)
        {
            secret[i] = 0;
            guess[i]  = 0;
            ++bullnumber;
        }
    }

    std::sort(secret.begin(), secret.end());
    std::sort(guess.begin(), guess.end());

    std::string result;
    std::set_intersection(secret.begin(), secret.end(), guess.begin(), guess.end(), std::back_inserter(result));

    int size = result.size();

    std::ostringstream ostr;

    ostr << bullnumber << 'A' << (size - bullnumber) << 'B';

    return ostr.str();
}

//
// ------------------------------------------------------------------------------------------
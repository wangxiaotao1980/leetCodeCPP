/*******************************************************************************************
 *  @file      RemoveDuplicateLettersSolution.cpp 2015\12\7 18:00:31 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.316 Remove Duplicate Letters
 *******************************************************************************************/

#include "RemoveDuplicateLettersSolution.hpp"
#include <vector>
namespace
{
    const std::vector<int> primeData{ 2,  3,  5,  7, 11,
                                       13, 17, 19, 23, 29,
                                       31, 37, 41, 43, 47,
                                       53, 59, 61, 67, 71,
                                       73, 79, 83, 89, 97,
                                       101
    };
}

// ------------------------------------------------------------------------------------------
// LeetCode No.316 Remove Duplicate Letters, No Solved
//std::string Solution::removeDuplicateLetters(std::string s)
//{
//    std::string result;
//
//    int primeProduct = 1;
//    for (std::string::const_iterator cit = s.cbegin(); cit != s.cend(); ++cit)
//    {
//        int prime = primeData[*cit - 'a'];
//
//        if ((primeProduct % prime))
//        {
//            primeProduct *= prime;
//        }
//    }
//
//    for (std::string::const_reverse_iterator crit = s.crbegin(); crit != s.crend(); ++crit)
//    {
//        int temPrime = primeData[*crit - 'a'];
//        if (!(primeProduct % temPrime))
//        {
//            result.push_back(*crit);
//            primeProduct /= temPrime;
//        }
//    }
//
//    std::reverse(result.begin(), result.end());
//    return result;
//}

//
// ------------------------------------------------------------------------------------------
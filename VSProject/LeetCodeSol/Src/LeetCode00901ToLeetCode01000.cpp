/***********************************************************************************************************************
 *  @file    LeetCode00901ToLeetCode01000.hpp  2022-06-18 00:58:16
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include "LeetCode00901ToLeetCode01000.hpp"

#include <algorithm>

//----------------------------------------------------------------------------------------------------------------------
// No.917.Reverse Only Letters
std::string LeetCode00901ToLeetCode01000::reverseOnlyLetters(std::string S)
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

        S[left] ^= S[right];
        S[right] ^= S[left];
        S[left] ^= S[right];

        ++left;
        --right;
    }

    return S;
}

//----------------------------------------------------------------------------------------------------------------------
// No.922 Sort Array By Parity II
std::vector<int> LeetCode00901ToLeetCode01000::sortArrayByParityII(std::vector<int>& A)
{
    std::vector<int> result(A.size());

    int subEven = 0;
    int subOdd = 1;

    for (int i = 0; i < A.size(); ++i)
    {
        if (A[i] % 2)
        {
            result[subOdd] = A[i];
            subOdd += 2;
        }
        else
        {
            result[subEven] = A[i];
            subEven += 2;
        }

    }


    return result;
}

//----------------------------------------------------------------------------------------------------------------------
// No.961 N-Repeated Element in Size 2N Array
int LeetCode00901ToLeetCode01000::repeatedNTimes(std::vector<int>& A)
{
    const size_t len = A.size();


    for (size_t i = 0; i < A.size(); ++i)
    {
        if ((A[(i + len + 0) % len] == A[(i + len + 1) % len]) || (A[(i + len + 0) % len] == A[(i + len + 2) % len]))
        {
            return A[(i + len + 0) % len];
        }
    }

    return 0;
}

// ------------------------------------------------------------------------------------------
// No.977 Squares of a Sorted Array
std::vector<int> LeetCode00901ToLeetCode01000::sortedSquares(std::vector<int>& A)

{
    std::vector<int> result(A);
    std::for_each(result.begin(), result.end(), [](int& i) {i = i * i; });
    std::sort(result.begin(), result.end());

    return result;
}



//----------------------------------------------------------------------------------------------------------------------
// No. 1000
int LeetCode00901ToLeetCode01000::mergeStones(std::vector<int>& stones, int k)
{
    int size = stones.size();


    // 判断是否可以合并为一堆
    if ((size - 1) % (k - 1))
    {
        return -1;
    }

    std::vector<std::vector<int>> ftable(2, std::vector<int>(size, 0));

    ftable[0] = stones;


    int len = size;
    int sub = 0;
    int cost = 0;


    while (len != 1)
    {
        int minVal = 0;
        int minSub = 0;

        for (int i = 0; i < k; ++i)
        {
            minVal += ftable[sub % 2][i];
        }

        for (int i = 0; i < len - k + 1; ++i)
        {
            int val = 0;
            for (int j = i; j < i + k; ++j)
            {
                val += ftable[sub % 2][j];
            }

            if (val < minVal)
            {
                minSub = i;
                minVal = val;
            }

        }

        cost += minVal;


        for (int i = 0; i < minSub; ++i)
        {
            ftable[(sub + 1) % 2][i] = ftable[sub % 2][i];
        }

        ftable[(sub + 1) % 2][minSub] = minVal;


        len -= (k - 1);
        for (int i = minSub + 1; i < len; ++i)
        {
            ftable[(sub + 1) % 2][i] = ftable[sub % 2][i + k - 1];
        }

        ++sub;
    }


    return cost;


}

//
//----------------------------------------------------------------------------------------------------------------------

/*******************************************************************************************
 *  @file      CountPrimesSolution.hpp 2015\12\7 18:00:31 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.204 Count Primes
 *******************************************************************************************/

#include "CountPrimesSolution.hpp"
#include <string.h>
 // ------------------------------------------------------------------------------------------
 // LeetCode No.204 Count Primes
int CountPrimesSolution::countPrimes(int n)
{
    if (n <= 2)
    {
        return 0;
    }

    bool *primes = new bool[n];
    memset(primes, true, sizeof(bool) * n);

    for (int p = 2; (p*p) < n; ++p)
    {
        if (primes[p])
        {
            for (int i = 2; (i*p) < n; ++i)
            {
                primes[i * p] = false;
            }
        }
    }

    int count = 0;
    for (int p = 2; p < n; ++p)
    {
        if (primes[p])
        {
            ++count;
        }
    }
    delete[] primes;
    return count;
}

//
// ------------------------------------------------------------------------------------------
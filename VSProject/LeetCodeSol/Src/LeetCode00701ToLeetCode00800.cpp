/***********************************************************************************************************************
 *  @file    LeetCode00701ToLeetCode00800.hpp  2022-06-18 00:57:18
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include "LeetCode00701ToLeetCode00800.hpp"
//----------------------------------------------------------------------------------------------------------------------
// No.718 Maximum Length of Repeated Subarray
int LeetCode00701ToLeetCode00800::findLength(std::vector<int>& A, std::vector<int>& B)
{
    std::vector<std::vector<int>> C(A.size() + 1, std::vector<int>(B.size() + 1, 0));

    int result = 0;

    for (int i = 1; i < A.size() + 1; ++i)
    {
        for (int j = 1; j < B.size() + 1; ++j)
        {
            if (A[i - 1] == B[j - 1])
            {
                C[i][j] = C[i - 1][j - 1] + 1;
            }

            result = result > C[i][j] ? result : C[i][j];
        }
    }

    return result;
}



//
//----------------------------------------------------------------------------------------------------------------------

/*******************************************************************************************
 *  @file      MaximumLengthOfRepeatedSubarray.cpp 2019\2\12 13:50:48 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include "MaximumLengthOfRepeatedSubarray.hpp"
// ------------------------------------------------------------------------------------------
//
int MaximumLengthOfRepeatedSubarray::findLength(std::vector<int>& A, std::vector<int>& B)
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
// -------------------------------------------------------------------------------------------

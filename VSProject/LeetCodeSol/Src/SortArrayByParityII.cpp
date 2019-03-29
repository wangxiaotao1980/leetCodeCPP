/*******************************************************************************************
 *  @file      SortArrayByParityII.cpp 2019\2\11 20:01:52 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include "SortArrayByParityII.hpp"
// ------------------------------------------------------------------------------------------
//
std::vector<int> SortArrayByParityII::sortArrayByParityII(std::vector<int>& A)
{
    std::vector<int> result(A.size());

    int subEven = 0;
    int subOdd  = 1;

    for (int i = 0; i < A.size(); ++i)
    {
        if (A[i] % 2)
        {
            result[subOdd] = A[i];
            subOdd +=2;
        }
        else
        {
            result[subEven] = A[i];
            subEven += 2;
        }

    }


    return result;
}
// 
// -------------------------------------------------------------------------------------------


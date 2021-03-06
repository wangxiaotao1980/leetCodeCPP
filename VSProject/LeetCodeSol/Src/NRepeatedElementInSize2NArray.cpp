/*******************************************************************************************
 *  @file      NRepeatedElementInSize2NArray.cpp 2019\2\11 16:38:51 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include "NRepeatedElementInSize2NArray.hpp"
 // ------------------------------------------------------------------------------------------
 //
int NRepeatedElementInSize2NArray::repeatedNTimes(std::vector<int>& A)
{
    const size_t len = A.size();


    for(size_t i = 0; i < A.size(); ++i)
    {
        if ((A[(i + len + 0) % len] == A[(i + len + 1) % len]) || (A[(i + len + 0) % len] == A[(i + len + 2) % len]))
        {
            return A[(i + len + 0) % len];
        }
    }

}

// 
// ------------------------------------------------------------------------------------------



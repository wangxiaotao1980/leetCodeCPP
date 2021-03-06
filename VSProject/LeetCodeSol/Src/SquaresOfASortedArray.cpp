/*******************************************************************************************
 *  @file      SquaresOfASortedArray.cpp 2019\2\12 17:29:09 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include "SquaresOfASortedArray.hpp"
#include <algorithm>
 // ------------------------------------------------------------------------------------------
 //
std::vector<int> SquaresOfASortedArray::sortedSquares(std::vector<int>& A)

{
    std::vector<int> result(A);
    std::for_each(result.begin(), result.end(), []( int& i){i = i * i; });
    std::sort(result.begin(), result.end());

    return result;
}

// 
// -------------------------------------------------------------------------------------------


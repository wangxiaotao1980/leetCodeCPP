/*******************************************************************************************
 *  @file      ValidPerfectSquare.cpp 2019\2\3 18:10:54 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include "ValidPerfectSquare.hpp"

// ------------------------------------------------------------------------------------------
//


// ------------------------------------------------------------------------------------------
//
bool ValidPerfectSquareSolution::isPerfectSquare(int num)
{
    int i = 1;
    while (num > 0)
    {
        num -= i;
        i   += 2;
    }


    return num == 0;
}

// 
// -------------------------------------------------------------------------------------------
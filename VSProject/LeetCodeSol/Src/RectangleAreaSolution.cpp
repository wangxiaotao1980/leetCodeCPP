/*******************************************************************************************
 *  @file      RectangleAreaSolution.cpp 2015\12\7 18:00:31 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.223 Rectangle Area
 *******************************************************************************************/

#include "RectangleAreaSolution.hpp"
#include <cstdint>
 // ------------------------------------------------------------------------------------------
 // LeetCode No.223 Rectangle Area
int RectangleAreaSolution::computeArea(int A, int B, int C, int D, int E, int F, int G, int H)
{
    int64_t x1Len = (C - A);
    int64_t x2Len = (G - E);

    int64_t xAllLen = x1Len + x2Len;

    int64_t y1Len = (D - B);
    int64_t y2Len = (H - F);

    int64_t yAllLen = y1Len + y2Len;

    int64_t xMin = (A < E) ? A : E;
    int64_t xMax = (C > G) ? C : G;

    int64_t xRealLen = xMax - xMin;

    int64_t yMin = (B < F) ? B : F;
    int64_t yMax = (D > H) ? D : H;

    int64_t yRealLen = yMax - yMin;

    int64_t xlen = xAllLen - xRealLen;
    xlen = (xlen < 0) ? 0 : xlen;

    int64_t ylen = yAllLen - yRealLen;
    ylen = (ylen < 0) ? 0 : ylen;

    return (x1Len * y1Len) + (x2Len * y2Len) - (xlen * ylen);
}

//
// ------------------------------------------------------------------------------------------
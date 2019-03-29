/*******************************************************************************************
 *  @file      FirstBadVersionSolution.cpp 2015\12\21 16:15:38 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.278 First Bad Version
 *******************************************************************************************/

#include "FirstBadVersionSolution.hpp"
// ------------------------------------------------------------------------------------------
//
FirstBadVersionSolution::FirstBadVersionSolution(const bool* pBool)
    : m_pBool(pBool)
{}

// ------------------------------------------------------------------------------------------
//
int FirstBadVersionSolution::firstBadVersion(int n)
{
    int beg = 1;
    int end = n;

    while (beg < end)
    {
        int mid = beg + (end - beg) / 2;

        if (isBadVersion(mid))
        {
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }
    }

    return beg;
}

// ------------------------------------------------------------------------------------------
//
bool FirstBadVersionSolution::isBadVersion(int version)
{
    return !m_pBool[version - 1];
}

//
// ------------------------------------------------------------------------------------------

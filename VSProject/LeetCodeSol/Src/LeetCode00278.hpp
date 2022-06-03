/*******************************************************************************************
 *  @file      LeetCode00278.hpp 2015\12\21 16:15:31 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.278 First Bad Version
 *******************************************************************************************/
#ifndef FIRSTBADVERSIONSOLUTION_7B647CD2_5C9E_4955_8FF1_8069CF096A4C_HPP__
#define FIRSTBADVERSIONSOLUTION_7B647CD2_5C9E_4955_8FF1_8069CF096A4C_HPP__

/*******************************************************************************************/

/**
 * The class <code>FirstBadVersionSolution</code>
 *
 */
class LeetCode00278
{
public:
    LeetCode00278(const bool* pBool);
    int firstBadVersion(int                 n);
private:
    bool isBadVersion(int version);
private:
    const bool* m_pBool;
};

/*******************************************************************************************/
#endif// FIRSTBADVERSIONSOLUTION_7B647CD2_5C9E_4955_8FF1_8069CF096A4C_HPP__

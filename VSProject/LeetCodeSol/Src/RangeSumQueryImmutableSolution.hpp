/*******************************************************************************************
 *  @file      RangeSumQueryImmutableSolution.hpp 2015\12\14 17:29:22 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.303  Range Sum Query - Immutable
 *******************************************************************************************/
#ifndef RANGESUMQUERYIMMUTABLESOLUTION_DA0443AB_48EF_4C2A_8C27_E4837F7C1C99_HPP__
#define RANGESUMQUERYIMMUTABLESOLUTION_DA0443AB_48EF_4C2A_8C27_E4837F7C1C99_HPP__

#include <vector>
 /*******************************************************************************************/

 /**
  * The class <code>RangeSumQueryImmutableSolution</code>
  *
  */
class RangeSumQueryImmutableSolution
{
public:
    RangeSumQueryImmutableSolution(std::vector<int>& num);

    ~RangeSumQueryImmutableSolution();

    int sumRange(int i, int j);

private:
    int* m_pSum;
};

/*******************************************************************************************/
#endif// RANGESUMQUERYIMMUTABLESOLUTION_DA0443AB_48EF_4C2A_8C27_E4837F7C1C99_HPP__
/*******************************************************************************************
 *  @file      LeetCode00295.hpp 2015\12\11 17:21:52 $
 *  @author    Wang Xiaotao<wangxiaotao1980t@gmail.com> (中文编码测试)
 *  @note      LeetCode No.295 Find Median from Data Stream
 *******************************************************************************************/
#ifndef MEDIANFINDER_D63D1669_1405_4CBA_95A0_195BC9776A8E_HPP__
#define MEDIANFINDER_D63D1669_1405_4CBA_95A0_195BC9776A8E_HPP__

#include <queue>
#include <deque>
#include <functional>

 /*******************************************************************************************/

 /**
  * The class <code>MedianFinder</code>
  *
  */
class LeetCode00295
{
public:
    LeetCode00295();
    // Adds a number into the data structure.
    void addNum(int num);

    // Returns the median of current data stream
    double findMedian();
private:

    std::priority_queue<int, std::deque<int>, std::less<int> >       m_lessMedianQueue;
    std::priority_queue<int, std::deque<int>, std::greater<int> >    m_greaterMedianQueueQueue;
};

/*******************************************************************************************/
#endif// MEDIANFINDER_D63D1669_1405_4CBA_95A0_195BC9776A8E_HPP__
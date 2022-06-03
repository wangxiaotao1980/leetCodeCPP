/*******************************************************************************************
 *  @file      LeetCode00295.cpp 2015\12\11 17:28:32 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.295 Find Median from Data Stream
 *******************************************************************************************/

#include "LeetCode00295.hpp"
#include <climits>
 // ------------------------------------------------------------------------------------------
 //
LeetCode00295::LeetCode00295()
{
    m_lessMedianQueue.push(INT_MIN);
    m_greaterMedianQueueQueue.push(INT_MAX);
}

// ------------------------------------------------------------------------------------------
//
void LeetCode00295::addNum(int num)
{
    int lessMedianMax    = m_lessMedianQueue.top();
    int greaterMedianMin = m_greaterMedianQueueQueue.top();

    if (num <= lessMedianMax)
    {
        m_lessMedianQueue.push(num);
    }
    else if (num >= greaterMedianMin)
    {
        m_greaterMedianQueueQueue.push(num);
    }
    else
    {
        if (m_lessMedianQueue.size() > m_greaterMedianQueueQueue.size())
        {
            m_greaterMedianQueueQueue.push(num);
        }
        else
        {
            m_lessMedianQueue.push(num);
        }
    }

    if (2 == (m_lessMedianQueue.size() - m_greaterMedianQueueQueue.size()))
    {
        m_greaterMedianQueueQueue.push(m_lessMedianQueue.top());
        m_lessMedianQueue.pop();
    }

    if (2 == (m_greaterMedianQueueQueue.size() - m_lessMedianQueue.size()))
    {
        m_lessMedianQueue.push(m_greaterMedianQueueQueue.top());
        m_greaterMedianQueueQueue.pop();
    }
}

// ------------------------------------------------------------------------------------------
//
double LeetCode00295::findMedian()
{
    if (m_lessMedianQueue.size() == m_greaterMedianQueueQueue.size())
    {
        return (m_lessMedianQueue.top() + m_greaterMedianQueueQueue.top()) / 2.0;
    }

    if (m_lessMedianQueue.size() > m_greaterMedianQueueQueue.size())
    {
        double ressult = m_lessMedianQueue.top();
        return ressult;
    }
    else
    {
        double ressult = m_greaterMedianQueueQueue.top();
        return ressult;
    }
}

//
// ------------------------------------------------------------------------------------------
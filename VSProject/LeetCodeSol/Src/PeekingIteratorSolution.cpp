/*******************************************************************************************
 *  @file      PeekingIteratorSolution.cpp 2015\12\14 11:53:58 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.284  Peeking Iterator
 *******************************************************************************************/

#include "PeekingIteratorSolution.hpp"

 // ------------------------------------------------------------------------------------------
 //
Iterator::Iterator(const std::vector<int>& nums)
{
}

// ------------------------------------------------------------------------------------------
//
Iterator::Iterator(const Iterator& iter)
{
}

// ------------------------------------------------------------------------------------------
//
Iterator::~Iterator()
{
}

// ------------------------------------------------------------------------------------------
//
int Iterator::next()
{
    return 0;
}

// ------------------------------------------------------------------------------------------
//
bool Iterator::hasNext() const
{
    return false;
}

// ------------------------------------------------------------------------------------------
//
PeekingIterator::PeekingIterator(const std::vector<int>& nums) :Iterator(nums)
{
    // **DO NOT** save a copy of nums and manipulate it directly.
    // You should only use the Iterator interface methods.
    next();
}

// ------------------------------------------------------------------------------------------
//
int PeekingIterator::peek()
{
    return m_nextValue;
}

// ------------------------------------------------------------------------------------------
//
int PeekingIterator::next()
{
    int result = m_nextValue;

    if (Iterator::hasNext())
    {
        m_nextValue = Iterator::next();
        m_isHasNext = true;
    }
    else
    {
        m_isHasNext = false;
    }

    return result;
}

// ------------------------------------------------------------------------------------------
//
bool PeekingIterator::hasNext() const
{
    return m_isHasNext;
}

//
// ------------------------------------------------------------------------------------------
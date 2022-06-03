/*******************************************************************************************
 *  @file      LeetCode00284.hpp 2015\12\14 11:52:58 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.284  Peeking Iterator(本题无单元测试)
 *******************************************************************************************/
#ifndef PEEKINGITERATORSOLUTION_FBA81CB8_AA85_4EEA_B50F_A2C4840631E9_HPP__
#define PEEKINGITERATORSOLUTION_FBA81CB8_AA85_4EEA_B50F_A2C4840631E9_HPP__

#include <vector>

 /*******************************************************************************************/

class Iterator
{
    struct Data;
    Data* data;
public:
    Iterator(const std::vector<int>& nums);
    Iterator(const Iterator& iter);
    virtual ~Iterator();
    // Returns the next element in the iteration.
    int next();
    // Returns true if the iteration has more elements.
    bool hasNext() const;
};

class LeetCode00284 : public Iterator
{
public:
    LeetCode00284(const std::vector<int>& nums);

    // Returns the next element in the iteration without advancing the iterator.
    int peek();

    // hasNext() and next() should behave the same as in the Iterator interface.
    // Override them if needed.
    int next();

    bool hasNext() const;

private:
    bool m_isHasNext;
    int  m_nextValue;
};

/*******************************************************************************************/
#endif// PEEKINGITERATORSOLUTION_FBA81CB8_AA85_4EEA_B50F_A2C4840631E9_HPP__
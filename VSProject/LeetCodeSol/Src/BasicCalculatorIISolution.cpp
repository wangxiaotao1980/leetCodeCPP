/*******************************************************************************************
 *  @file      BasicCalculatorIISolution.cpp 2015\12\18 17:41:52 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.227 Basic Calculator II
 *******************************************************************************************/

#include "BasicCalculatorIISolution.hpp"
#include <map>
#include <stack>

 // ------------------------------------------------------------------------------------------
 //
namespace
{
    const std::map<char, int> inStackPriority
    { { '#', 0 }, { '*', 5 }, { '/', 5 }, { '+', 3 }, { '-', 3 } };
    const std::map<char, int> outStackPriority
    { { '#', 0 }, { '*', 4 }, { '/', 4 }, { '+', 2 }, { '-', 2 } };
}

// ------------------------------------------------------------------------------------------
//
int BasicCalculatorIISolution::calculate(std::string s)
{
    std::stack<std::pair<char, int> > symbolStack;
    std::stack<int>    numberStack;

    s.push_back('#');

    std::string::const_iterator cit = s.cbegin();

    while (cit != s.cend())
    {
        if (' ' == *cit)
        {
            ++cit;
            continue;
        }

        if (isdigit(*cit))
        {
            int number = 0;

            while (isdigit(*cit))
            {
                number *= 10;
                number += ((*cit) - '0');
                ++cit;
            }

            numberStack.push(number);
            continue;
        }

        std::map<char, int>::const_iterator outmapit = outStackPriority.find(*cit);

        if (outmapit != outStackPriority.end())
        {
            int level = outmapit->second;

            if (symbolStack.empty())
            {
                symbolStack.push(std::make_pair(*cit, inStackPriority.find(*cit)->second));
            }
            else
            {
                if (level > symbolStack.top().second)
                {
                    symbolStack.push(std::make_pair(*cit, inStackPriority.find(*cit)->second));
                }
                else
                {
                    while ((!symbolStack.empty()) && (level < symbolStack.top().second))
                    {
                        char symbol = symbolStack.top().first;
                        symbolStack.pop();

                        if ('+' == symbol)
                        {
                            int b = numberStack.top();
                            numberStack.pop();
                            int a = numberStack.top();
                            numberStack.pop();
                            numberStack.push(a + b);
                        }

                        if ('-' == symbol)
                        {
                            int b = numberStack.top();
                            numberStack.pop();
                            int a = numberStack.top();
                            numberStack.pop();
                            numberStack.push(a - b);
                        }

                        if ('*' == symbol)
                        {
                            int b = numberStack.top();
                            numberStack.pop();
                            int a = numberStack.top();
                            numberStack.pop();
                            numberStack.push(a * b);
                        }

                        if ('/' == symbol)
                        {
                            int b = numberStack.top();
                            numberStack.pop();
                            int a = numberStack.top();
                            numberStack.pop();
                            numberStack.push(a / b);
                        }
                    }
                    symbolStack.push(std::make_pair(*cit, inStackPriority.find(*cit)->second));
                }
            }
            ++cit;
            continue;
        }
    }

    return numberStack.top();
}
//
// ------------------------------------------------------------------------------------------
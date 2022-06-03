/*******************************************************************************************
 *  @file      LeetCode00228.cpp 2015\12\7 18:00:31 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.228 Summary Ranges
 *******************************************************************************************/

#include "LeetCode00228.hpp"
#include <sstream>

 // ------------------------------------------------------------------------------------------
 // LeetCode No.228 Summary Ranges
std::vector<std::string> LeetCode00228::summaryRanges(std::vector<int>& nums)
{
    int begin = 0;
    int end   = 0;

    std::vector<std::string> result;

    const size_t len = nums.size();
    if (0 == len)
    {
        return result;
    }

    std::stringstream ostr;

    while (end < len)
    {
        if (begin == end)
        {
            ostr << nums[end++];
        }
        else if ((end - begin) == (nums[end] - nums[begin]))
        {
            ++end;
        }
        else
        {
            if ((end - begin) == 1)
            {
                result.push_back(ostr.str());
                ostr.str("");
                begin = end;
            }
            else
            {
                ostr << "->" << nums[end - 1];
                result.push_back(ostr.str());
                ostr.str("");
                begin = end;
            }
        }
    }

    if ((end - begin) == 1)
    {
        result.push_back(ostr.str());
        ostr.str("");
        begin = end;
    }
    else
    {
        ostr << "->" << nums[end - 1];
        result.push_back(ostr.str());
        ostr.str("");
        begin = end;
    }

    return result;
}

//
// ------------------------------------------------------------------------------------------
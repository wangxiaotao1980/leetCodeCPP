/*******************************************************************************************
 *  @file      LeetCode00001.cpp 2015\12\14 14:10:21 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      LeetCode No.1 Two Sum
 *******************************************************************************************/

#include "LeetCode00001.hpp"
#include <unordered_map>
#include <algorithm>

 // ------------------------------------------------------------------------------------------
 //
std::vector<int> LeetCode00001::twoSum(std::vector<int>& nums, int target)
{
    std::unordered_multimap<int, int> theMap;

    for (int i = 0; i < nums.size(); ++i)
    {
        theMap.insert(std::make_pair(nums[i], i + 1));
    }

    std::vector<int> result;
    for (auto cit = theMap.cbegin(); cit != theMap.cend(); ++cit)
    {
        int theOther = target - (cit->first);

        if (theOther == cit->first)
        {
            std::pair<std::unordered_multimap<int, int>::const_iterator,
                std::unordered_multimap<int, int>::const_iterator> rangeIter = theMap.equal_range(theOther);

            std::vector<int> temResult;
            for (auto cit = rangeIter.first; cit != rangeIter.second;
                 ++cit)
            {
                temResult.push_back(cit->second);
            }
            if (temResult.size() >= 2)
            {
                std::sort(temResult.begin(), temResult.end());

                return std::vector<int>{temResult[0], temResult[1]};
            }
        }
        else
        {
            std::unordered_multimap<int, int>::const_iterator theResult = theMap.find(theOther);

            if (theResult != theMap.end())
            {
                std::vector<int> temResult;
                temResult.push_back(cit->second);
                temResult.push_back(theResult->second);

                if (temResult[0] > temResult[1])
                {
                    temResult[0] ^= temResult[1];
                    temResult[1] ^= temResult[0];
                    temResult[0] ^= temResult[1];
                }

                return temResult;
            }
        }
    }

    return std::vector<int>();
}

//
// ------------------------------------------------------------------------------------------
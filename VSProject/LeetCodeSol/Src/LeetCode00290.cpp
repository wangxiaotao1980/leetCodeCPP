/*******************************************************************************************
 *  @file      LeetCode00290.cpp 2015\12\21 14:39:12 $
 *  @author    Wang Xiaotao<wangxt@hiscene.com> (中文编码测试)
 *  @note      LeetCode No.290  Word Pattern
 *******************************************************************************************/

#include "LeetCode00290.hpp"
#include <unordered_map>

 // ------------------------------------------------------------------------------------------
 //
bool LeetCode00290::wordPattern(std::string pattern, std::string str)
{
    std::string::size_type beg        = 0;
    std::string::size_type end        = 0;
    std::string::size_type patternBeg = 0;

    std::unordered_map<char, std::string> patternToStr;
    std::unordered_map<std::string, char> strToPattern;

    do
    {
        end = str.find_first_of(' ', beg);

        std::string substr = str.substr(beg, end - beg);

        std::unordered_map<char, std::string>::const_iterator patternToStrCit
            = patternToStr.find(pattern[patternBeg]);

        if (patternToStrCit != patternToStr.end())
        {
            if (patternToStrCit->second != substr)
            {
                return false;
            }
        }
        else
        {
            std::unordered_map<std::string, char>::const_iterator strToPatternCit
                = strToPattern.find(substr);

            if (strToPatternCit != strToPattern.end())
            {
                return false;
            }
            else
            {
                patternToStr.insert(std::make_pair(pattern[patternBeg], substr));
                strToPattern.insert(std::make_pair(substr, pattern[patternBeg]));
            }
        }

        beg = end;
        ++beg;
        ++patternBeg;
    } while ((end != std::string::npos) && (patternBeg != pattern.size()));

    if ((patternBeg != pattern.size()) || end != std::string::npos)
    {
        return false;
    }

    return true;
}

//
// ------------------------------------------------------------------------------------------
/*******************************************************************************************
 *  @file      ConvertANumberToHexadecimal.cpp 2019\2\3 21:13:59 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (中文编码测试)
 *  @note      summary
 *******************************************************************************************/

#include "ConvertANumberToHexadecimal.hpp"
#include <map>
namespace
{
    char data[16] ={ '0', '1', '2', '3', '4', '5', '6', '7','8','9', 'a', 'b', 'c', 'd', 'e', 'f'};
}


// ------------------------------------------------------------------------------------------
//



std::string ConvertANumberToHexadecimal::toHex(int num)
{
    std::string result;
    if (num == 0)
    {
        result += '0';
        return result;
    }

    while(num)
    {
        int sub = (num & 0xf0000000)>>28;
        if (!(sub ==0 && result.empty()))
        {
            result += data[sub];
        }

        num <<= 4;

    }

    return result;
}

// 
// -------------------------------------------------------------------------------------------


/*******************************************************************************************
 *  @file      Types.hpp 2019\2\19 14:36:44 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (÷–Œƒ±‡¬Î≤‚ ‘)
 *  @note      summary
 *******************************************************************************************/
#ifndef TYPES_370A57B0_F98F_4DD3_BE87_4C279EEBB574_HPP__
#define TYPES_370A57B0_F98F_4DD3_BE87_4C279EEBB574_HPP__
#include <boost/config.hpp>
#include <boost/type_traits.hpp>
#include <boost/utility.hpp>
/*******************************************************************************************/

template<typename ...T>
int f(T ...args)
{
    return sizeof...(args);
}


//template<int N, int M>
//struct meta_fun1
//{
//    BOOST_STATIC_CONSTANT(int, value = M + N);
//};

template<int N, int M>
struct meta_fun1
{
    BOOST_STATIC_CONSTANT(int, value = M + N);
};

template<typename T1, typename T2>
struct select1st
{
    typedef T1 type;
};

template<typename T1, typename T2>
struct select2nd : public select1st<T2, T1> {};


#define MP_ARGLIST     template
#define MP_ARG         typename
#define MP_FUNCTION    struct
#define MP_DATA        typedef

#define MP_RETURN(t)   MP_DATA T type
#define MP_EXEC(Func)  Func::type
#define MP_EVAL(Func)  Func::value



template<typename T>
T print(T x, typename boost::enable_if<boost::is_integral<T>>::type*  = 0)
{
    std::cout << "x : " << x << std::endl;

    return x;
}

/*******************************************************************************************/
#endif// TYPES_370A57B0_F98F_4DD3_BE87_4C279EEBB574_HPP__

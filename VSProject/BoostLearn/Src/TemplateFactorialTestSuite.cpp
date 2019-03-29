/*******************************************************************************************
 *  @file      TemplateFactorialTestSuite.cpp 2019\2\15 15:00:09 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (÷–Œƒ±‡¬Î≤‚ ‘)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>

template <unsigned n>
struct Factorial
{
    static const unsigned value = n * Factorial < n - 1 > ::value;
};

template<>
struct  Factorial<0>
{
    static const unsigned value = 1;
};


template<int N, int M>
struct meta_add_func
{
    static const int value = N + M;
};

// ------------------------------------------------------------------------------------------
//
TEST(TemplateFactorialTestSuite, TemplateFactorialTestSuiteTestCase0)
{
    ASSERT_EQ(  1, Factorial<0>::value);
    ASSERT_EQ(  1, Factorial<1>::value);
    ASSERT_EQ(  2, Factorial<2>::value);
    ASSERT_EQ(  6, Factorial<3>::value);
    ASSERT_EQ( 24, Factorial<4>::value);
    ASSERT_EQ(120, Factorial<5>::value);
    ASSERT_EQ(720, Factorial<6>::value);
}


TEST(TemplateFactorialTestSuite, TemplateFactorialTestSuiteTestCase1)
{
    ASSERT_EQ(0, (meta_add_func<0, 0>::value));
    ASSERT_EQ(1, (meta_add_func<1, 0>::value));
    ASSERT_EQ(1, (meta_add_func<0, 1>::value));
    ASSERT_EQ(2, (meta_add_func<1, 1>::value));
}

// 
// -------------------------------------------------------------------------------------------

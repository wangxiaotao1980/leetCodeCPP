/*******************************************************************************************
 *  @file      VariadicTemplateParameterTestSuite.cpp 2019\2\19 15:52:27 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (÷–Œƒ±‡¬Î≤‚ ‘)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include <boost/call_traits.hpp>
#include "VariadicTemplateParameter.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(VariadicTemplateParameterTestSuite, VariadicTemplateParameterTestSuiteTestCase0)
{
    ASSERT_EQ(0, f());
    ASSERT_EQ(1, f(1));
    ASSERT_EQ(2, f(1, 2));
    ASSERT_EQ(3, f(1, 2, 3));
}

// ------------------------------------------------------------------------------------------
//
TEST(VariadicTemplateParameterTestSuite, VariadicTemplateParameterTestSuiteTestCase1)
{
    ASSERT_EQ(20, (meta_fun1<15, 5>::value));
}

// ------------------------------------------------------------------------------------------
//
TEST(VariadicTemplateParameterTestSuite, VariadicTemplateParameterTestSuiteTestCase2)
{
    ASSERT_EQ(true , boost::is_arithmetic<char>::value);
    
}

// ------------------------------------------------------------------------------------------
//
TEST(VariadicTemplateParameterTestSuite, VariadicTemplateParameterTestSuiteTestCase3)
{
    int data = 5;
    ASSERT_EQ(data, print(data));

    boost::call_traits<int> ::value_type thedata = 1;
    ASSERT_EQ(1, thedata);
}

// ------------------------------------------------------------------------------------------
//
TEST(VariadicTemplateParameterTestSuite, VariadicTemplateParameterTestSuiteTestCase4)
{
    //MP_DATA MP_EXEC(boost::add_const<int>) mdata1;

    MP_DATA int(mdata1)[5][7][9];

    MP_DATA MP_EXEC(boost::remove_extent<mdata1>) mdata2;
    ASSERT_TRUE((boost::is_same<mdata2, int[7][9]>::value));

    MP_DATA MP_EXEC(boost::remove_all_extents<mdata1>) mdata4;
    ASSERT_TRUE((boost::is_same<mdata4, int>::value));
}


// ------------------------------------------------------------------------------------------
//
TEST(VariadicTemplateParameterTestSuite, FunctionTraitsTestCase)
{

    MP_DATA void(mdata1)(int, float);
    ASSERT_TRUE((boost::is_function<mdata1>::value));
    ASSERT_EQ(2, boost::function_traits<mdata1>::arity);
    ASSERT_TRUE((boost::is_void<boost::function_traits<mdata1>::result_type>::value));
    ASSERT_TRUE((boost::is_integral<boost::function_traits<mdata1>::arg1_type>::value));
    ASSERT_TRUE((boost::is_float<boost::function_traits<mdata1>::arg2_type>::value));
}


// 
// -------------------------------------------------------------------------------------------

/*******************************************************************************************
 *  @file      BoostMPLTestSuite.cpp 2019\2\19 19:11:54 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (÷–Œƒ±‡¬Î≤‚ ‘)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>

#include <boost/mpl/bool.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/integral_c.hpp>

#include <boost/mpl/if.hpp>
#include <boost/type_traits.hpp>

// ------------------------------------------------------------------------------------------
//
TEST(BoostMPLTestSuite, BoostMPLTestSuiteTestCase0)
{
    using False_ = boost::mpl::false_;
    using True_ = boost::mpl::true_;

    ASSERT_TRUE(True_::value);
    ASSERT_FALSE(False_::value);
}

// ------------------------------------------------------------------------------------------
//
TEST(BoostMPLTestSuite, BoostMPLTestSuiteTestCase1)
{
    using int10 = boost::mpl::int_<10>;
    using int10_c = boost::mpl::integral_c<int, 10>;

    ASSERT_EQ(10, int10::value);
    ASSERT_EQ(10, int10_c::value);

    ASSERT_EQ(11, int10::next::value);
    ASSERT_EQ(9,  int10::prior::value);
}

// ------------------------------------------------------------------------------------------
//
TEST(BoostMPLTestSuite, BoostMPLIfTestSuiteTestCase)
{
    using meta_int_1 = boost::mpl::if_c<true, int, long>::type;
    ASSERT_TRUE((boost::is_same<meta_int_1, int>::value));

    using meta_int_2 = boost::mpl::if_<boost::mpl::false_, int, long>::type;
    ASSERT_TRUE((boost::is_same<meta_int_2, long>::value));
}


// 
// -------------------------------------------------------------------------------------------

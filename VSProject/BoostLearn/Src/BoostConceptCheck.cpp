/*******************************************************************************************
 *  @file      BoostConceptCheck.cpp 2019\2\19 17:42:46 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (÷–Œƒ±‡¬Î≤‚ ‘)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include "boost/concept_check.hpp"
// ------------------------------------------------------------------------------------------
//
TEST(BoostConceptCheck, BoostConceptCheckTestCase0)
{
    BOOST_CONCEPT_ASSERT((boost::IntegerConcept<char>));
    BOOST_CONCEPT_ASSERT((boost::IntegerConcept<unsigned char>));
    BOOST_CONCEPT_ASSERT((boost::IntegerConcept<signed char>));
}
// ------------------------------------------------------------------------------------------
//
TEST(BoostConceptCheck, BoostConceptCheckTestCase1)
{
}


// 
// -------------------------------------------------------------------------------------------

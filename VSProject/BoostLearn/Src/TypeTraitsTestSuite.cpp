/*******************************************************************************************
 *  @file      TypeTraitsTestSuite.cpp 2019\2\15 15:20:27 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (÷–Œƒ±‡¬Î≤‚ ‘)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>
#include <type_traits>
#include <boost/type_traits.hpp>

// ------------------------------------------------------------------------------------------
//

template <class T>
T result(T a)
{
    return a;
}

TEST(TypeTraitsTestSuite, TypeTraitsTestSuiteTestCase0)
{
    std::true_type  theTrue;
    std::false_type theFalse;

    ASSERT_EQ(theTrue, result(std::is_same<int, int>::value));
    ASSERT_EQ(theFalse, result(std::is_same<int, unsigned int>::value));
    ASSERT_EQ(theFalse, result(std::is_const<int>::value));
    ASSERT_EQ(theTrue, result(std::is_const<std::add_const<int>::type>::value));
    ASSERT_EQ(theTrue, result(std::is_same<int, std::remove_const<int>::type>::value));
    ASSERT_EQ(theTrue, result(std::is_same<int&, std::add_lvalue_reference<int>::type>::value));
    ASSERT_EQ(theTrue, result(std::is_same<int&&, std::add_rvalue_reference<int>::type>::value));
}

TEST(TypeTraitsTestSuite, TypeTraitsTestSuiteTestCase1)
{
    boost::true_type  theTrue;
    boost::false_type theFalse;

    ASSERT_EQ(theTrue, result(boost::is_same<int, int>::value));
    ASSERT_EQ(theFalse, result(boost::is_same<int, unsigned int>::value));
    ASSERT_EQ(theFalse, result(boost::is_const<int>::value));
    ASSERT_EQ(theTrue, result(boost::is_const<boost::add_const<int>::type>::value));
    ASSERT_EQ(theTrue, result(boost::is_same<int, boost::remove_const<int>::type>::value));
    ASSERT_EQ(theTrue, result(boost::is_same<int&, boost::add_lvalue_reference<int>::type>::value));
    ASSERT_EQ(theTrue, result(boost::is_same<int&&, boost::add_rvalue_reference<int>::type>::value));
}


//template<bool> struct CompileTimeCheck
//{
//    CompileTimeCheck(...)
//    {}
//};
//
//template<> struct CompileTimeCheck<false>
//{
//};
//
//#define STATIC_CHECK(expr, msg) \
//{ \
//    class ERROR_##msg{}; \
//    sizeof(CompileTimeCheck<(expr)>((ERROR_##msg())));\
//}
//
//template<class To, class From>
//To safe_reinterpret_case(From from)
//{
//    {
//        class ERROR_Destination_Tpye_Too_Narrow{}; 
//        (void*)sizeof(CompileTimeCheck<(sizeof(From) < sizeof(To))>((ERROR_Destination_Tpye_Too_Narrow())));
//    };
//    return reinterpret_cast<To>(from);
//}
//
//
//TEST(TypeTraitsTestSuite, TypeTraitsTestSuiteTestCase2)
//{
//    void* somePointer = nullptr;
//    int64_t c = safe_reinterpret_case<int64_t>(somePointer);
//}


// 
// -------------------------------------------------------------------------------------------

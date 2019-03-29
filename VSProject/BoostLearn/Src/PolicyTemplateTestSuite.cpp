/*******************************************************************************************
 *  @file      PolicyTemplateTestSuite.cpp 2019\2\15 16:53:09 $
 *  @author    Wang Xiaotao<wangxiaotao1980@gmail.com> (÷–Œƒ±‡¬Î≤‚ ‘)
 *  @note      summary
 *******************************************************************************************/

#include <gtest/gtest.h>


class Dummy
{};


template<class T>
struct OpNewCreator
{
    static T* Create()
    {
        return new T;
    }
};

template<class T>
struct MallocCreator
{
    static T* Create()
    {
        void* buf = std::malloc(sizeof(T));
        if (!buf)
        {
            return nullptr;
        }

        return new(buf) T;
    }
};

template<class T>
struct PrototypeCreator
{
    PrototypeCreator(T* pObj = nullptr) 
        : m_pPrototype(pObj)
    {}
    
    T* Create()
    {
        return m_pPrototype ? m_pPrototype->clone() : nullptr;
    }

    T* GetPrototype()
    {
        return m_pPrototype;
    }

    void SetPrototype(T* pObj)
    {
        m_pPrototype = pObj;
    }

private:
    T* m_pPrototype;
};

template<class CreationPolicy>
class DummyManager0 : public CreationPolicy
{};

template<template<class Created> class CreationPolicy>
class DummyManager1 : public CreationPolicy<Dummy>
{};


template<template<class> class CreationPolicy>
class DummyManager2 : public CreationPolicy<Dummy>
{};

// ------------------------------------------------------------------------------------------
//
TEST(PolicyTemplateTestSuite, PolicyTemplateTestSuiteTestCase0)
{
    DummyManager0<OpNewCreator<Dummy>> obj00;
    DummyManager1<OpNewCreator>        obj01;
    DummyManager2<OpNewCreator>        obj02;


    DummyManager0<MallocCreator<Dummy>> obj10;
    DummyManager1<MallocCreator>        obj11;
    DummyManager2<MallocCreator>        obj12;
}

// 
// -------------------------------------------------------------------------------------------

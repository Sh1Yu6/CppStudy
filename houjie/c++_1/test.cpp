
/************************************************
#
#      Filename: test.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-09-12 11:06:39
# Last Modified: 2020-09-12 18:10:54
#***********************************************/
#include "test.h"
#include <cstring>
MyString::MyString(const char* cstr)
{
    if(cstr)
    {
        mData = new char[strlen(cstr)+1];
        strcpy(mData, cstr);
    }
    else
    {
        mData = new char[1];
        *mData = '\0';
    }
}

MyString::MyString(const MyString& str)
{
    mData = new char[strlen(str.mData)+1];
    strcpy(mData, str.mData);
}

MyString& MyString::operator=(const MyString& str)
{
    if(this == &str)
    {
        return *this;
    }

    delete [] mData;
    mData = new char[strlen(str.mData)+1];
    strcpy(mData, str.mData);
    return *this;
}

MyString::~MyString()
{
    delete [] mData;
}

char* MyString::getCStr() const 
{
    return mData;
}

std::ostream& operator<<(std::ostream& os, MyString& str)
{
    os << str.getCStr();
    return os;
}


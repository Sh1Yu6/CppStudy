
/************************************************
#
#      Filename: SpreadsheetCell.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-01 19:48:29
# Last Modified: 2020-06-03 21:03:00
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include "SpreadsheetCell.h"
using namespace std;

SpreadsheetCell::SpreadsheetCell(double initialValue)
{
    setValue(initialValue);
}


SpreadsheetCell::SpreadsheetCell(std::string_view initialString)
{
    setString(initialString);
}


SpreadsheetCell::SpreadsheetCell(const SpreadsheetCell& src): mValue(src.mValue)
{

}

SpreadsheetCell::SpreadsheetCell(std::initializer_list<double> args)
{

}
        
SpreadsheetCell& SpreadsheetCell::operator=(const SpreadsheetCell& rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    mValue = rhs.mValue;
    return *this;
}

void SpreadsheetCell::setValue(double inValue)
{
    ++mNumAccesses;
    mValue = inValue;
}

double SpreadsheetCell::getValue() const
{
    ++mNumAccesses;
    return mValue;
}

void SpreadsheetCell::setString(std::string_view inString)
{
    mValue = stringToDouble(inString);
}

std::string SpreadsheetCell::getString()
{
    return doubleToString(mValue);
}

std::string SpreadsheetCell::doubleToString(double inValue) const
{
    return to_string(mValue);
}

double SpreadsheetCell::stringToDouble(std::string_view inString) const
{
    return strtod(inString.data(), nullptr);
}















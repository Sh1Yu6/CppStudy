
/************************************************
#
#      Filename: DoubleSpreadsheetCell.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-05 19:32:11
# Last Modified: 2020-06-05 20:20:52
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include "DoubleSpreadsheetCell.h"
using namespace std;

void DoubleSpreadsheetCell::set(double inDouble)
{
    mValue = inDouble;
}
void DoubleSpreadsheetCell::set(std::string_view inString)
{
    mValue = stringToDouble(inString);
}
std::string DoubleSpreadsheetCell::getString() const
{
    return (mValue.has_value() ? doubleToString(mValue.value()) : "");
}
int main(int argc, char *argv[])
{

    return 0;
}

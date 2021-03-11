
/************************************************
#
#      Filename: StringSpreadsheetCell.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-05 19:24:27
# Last Modified: 2020-06-05 19:26:55
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include "StringSpreadsheetCell.h"
using namespace std;

void StringSpreadsheetCell::set(string_view inString)
{
    mValue = inString;
}

string StringSpreadsheetCell::getString() const
{
    return mValue.value_or("");
}


/************************************************
#
#      Filename: main.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-01 20:16:54
# Last Modified: 2020-06-01 20:29:26
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include "SpreadsheetCell.h"
#include <memory>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[])
{
    auto myCellp = make_unique<SpreadsheetCell>(1231);
    myCellp->setValue(12241123123);
    cout <<fixed<<myCellp->getValue() << " " << myCellp->getString() << endl;
    return 0;
}

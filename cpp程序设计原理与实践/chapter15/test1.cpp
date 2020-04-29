
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-26 20:25:24
# Last Modified: 2020-04-29 20:00:09
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

double* high(double* first, double* last)
{
    double h = -1;
    double* high;
    for(double* p = first; p != last; ++p)
    {
        if(h < *p)
        {
            high = p;
            h = *p;
        }
    }

    return high;
}
int main(int argc, char *argv[])
{


    return 0;
}

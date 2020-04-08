
/************************************************
#
#      Filename: test4.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-08 20:01:23
# Last Modified: 2020-04-08 20:05:21
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = 'a';
    std::cout << "Please enter a length followed by a unit (c or i):\n";
    std::cin >> length >> unit;

    switch (unit)
    {
        case 'i':
            std::cout << length << "in == " << cm_per_inch * length << "cm\n";
            break;
        case 'c':
            std::cout << length << "cm == " << cm_per_inch * length << "in\n";
            break;
        default:
            std::cout << "Sorry, I don't know a unit called '" << unit << "'\n";
            break;
    }
    return 0;
}

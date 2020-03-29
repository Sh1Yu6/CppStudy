
/************************************************
#
#      Filename: test12.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 21:11:49
# Last Modified: 2020-03-29 21:24:44
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    double d = 0;
    while(std::cin>>d)
    {
        double a{d};


        int i{d};
        int s{i};
        char c{i};
        int i2{c};
        std::cout << "d == " << d
                  << "\ni == " << i
                  << "\ni2 == " << i2
                  << "\nchar(" << c << ")\n";

    }
    return 0;
}

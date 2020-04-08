
/************************************************
#
#      Filename: tst6.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-08 20:18:55
# Last Modified: 2020-04-08 20:27:00
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    char c = 'a';
    for(int i = 0;i < 26;++i)
    {
        std::cout << c << '\t' << 0 + c << "\n";
        std::cout << char(c-32) << '\t' << c - 32 << "\n";
        ++c;
    }
    return 0;
}


/************************************************
#
#      Filename: tst6.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-08 20:18:55
# Last Modified: 2020-04-08 20:21:15
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    int i = 0;
    char c = 'a';
    while(i < 26)
    {
        std::cout << c << '\t' << 0 + c << '\n';
        ++c;
        ++i;
    }
    return 0;
}

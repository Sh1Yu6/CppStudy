
/************************************************
#
#      Filename: test5.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-08 20:12:09
# Last Modified: 2020-04-08 20:15:57
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    int i = 0;
    while (i < 100)
    {
        std::cout << i << '\t' << pow(i, 2) << "\n";
        ++i;
    }
    return 0;
}

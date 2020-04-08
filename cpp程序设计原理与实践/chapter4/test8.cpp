
/************************************************
#
#      Filename: test8.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-08 20:32:11
# Last Modified: 2020-04-08 20:37:53
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int my_square(int x)
{
    int result = 0;
    for(int i = 0; i < x; ++i)
    {
       result += x; 
    }
    return result;
}

int main(int argc, char *argv[])
{
    for(int i = 0; i < 100; ++i)
    {
        std::cout << i << "\t" << my_square(i) << "\n";
    }
    return 0;
}

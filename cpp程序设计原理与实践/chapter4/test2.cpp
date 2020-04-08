
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-08 19:47:42
# Last Modified: 2020-04-08 19:52:53
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    int a = 0; 
    int b = 0; 
    std::cout << "Please enter two integers\n";
    std::cin >> a >> b;
    if(a < b)
        std::cout << "max("<< a << "," << b <<  ")is" << b << "\n";
    else
        std::cout << "max("<< a << "," << b <<  ")is" << a << "\n";
    return 0;
}

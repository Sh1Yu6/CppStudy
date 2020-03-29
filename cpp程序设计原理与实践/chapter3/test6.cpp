
/************************************************
#
#      Filename: test6.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 20:05:29
# Last Modified: 2020-03-29 20:07:28
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    std::cout << "Please enter your first and second names\n";
    std::string first, second;
    std::cin >> first >> second;
    std::string name = first + ' ' + second;
    std::cout<< "Hello, " << name << '\n';
    return 0;
}

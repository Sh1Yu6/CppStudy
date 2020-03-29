
/************************************************
#
#      Filename: test7.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 20:11:16
# Last Modified: 2020-03-29 20:14:05
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    std::cout << "Please enter two names\n";
    std::string first, second;
    std::cin >> first >> second;
    if(first == second) 
        std::cout << "that's the same name twice\n";
    if(first < second)
        std::cout << first << "is alphabetically before " << second << '\n';
    if(first > second)
        std::cout << first << "is alphabetically after " << second << '\n';
    return 0;
}

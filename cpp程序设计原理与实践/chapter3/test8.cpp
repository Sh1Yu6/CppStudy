
/************************************************
#
#      Filename: test8.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 20:22:41
# Last Modified: 2020-03-29 20:25:37
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    std::string previous = "";
    std::string current;
    while(std::cin >> current)
    {
        if(previous == current)
            std::cout << "repeated word:" << current << '\n';
        previous = current;
    }
    return 0;
}


/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-19 19:45:55
# Last Modified: 2020-04-19 20:06:25
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <fstream>
int main(int argc, char *argv[])
{
    std::cout << "Please enter input file name:\n";
    std::string iname;
    std::cin >> iname;
    std::ifstream ist{iname};
    if(!ist)
        std::cout << "can't open input file " << iname << "\n";
    ist.close();

    return 0;
}

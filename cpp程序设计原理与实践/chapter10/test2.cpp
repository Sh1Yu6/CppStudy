
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-19 19:52:03
# Last Modified: 2020-04-19 19:58:34
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
    std::cout << "Please enter name of output file:\n";
    std::string oname;
    std::cin >> oname;

    std::ofstream ost{oname};
    if(!ost)
        std::cout << "can't open output file " << oname << "\n";
    ost << "Hello, World!\n"
        << "My name is xxx, and come from xxx\n";
    ost.close();
    return 0;
}

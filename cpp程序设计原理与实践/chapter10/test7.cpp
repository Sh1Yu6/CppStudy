
/************************************************
#
#      Filename:		test7.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-20 20:15:49
# Last Modified: 2020-04-21 20:16:34
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
    ist.exceptions(ist.exceptions() | std::ios_base::badbit);

    std::cout << "Please ent output file name:\n";
    std::string oname;
    std::cin >> oname;
    std::ofstream ost{oname};
    if(!ost)
        std::cout << "can't open output file " << oname << "\n";

    std::vector<int> n;
    while(true)
    {
        int a;
        if(!(ist >> a))
            break;
        n.push_back(a);
    }
    return 0;
}

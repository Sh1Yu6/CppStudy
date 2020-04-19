
/************************************************
#
#      Filename: test4.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-19 20:26:04
# Last Modified: 2020-04-19 20:32:59
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <fstream>

void fill_vector(std::istream& ist, std::vector<int>& v, char terminator)
{
    for(int i; ist >> i;)
        v.push_back(i);
    
    if(ist.eof())
        return;

    if(ist.bad())
    {
        std::cout << "cin bad\n";
        return;
    }       
    if(ist.fail())
    {
        
        std::cout << "cin fail\n";
        ist.clear();

        char c;
        ist >> c;
        if(c != terminator)
        {
            ist.unget();
            ist.clear(std::ios_base::failbit);
        }
    }

}

int main(int argc, char *argv[])
{
    std::vector<int> v;
    char terminator = '*';
    fill_vector(std::cin, v, terminator);
    return 0;
}

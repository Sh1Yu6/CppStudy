
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-19 20:10:06
# Last Modified: 2020-04-21 19:43:47
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <fstream>

struct Reading
{
    int hour;
    double temperature;
};


int main(int argc, char *argv[])
{
    std::cout << "Please enter input file name:\n";
    std::string iname;
    std::cin >> iname;
    std::ifstream ist{iname};
    if(!ist)
        std::cout << "can't open input file " << iname << std::endl;

    std::cout << "Please enter name of output file:\n";
    std::string oname;
    std::cin >> oname;
    std::ofstream ost{oname};
    if(!ost)
        std::cout << "can't open output file " << oname << std::endl;

    std::vector<Reading> temps;
    int hour;
    double temperature;
    while(ist >> hour >> temperature)
    {
        if(hour < 0 || hour > 23)
            std::cout << "hour out of range\n";
        temps.push_back(Reading{hour, temperature});
    }

    for(auto i = temps.begin(); i != temps.end(); ++i)
    {
        ost << '(' << i->hour << ',' << i->temperature << ')' << std::endl;
    }

    ist.close();
    ost.close();
    return 0;
}


/************************************************
#
#      Filename: test6.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-20 19:27:19
# Last Modified: 2020-04-20 20:10:22
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
    int day;
    int hour;
    double temperature;

};
std::istream& operator>>(std::istream& is, Reading& r)
{
    char ch1;
    if(is >> ch1 && ch1 != '(')
    {
        is.unget();
        is.clear(std::ios_base::failbit);
        return is;
    }
    
    char ch2;
    int d;
    int h;
    double t;
    is >> d >> h >> t >> ch2;
    if(!is || ch2 != ')')
    {
        std::cout << "Sorry, your input is failed\n";
    }
    r.day = d;
    r.hour = h;
    r.temperature = t;
    return is;
        
}


int main(int argc, char *argv[])
{
    Reading a;
    std::cin >> a;
    return 0;
}

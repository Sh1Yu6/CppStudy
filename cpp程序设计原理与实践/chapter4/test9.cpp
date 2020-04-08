
/************************************************
#
#      Filename: test9.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-08 20:48:19
# Last Modified: 2020-04-08 20:59:15
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    std::vector<double> temps;
    for(double temp; std::cin >> temp;)
    {
        temps.push_back(temp);
    }

    double sum = 0;
    for(double x: temps)
    {
        sum += x;
    }

    std::cout << "Average temperature: " << sum / temps.size() << "\n";


    sort(temps.begin(), temps.end());
    std::cout << "Median temperature:" << temps[temps.size()/2] << "\n";
    /*
     * while(std::cin >> temp)
     * {
     *  temps.push_back(temp);
     * }
     */

    return 0;
}

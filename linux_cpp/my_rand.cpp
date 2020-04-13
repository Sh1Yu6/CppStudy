
/************************************************
#
#      Filename: my_rand.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-13 20:34:43
# Last Modified: 2020-04-13 20:53:42
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include "my_rand.h"
#include <cstdlib>
#include <ctime>

int main()
{
    randomize();
    for(int i = 0; i < 10; ++i)
        std::cout << rand() << "\n";
}

void randomize()
{
    srand(static_cast<int>(time(NULL)));
}

int generate_random_number(int low, int high)
{
    double d;
    if(low > high)
    {
        std::cout << "generate_random_number: Make sure low <= high.\n";
        exit(1);
    }
    d = static_cast<double>(rand()) / (static_cast<double>(RAND_MAX) + 1.0);
    return low + static_cast<int>(d * (high - low +1));
}

double generate_random_real(double low, double high)
{
    double d;
    if(low > high)
    {
        std::cout << "generate_random_real: Make sure low <= high.\n";
        exit(1);
    }
    d = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
    return low + d * (high - low );
}



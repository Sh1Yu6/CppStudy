
/************************************************
#
#      Filename: is_prime.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-13 19:54:39
# Last Modified: 2020-04-22 14:47:12
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <cstdlib>

const int faile_in_testing_primality = 1;

bool is_prime(unsigned int n);

int main(int argc, char *argv[])
{
    std::cout << "The program get a integer, output true if it is primality,\n"
              << "or output false\n";
    unsigned int n;
    std::cin >> n;
    for(int i = n; i < 4000000000; ++i)
    {
        bool res = is_prime(i);
        if(res)
            std::cout << i << "\n";
    }
    return 0;
}

bool is_prime(unsigned int n)
{
    unsigned int i = 3;
    unsigned int t = sqrt(n) + 1;

    if(n <= 1)
    {
        std::cout << "ISPrime: Failed in testing the primality of " << n << "\n";
        exit(faile_in_testing_primality);
    }
    if(n == 2)
    {
        return true;
    }
    if(n % 2 == 0)
    {
        return false;
    }
    while(i <= t)
    {
        if(n % i == 0)
        {
            return false;
        }
        i += 2;
    }
    return true;
}

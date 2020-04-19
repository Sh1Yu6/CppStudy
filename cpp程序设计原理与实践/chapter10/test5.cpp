
/************************************************
#
#      Filename: test5.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-19 21:33:25
# Last Modified: 2020-04-19 21:37:10
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
    std::cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
    int n = 0;
    while(std::cin >> n)
    {
        if(1 <= n && n <= 10)
            break;
        std::cout << "Sorry " << n << " is not in the [1:10] range;"
                                   << " Please try again\n";
    }

    /* 
     *  while(std::cin >> n && !(1<=n && n <= 10))
     *  {
     *      std::cout << xxxxxxxxxxxxxxxx;
     *  }
     *
     *
     */
    return 0;
}

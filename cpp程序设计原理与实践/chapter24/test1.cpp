
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-06 19:03:57
# Last Modified: 2020-05-06 19:22:35
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <iomanip>

void func(int *a)
{
    for(int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            std::cout << a[i*10+j];
        }
        std::cout << "\n";
    }
}
int main(int argc, char *argv[])
{
   int a[10][10] = {0}; 
   std::cout << sizeof(a) << "\n";
   func(*a);
    return 0;
}

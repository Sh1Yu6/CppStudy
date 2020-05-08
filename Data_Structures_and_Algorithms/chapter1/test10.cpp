
/************************************************
#
#      Filename: test10.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-08 20:04:42
# Last Modified: 2020-05-08 20:11:19
#***********************************************/
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename T>
T sum(T a[], int n)
{
    return std::accumulate(a, a+n,0);
}
int main(int argc, char *argv[])
{

    int a[] = {1, 2, 3, 4, 5};
    auto re = std::accumulate(a, a+5, 1, std::multiplies<int>());
    
    
    std::cout <<  re << "\n";
    return 0;
}

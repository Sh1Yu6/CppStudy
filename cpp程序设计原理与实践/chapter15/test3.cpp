
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-29 20:13:27
# Last Modified: 2020-04-29 20:25:11
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename Iterator>
Iterator high(Iterator first, Iterator last)
{
    Iterator high = first;
    for(Iterator p = first; p != last; ++p)
    {
        if(*high < *p)
        {
            high = p;
        }
    }

    return high;
}

int main(int argc, char *argv[])
{

    int a[] = {1, 2, 3, 10, 5, 6, 7, 8};
    auto i = high(a, a+8);
    std::cout << *i << std::endl;

    return 0;
}

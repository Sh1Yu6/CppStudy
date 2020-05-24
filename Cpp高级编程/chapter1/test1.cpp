
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-24 22:06:55
# Last Modified: 2020-05-24 22:23:26
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>

auto func(int i)
{
    return i;
}

int main(int argc, char *argv[])
{
    std::array<int, 10> arr = {1, 2, 3, 4};
    std::cout << arr.size() << std::endl;
    for(auto i: arr)
    {
        std::cout << i << std::endl;
    }


    return 0;
}


/************************************************
#
#      Filename: test11.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-08 20:29:27
# Last Modified: 2020-05-08 20:31:50
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
int main(int argc, char *argv[])
{

    int a[] = {1, 2, 3, 4, 5};
    auto r = std::count(a, a+5, 1);
    std::cout << r << "\n";
    return 0;
}

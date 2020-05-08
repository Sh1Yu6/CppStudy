
/************************************************
#
#      Filename: test12.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-08 20:15:05
# Last Modified: 2020-05-08 20:28:09
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <iterator>

int main(int argc, char *argv[])
{

    char a[] = "edcba";
    std::sort(a, a+5);
    do
    {
        std::copy(a, a+5, std::ostream_iterator<char>(std::cout, ""));
        std::cout << "\n";
    }while(std::next_permutation(a, a+5));
    return 0;
}

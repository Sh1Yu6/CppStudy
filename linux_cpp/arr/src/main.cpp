
/************************************************
#
#      Filename: main.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-15 20:26:19
# Last Modified: 2020-04-15 20:29:15
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include "arrmanip.h"

const int NUMBER_OF_ELEMENTS = 8;
const int lower_bound = 10;
const int upper_bound = 99;

int main(int argc, char *argv[])
{
    int a[NUMBER_OF_ELEMENTS];
    generate_integers(a, NUMBER_OF_ELEMENTS, lower_bound, upper_bound);
    std::cout << "Array generated at random as follows:\n";
    print_integers(a, NUMBER_OF_ELEMENTS);
    reverse_integers(a, NUMBER_OF_ELEMENTS);
    std::cout << "After all elements of the array reversed:\n";
    print_integers(a, NUMBER_OF_ELEMENTS);

    return 0;
}

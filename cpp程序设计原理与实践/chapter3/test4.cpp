
/************************************************
#
#      Filename: test4.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 19:47:32
# Last Modified: 2020-03-29 19:58:19
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    std::cout << "Please enter a floating-point value:\n";
    double n;
    std::cin >> n;
    std::cout << "n == " << n
              << "\nn+1 == " << n + 1
              << "\nthree times n == " << 3 * n
              << "\ntwice n == " << n + n
              << "\nn squared == " << n * n
              << "\nhalf of n == " << n / 2
              << "\nsquare root of n == " << sqrt(n)
              << '\n';
    return 0;
}

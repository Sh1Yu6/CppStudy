
/************************************************
#
#      Filename: test5.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 20:02:22
# Last Modified: 2020-03-29 20:03:05
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    int a, b;
    std::cin >> a >> b;
    std::cout << "result:" << a / b * a + a % b << std::endl;
    return 0;
}

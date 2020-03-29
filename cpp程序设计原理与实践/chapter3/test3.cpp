
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 19:41:27
# Last Modified: 2020-03-29 19:45:13
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(int argc, char *argv[])
{
    std::cout << "Please enter your name and age\n";
    std::string name;
    double age;
    std::cin >> name >> age;
    std::cout << "Hello, " << name << "(age:" << age * 12 << " month)\n";
    return 0;
}

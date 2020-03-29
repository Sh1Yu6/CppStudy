
/************************************************
#
#      Filename: test14.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 22:47:24
# Last Modified: 2020-03-29 22:54:17
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    std::cout << "Enter a operator:\n";
    std::string oper = "";
    std::cin >> oper;
    std::cout << "Enter two numbers:\n";
    int num1, num2;
    std::cin >> num1 >> num2;
    if("+" == oper)
    {
        std::cout << "num1 + num2 = " << num1 + num2;
    }
    if("-" == oper)
    {
        std::cout << "num1 - num2 = " << num1 - num2;
    }
    if("*" == oper)
    {
        std::cout << "num1 * num2 = " << num1 * num2;
    }
    if("/" == oper)
    {
        std::cout << "num1 / num2 = " << num1 / num2;
    }
    std::cout << '\n'; 
    return 0;
}


/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-09 21:01:28
# Last Modified: 2020-04-09 22:17:27
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
int main(int argc, char *argv[])
{
    std::cout << "Please enter expression (we can handle +, -, *, and /):\n";
    std::cout << "add an x to end expression (e.g., 1+2*3x):\n";
    int lval = 0;
    int rval = 0;
    std::cin >> lval;
    if(!std::cin)
        std::cerr << "no first operand\n";

    for(char op; std::cin >> op;)
    {
        if(op!='x')
            std::cin >> rval;
        if(!std::cin)
            std::cerr << "no second operand\n";
        switch(op)
        {
            case '+':
                lval += rval;
                break;
            case '-':
                lval -= rval;
                break;
            case '*':
                lval *= rval;
                break;
            case '/':
                lval /= rval;
                break;
            default:
                std::cout << "Result: " << lval << "\n";
                return 0;
        }
    }

    std::cerr << "Bad expression.\n";
    return 1;
}

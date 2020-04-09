
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-09 21:01:28
# Last Modified: 2020-04-09 22:03:03
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
int main(int argc, char *argv[])
{
    std::cout << "Please enter expression (we can handle + and -):\n";
    int lval = 0;
    int rval = 0;
    char op;
    int res;
    std::cin >> lval >> op >> rval;

    if(op == '+')
    {
        res = lval + rval;
    }
    else 
    {
        res = lval - rval;
    }
    
    std::cout << "Result:" << res << "\n";
    
    return 0;
}

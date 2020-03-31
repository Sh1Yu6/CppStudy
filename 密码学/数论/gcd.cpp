
/************************************************
#
#      Filename: 欧几里得算法.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-31 09:53:56
# Last Modified: 2020-03-31 10:05:52
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
void my_swap(int &a, int &b)
{
    if(a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
}

int my_gcd(int a, int b)
{
    my_swap(a, b);    
    while(a % b)
    {
        a = a / b;
        b = a % b;
    }       
    return b;
}

int main(int argc, char *argv[])
{
    std::cout << "Enter tow numbers:\n";
    int a, b;
    std::cin >> a >> b;
    
    int result = my_gcd(a, b);
    std::cout << "gcd(" << a << "," << b << ") = " << result << '\n';
    return 0;
}

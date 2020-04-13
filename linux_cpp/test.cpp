
/************************************************
#
#      Filename: test.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-12 22:37:43
# Last Modified: 2020-04-13 19:53:38
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <iomanip>
enum MONTH{JAN = 1, FEB, MAR, APR, MAY, JUN, JUlY,AUG, SEP, OCT, NOV, DEC};    
    
MONTH month = JAN;     


typedef int DWORD;

int main(int argc, char *argv[])
{
    std::cout << "\n";    
    std::cout << "The program gets a number.\n";    
    std::cout << "If it is an even, output it directly.\n";    
    std::cout << "otherwise multiply it by 3 then then plus 1.\n";    
    std::cout << "The number:\n";    
    std::cout << "\n";    

      
    std::cout << "The program gets a date( 1-31 ). and prints a calendar.\n";    
    std::cout << "The date:\n";    
    std::cout << "\n";    

    
    std::cout << "The program gets some integers, and output their sum\n";    
    std::cout << "To stop, please input 0.\n";    
    std::cout << "\n";    


    std::cout << "The program gets a positive integer,\n";    
    std::cout << "and prints the squared sum from 1 to the number\n";    
    std::cout << "The number:\n";    


    std::cout << "Nine-by-nine Mutiplication Table\n";    
    std::cout << "\n";    


    std::cout << "The program gets two integers, and prints their sum.\n";    
    std::cout << "\n";    

    
    std::cout << "\n";    
   















































    return 0;
}


unsigned int getFactorial(ungigned int n)
{
    unsigned int result;
    if(n == 1)
        return 1;
    else
        return n * getFactorial(n-1);
}

unsigned int getFibonacci(unsigned int n)
{
    if(n == 1 || n == 2)
        return 1;
    else
        return getFibonacci(n-1) + getFibonacci(n-2);
}



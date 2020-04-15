
/************************************************
#
#      Filename: arrmanip.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-15 20:25:33
# Last Modified: 2020-04-15 20:41:17
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include "arrmanip.h"
#include <ctime>
#include <cstdlib>
#include <iomanip>
using std::cin;
using std::cout;


void generate_integers(int a[], unsigned int n, int lower, int upper)
{
    srand(static_cast<int>(time(NULL)));
    for(unsigned int i = 0; i < n; ++i)
    {
        a[i] = rand() % upper + lower;
    }
}

void reverse_integers(int a[], unsigned int n)
{
    for(unsigned int i = 0; i < n / 2; ++i)
    {
        swap_integers(a, i, n-i-1);
    }
}

void swap_integers(int a[], unsigned int i, unsigned int j)
{
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

void print_integers(int a[], unsigned int n)
{
    for(unsigned int i = 0; i < n; ++i)
    {
        cout << std::setw(3) << a[i];
    }
    cout << "\n";
}

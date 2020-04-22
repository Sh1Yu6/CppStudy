
/************************************************
#
#      Filename: HanoiToChar.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-13 19:35:31
# Last Modified: 2020-04-22 14:50:25
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <iomanip>

typedef enum {X, Y, Z} HANOI;

void print_welcome_info();

unsigned int get_integer();

void move_hanoi(unsigned int n, HANOI from, HANOI tmp, HANOI to);

char convert_hanoi_to_char(HANOI x);

void move_plate(unsigned int n, HANOI from, HANOI to);


int main(int argc, char *argv[])
{
    unsigned int n;
    print_welcome_info();
    n = get_integer();
    move_hanoi(n, X, Y, Z);
    return 0;
}


void print_welcome_info()
{
    std::cout << "The program shows the moving process of Hanoi Tower.\n"; 
}

unsigned int get_integer()
{
    unsigned int t;
    std::cout << "Input number of plates:\n";
    std::cin >> t;
    return t;
}
void move_hanoi(unsigned int n, HANOI from, HANOI tmp, HANOI to)
{
    if(n == 1)
        move_plate(n, from, to);
    else
    {
        move_hanoi(n-1, from, to, tmp);
        move_plate(n, from, to);
        move_hanoi(n-1, tmp, from, to);
    }
}

char convert_hanoi_to_char(HANOI x)
{
    switch(x)
    {
    case X: return 'X';
    case Y: return 'Y';
    case Z: return 'Z';
    default: return 0;
    }
}

void move_plate(unsigned int n, HANOI from, HANOI to)
{
    char fc, tc;
    fc = convert_hanoi_to_char(from);
    tc = convert_hanoi_to_char(to);
    std::cout << n << ": " << fc << " --> " << tc << "\n";
}

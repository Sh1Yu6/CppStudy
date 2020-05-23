
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-23 20:29:20
# Last Modified: 2020-05-23 21:23:55
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>


template<typename T>
void ChangeLength(T*& arr, int old_length, int new_length)
{
    if(new_length < 0)
    {
        std::cerr << "some thing worry, exit\n" << std::endl;
        exit(1);
    }

    T* temp = new T[new_length];
    int number = std::min(old_length, new_length);
    std::copy(arr, arr + number, temp);
    delete [] arr;
    arr = temp;
    
}
int main(int argc, char *argv[])
{

    return 0;
}

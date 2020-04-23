
/************************************************
#
#      Filename: my_vector1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-22 21:27:27
# Last Modified: 2020-04-23 20:24:12
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

class vector
{
public:

    vector(int s): sz{s}, elem{new double[s]}
    {
        for(int i = 0; i < s; ++i)
            elem[i] = 0;
    }

    ~vector()
    {
        delete [] elem;
    }

    int size() const
    {
        return sz;
    }

private:
    int sz;
    double* elem;
};































int main(int argc, char *argv[])
{

    std::cout << "the size of bool is " << sizeof(bool) << "\n";
    std::cout << "the size of int is " << sizeof(int) << "\n";
    std::cout << "the size of int* is " << sizeof(int*) << "\n";
    std::cout << "the size of double is " << sizeof(double) << "\n";
    std::cout << "the size of long is " << sizeof(long) << "\n";
    std::cout << "the size of float is " << sizeof(float) << "\n";
    














    return 0;
}

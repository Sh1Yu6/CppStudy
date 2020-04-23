
/************************************************
#
#      Filename: my_vector1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-22 21:27:27
# Last Modified: 2020-04-23 20:46:24
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

    double get(int n) const
    {
        return elem[n];
    }

    void set(int n, double v)
    {
        elem[n] = v;
    }

    int size() const
    {
        return sz;
    }

private:
    int sz;
    double* elem;
};



#ifndef NDEBUG

int main(int argc, char *argv[])
{

    vector v(5);
    for(int i = 0; i < v.size(); ++i)
    {
        v.set(i, 1.1*i);
        std::cout << v.get(i) << "\n";
    }



    return 0;
}
#endif

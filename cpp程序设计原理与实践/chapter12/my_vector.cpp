
/************************************************
#
#      Filename: my_vector1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-22 21:27:27
# Last Modified: 2020-04-22 21:39:25
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

    vector(int s);

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

    int x = 17;
    int* pi = &x;

    double e = 2.71828;
    double* pd = &e;

    std::cout << pi << "  " << *pi << std::endl;
    std::cout << pd << "  " << *pd << std::endl;















    return 0;
}

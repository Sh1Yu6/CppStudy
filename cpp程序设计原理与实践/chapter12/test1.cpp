
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-23 20:17:08
# Last Modified: 2020-04-23 20:42:17
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

class A
{
public:
    A()
    {
        std::cout << "基类构造\n";
    }
    
    ~A()
    {
        std::cout << "基类析构\n";
    }
private:
};

class B:A
{
public:
    B()
    {
        std::cout << "派生构造\n";
    }

    ~B()
    {
        std::cout << "paisheng xigou\n";
    }
};
int main(int argc, char *argv[])
{


    return 0;
}

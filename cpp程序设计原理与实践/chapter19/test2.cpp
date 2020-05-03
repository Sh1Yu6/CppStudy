
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-03 21:02:18
# Last Modified: 2020-05-03 21:12:43
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
    void func()
    {
        std::cout << "a public\n";
    }
protected:
    void func1()
    {
        std::cout << "a protected\n";
    }
};

class B:A
{
public:
    void func2()
    {
        std::cout << "b\n";
        func1();
        func();
    }
};
int main(int argc, char *argv[])
{
    B b;
    b.func2();
    return 0;
}

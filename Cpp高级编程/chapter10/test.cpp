
/************************************************
#
#      Filename: test.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-04 20:26:09
# Last Modified: 2020-06-04 21:37:35
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout << "This is Base()\n";
        }
       virtual ~Base()
        {
            cout << "This is ~Base()\n";
        }
};

class Derived: public Base
{
    public:
        Derived()
        {
            cout << "This is Derived()\n";
        }
        virtual ~Derived() override
        {
            cout << "This is ~Dervied()\n";
        }
};
int main(int argc, char *argv[])
{

    Base* ptr = new Derived;
    delete ptr;
    return 0;
}


/************************************************
#
#      Filename: main.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-09-12 17:25:12
# Last Modified: 2020-09-17 11:47:52
#***********************************************/
#include <iostream>
using namespace std;
class A
{
    public:
        void func1()
        {
            cout << "1" << endl;
            func2();
        }

        virtual void func2()
        {
            cout << "2" << endl;
        }
};

class B: public A
{
    public:
        void func2()
        {
            cout << "A" << endl;
        }
};
int main(int argc, char *argv[])
{
    A a;
    a.func1();
    a.func2();
    B b;
    b.func1();

    A c = (A)b;
    c.func1();
    return 0;
}


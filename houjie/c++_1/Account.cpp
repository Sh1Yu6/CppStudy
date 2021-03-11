
/************************************************
#
#      Filename: Account.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-09-12 20:09:28
# Last Modified: 2020-09-12 20:18:50
#***********************************************/
#include <iostream>
using namespace std;

class Account
{
    public:
        static double mRate;
        static void setRate(const double& x)
        {
            mRate = x;
        }
};

double Account::mRate = 8.0;

class A
{
    public:
        static A& getInstance();

    private:
        A();
        A(const A& rhs);
};

A& A::getInstance()
{
    static A a;
    return a;
}

int main(int argc, char *argv[])
{
    return 0;
}


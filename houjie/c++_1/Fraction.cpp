
/************************************************
#
#      Filename: Fraction.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-09-14 14:50:16
# Last Modified: 2020-09-15 10:05:46
#***********************************************/
#include <iostream>
using namespace std;

class Fraction
{
    public:
        Fraction(int num, int den = 1): mNumerator(num), mDenomminator(den){}
        operator double() const
        {
            return static_cast<double>(static_cast<double>(mNumerator) / mDenomminator);
        }
    private:
        int mNumerator;
        int mDenomminator;
};

int main(int argc, char *argv[])
{
    Fraction a(5, 7);
    cout << a << endl; 
    return 0;
}


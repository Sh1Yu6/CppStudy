
/************************************************
#
#      Filename: circle.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-10 21:42:23
# Last Modified: 2020-06-10 21:57:07
#***********************************************/
#include <iostream>
using namespace std;

const int kPi = 3.14;
class Circle
{
    public:
        double calculateZc()
        {
            return 2 * kPi * mR;
        }

    private:
        int mR;
};
int main(int argc, char *argv[])
{
    return 0;
}


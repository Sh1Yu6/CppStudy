
/************************************************
#
#      Filename: test.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-31 19:57:32
# Last Modified: 2020-05-31 20:14:33
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void func(int** a)
{
    for(int row = 0; row < 10; ++row)
    {
        for(int col = 0; col < 10; ++col)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
}
int main(int argc, char *argv[])
{
    int** b = new int*[10];
    for(int row = 0; row < 10; ++row)
    {
        b[row] = new int[10];
    }
    func(b);
    for(int row = 0; row < 10; ++row)
    {
        delete [] b[row];
    }
    delete [] b;

    return 0;
}

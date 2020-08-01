
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-07-19 20:09:41
# Last Modified: 2020-07-19 20:18:41
#***********************************************/
#include <iostream>
using namespace std;

void printOut(int n)
{
    if(n >= 10)
        printOut(n / 10);
    cout << n % 10;
}
int main(int argc, char *argv[])
{
    printOut(74321);
    cout << endl;
    return 0;
}


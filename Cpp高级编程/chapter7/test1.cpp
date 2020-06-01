
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-31 20:27:34
# Last Modified: 2020-05-31 21:38:14
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <memory>
using namespace std;
int main(int argc, char *argv[])
{
    auto a = make_unique<int>();
    *a = 100;
    cout << *a << endl;
    return 0;
}

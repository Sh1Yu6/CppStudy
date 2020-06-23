
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-21 20:07:06
# Last Modified: 2020-06-22 21:09:38
#***********************************************/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void print(int num)
{
    cout << num << endl;
}

int main(int argc, char *argv[])
{
    vector<int> v{1, 2, 3, 10, 454, 5};
    sort(v.begin(), v.end());
    for_each(v.begin(), v.end(), print);


    return 0;
}


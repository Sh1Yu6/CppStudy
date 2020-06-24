
/************************************************
#
#      Filename: test5.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-24 19:31:03
# Last Modified: 2020-06-24 20:42:26
#***********************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;
class AA
{
    public:
        bool operator()(int a)
        {
            return a > 5;
        }
};
int main(int argc, char *argv[])
{
    cout << plus<int>()(1, 2) << endl;
    return 0;
}


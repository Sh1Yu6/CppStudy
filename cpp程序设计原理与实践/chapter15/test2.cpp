
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-29 20:00:16
# Last Modified: 2020-04-29 20:05:41
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
int main(int argc, char *argv[])
{

    std::vector<int> v{1, 2, 3, 4, 5};
    for(auto i = v.begin(); i != v.end(); ++i)
        std::cout << *i << "\n";
    return 0;
}

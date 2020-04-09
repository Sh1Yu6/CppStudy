
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-08 22:19:52
# Last Modified: 2020-04-09 20:13:50
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
int main(int argc, char *argv[])
{
    try
    {
        std::vector<int> v;
        for(int x; std::cin >> x;)
        {
            v.push_back(x);
        }
        for(int i = 0; i <= v.size(); ++i)
        {
            std::cout << "v[" << i << "]==" << v.at(i) << "\n";
        }
    }
    catch(std::out_of_range)
    {
        std::cerr << "Oops! Range error\n";
        return 1;
    }
    catch(...)
    {
        std::cerr << "Exception: something went wrong\n";
        return 2;
    }
    return 0;
}

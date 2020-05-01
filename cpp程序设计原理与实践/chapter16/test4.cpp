
/************************************************
#
#      Filename: test4.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-01 22:11:32
# Last Modified: 2020-05-01 22:12:21
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename In, typename Out>
Out copy(In first, In last, Out res)
{
    while(first != last)
    {
        *res = *first;
        ++res;
        ++first;
    }
    return res;
}
int main(int argc, char *argv[])
{

    return 0;
}

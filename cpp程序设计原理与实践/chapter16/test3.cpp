
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-01 21:23:57
# Last Modified: 2020-05-01 21:52:31
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename In, typename In2, typename T>
T inner_product(In first, In last, In2 first2, T init)
{
    while(first != last)
    {
        init = init + (*first) * (*first2);
        ++first;
        ++first2;
    }
}

template<typename In, typename In2, typename T, typename BinOp, typename BinOp2>
T inner_product(In first, In last, In2 first2, T init, BinOp op, BinOp2 op2)
{
    while(first != last)
    {
        init = op(init, op2(*first, *first2));
        ++first;
        ++first2;
    }
    return init;
}

template<typename T1, typename T2>
struct pair
{
    using first_type = T1;
    using second_type = T2;

    T1 first;
    T2 second;
};

template<typename T1, typename T2>
pair<T1, T2> make_pair(T1 x, T2 y)
{
    return {x, y};
}
int main(int argc, char *argv[])
{

    return 0;
}

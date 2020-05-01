
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-01 21:07:46
# Last Modified: 2020-05-01 21:22:11
#***********************************************/
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename In, typename T>
T accumulate_1(In first, In last, T init = 0)
{
    while(first != last)
    {
        init = init + *first;
        ++first;
    }
    return init;
}

template<typename In, typename T, typename BinOp>
T accumulate_1(In first, In last, T init, BinOp op)
{
    while(first != last)
    {
        init = op(init, *first);
        ++first;
    }
    return init;
}

class A
{
public:
    A(double p, int u): unit_price{p}, units{u}{}
    double operator()(double v, const A& r)
    {
        return v + r.unit_price * r.units;
    }
private:
    double unit_price;
    int units;
};
int main(int argc, char *argv[])
{
    std::vector<int> v{1, 2, 3, 4, 5};

    auto q = accumulate(v.begin(), v.end(), 1, std::multiplies<int>());
    std::cout << q << "\n";
    return 0;
}

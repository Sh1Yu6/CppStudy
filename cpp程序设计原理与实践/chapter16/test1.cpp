
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-01 19:53:41
# Last Modified: 2020-05-01 20:19:55
#***********************************************/
#include <cstdlib>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename In, typename T>
In find(In first, In last, const T& val)
{
    while(first != last && *first != val)
        ++first;
    return first;
}

template<typename In, typename Pred>
In find_ifa(In first, In last, Pred pred)
{
    while(first != last && !pred(*first))
        ++first;
    return first;
}

bool odd(int x)
{
    return x % 2;
}

class Larger_than
{
public:
    Larger_than(int vv): v(vv){}
    bool operator()(int x) const
    {
        return x > v;
    }
private:
    int v;
};
int main(int argc, char *argv[])
{

    std::vector<int> v{2, 2, 4, 6, 8, 3, 5};
    int i = 10;
    auto x = accumulate(v.begin(), v.end(), i);
    std::cout << x << "\n";

    auto x2 = find_ifa(v.begin(), v.end(), odd);
    std::cout << *x2 << "\n";
    return 0;
}

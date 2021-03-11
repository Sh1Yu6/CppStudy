
/************************************************
#
#      Filename: test.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-09-21 14:40:31
# Last Modified: 2020-09-22 08:55:53
#***********************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
struct functors
{
    functors(std::ostream& os): ost{os}{}

    void operator()(const T& x)
    {
        ost << x << " ";
    }

    std::ostream& ost;
};
int main(int argc, char *argv[])
{
    vector<int> a{1, 2, 3, 45, 6};

    functors<int> b(std::cout);
    for_each(a.begin(), a.end(), b);

    return 0;
}


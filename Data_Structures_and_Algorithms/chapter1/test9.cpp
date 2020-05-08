
/************************************************
#
#      Filename: test9.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-08 19:49:29
# Last Modified: 2020-05-08 19:56:28
#***********************************************/
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename T>
void Permutations(T list[], int k, int m)
{
    if(k == m)
    {
        std::copy(list, list+m+1, std::ostream_iterator<T>(std::cout, ""));
        std::cout << "\n";
    }
    else
    {
        for(int i = k; i <= m; ++i)
        {
            std::swap(list[k], list[i]);
            Permutations(list, k+1, m);
            std::swap(list[k], list[i]);
        }
    }
}
int main(int argc, char *argv[])
{
    char s[] = "abcd";
    
    Permutations(s, 0, 3);
    return 0;
}

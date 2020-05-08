
/************************************************
#
#      Filename: test7.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-08 19:14:10
# Last Modified: 2020-05-08 19:26:25
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include "test6.h"
int main(int argc, char *argv[])
{
    Currency g;
    Currency h(kPlus, 3, 50);
    Currency i;
    Currency j;

    g.SetValue(kMinus, 2, 25);
    i.SetValue(-6.45);

    j = h.Add(g);
    h.OutPut();
    std::cout << "+";
    g.OutPut();
    std::cout << "=";
    j.OutPut();
    std::cout << std::endl;


    j = i.Add(g).Add(h);
    j.OutPut();
    std::cout << "\n";

    j = i.Increment(g).Add(h);
    j.OutPut();
    std::cout << "\n";

    return 0;
}

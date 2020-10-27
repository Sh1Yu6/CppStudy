
/************************************************
#
#      Filename: hei.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-09-13 10:27:38
# Last Modified: 2020-09-15 12:43:42
#***********************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(){}

template<typename T, typename ... Types>
void print(const T& firstArg, const Types&... args)
{
    cout << firstArg << endl;
    print(args...);
}

int main(int argc, char *argv[])
{

    int a[] = {1, 2, 3, 45, 6, 6};
    cout << sizeof(a) << endl;
    int* b = a;
    cout << sizeof(b) << endl;
    auto& c = a;
    

    cout << typeid(c).name() << endl;
    cout << typeid(4).name() << endl;

    return 0;
}


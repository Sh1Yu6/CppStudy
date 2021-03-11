
/************************************************
#
#      Filename: test.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-10-07 08:44:16
# Last Modified: 2020-10-09 09:53:08
#***********************************************/
#include <iostream>
#include <algorithm>
#include <initializer_list>
#include <map>
#include <typeinfo>
#include <vector>

using namespace std;


void func(){}

template<typename T, typename... Types>
void func(const T& firstArg, const Types&... args)
{
    cout << firstArg << endl;
    cout << typeid(firstArg).name() << endl;
    cout << sizeof...(args) << endl;
    func(args...);
}

int main(int argc, char *argv[])
{

    vector<int> a{12, 3, 5, 6, 323, 342, 43, 34, 45 ,565, 777};
    sort(a.begin(), a.end(), [](int a, int b){
                return a > b;
            });
    for(auto& i: a)
    {
        cout << i << endl;
    }
    
    return 0;
}


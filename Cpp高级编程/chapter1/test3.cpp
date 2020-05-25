
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-25 20:01:36
# Last Modified: 2020-05-25 20:04:44
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    vector<string> my_vector = {"A first string", "A second string"};
    my_vector.push_back("A third string");
    my_vector.push_back("The last string in the vector");

    for(const auto& str: my_vector)
    {
        cout << str << endl;
    }

    for(auto iterator = rbegin(my_vector); iterator != rend(my_vector); ++iterator)
    {
        cout << *iterator << endl;
    }

    return 0;
}


/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-28 19:04:39
# Last Modified: 2020-05-28 19:50:21
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <stdexcept>
using namespace std;

char* copyString(const char* str)
{
    char* result = new char[strlen(str)+1];
    strcpy(result, str);
    throw runtime_error("a");
    return result;
}
int main(int argc, char *argv[])
{

    string a = "asdfasfasdfasdf";
    string b;
    cout << strlen(a.c_str()) << endl;
    return 0;
}

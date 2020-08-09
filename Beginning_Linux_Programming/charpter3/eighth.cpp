
/************************************************
#
#      Filename: eighth.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-08 16:20:06
# Last Modified: 2020-08-08 16:21:10
#***********************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

extern char **environ;

int main(int argc, char *argv[])
{
    char** env = environ;
    while(*env)
    {
        cout << *env << endl;
        ++env;

    }
    return 0;
}



/************************************************
#
#      Filename: first.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-01 14:31:25
# Last Modified: 2020-08-01 14:39:42
#***********************************************/
#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    char buffer[128];

    int nRead = read(0,buffer, 128);

    cout << buffer << endl;
    return 0;
}


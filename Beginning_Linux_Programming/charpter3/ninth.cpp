
/************************************************
#
#      Filename: ninth.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-08 16:23:19
# Last Modified: 2020-08-08 16:27:01
#***********************************************/
#include <iostream>
#include <ctime>
#include <unistd.h>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
    for(int i = 1; i <= 10; ++i)
    {
        time_t theTime = time(NULL);
        cout << "The time is " << theTime << endl;
        sleep(2);
    }

    return 0;
}


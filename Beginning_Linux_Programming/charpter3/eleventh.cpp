
/************************************************
#
#      Filename: eleventh.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-09 14:41:02
# Last Modified: 2020-08-09 14:51:42
#***********************************************/
#include <iostream>
#include <sys/utsname.h>
#include <sys/types.h>
#include <unistd.h>
#include <cstdlib>
#include <cstdio>

using namespace std;
int main(int argc, char *argv[])
{
    char computer[256];

    struct utsname uts;
    if(gethostname(computer, 255) != 0 || uname(&uts) < 0)
    {
        cout << "Could not get host information" << endl;
        exit(1);
    }

    cout << "Computer host name is " << computer << endl;
    cout << "System is " << uts.sysname << " on "<< uts.machine << " hardware" << endl;
    cout << "Nodename is " << uts.nodename << endl;
    cout << "Version is " << uts.release << ", " << uts.version << endl;

    
    return 0;
}


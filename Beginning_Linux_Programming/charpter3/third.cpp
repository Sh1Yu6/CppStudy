
/************************************************
#
#      Filename: third.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-01 14:58:07
# Last Modified: 2020-08-01 15:03:59
#***********************************************/
#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
using namespace std;

int main(int argc, char *argv[])
{
    char block[1024];
    
    int in = open("hello.in", O_RDONLY);
    int out = open("hello.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);

    int nRead = 0;
    while((nRead = read(in, block, 1024)))
    {
        write(out, block, nRead);
    }
    return 0;
}


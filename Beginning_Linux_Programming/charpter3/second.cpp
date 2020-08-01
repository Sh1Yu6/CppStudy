
/************************************************
#
#      Filename: second.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-01 14:40:15
# Last Modified: 2020-08-01 14:55:53
#***********************************************/
#include <iostream>
#include <string>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
using namespace std;
int main(int argc, char *argv[])
{
    
    char c;

    int in = open("hello.in", O_RDONLY);
    int out = open("hello.out", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

    while(read(in, &c, 1) == 1)
    {
        write(out, &c, 1);
    }
    return 0;
}


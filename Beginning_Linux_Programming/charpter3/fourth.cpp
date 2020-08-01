
/************************************************
#
#      Filename: fourth.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-01 15:27:54
# Last Modified: 2020-08-01 15:41:32
#***********************************************/
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
    int c;
    FILE *in = fopen("hello.in", "r");
    FILE *out = fopen("hei.out", "w");

    while((c = fgetc(in)) != EOF)
        fputc(c, out);
    return 0;
}


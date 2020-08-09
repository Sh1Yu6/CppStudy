
/************************************************
#
#      Filename: fifth.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-01 16:02:14
# Last Modified: 2020-08-01 16:54:54
#***********************************************/
#include <iostream>
#include <unistd.h>
#include <cstdio>
#include <dirent.h>
#include <string>
#include <string_view>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <cstring>
using namespace std;

void printDir(string_view dir, int depth)
{
    DIR *dp;

    if((dp = opendir(dir.data())) == NULL)
    {
        cout << "cannot open directory: " << dir <<endl;
        return;
    }

    chdir(dir.data());

    struct dirent *entry;
    struct stat statBuf;

    while((entry = readdir(dp)) != NULL)
    {
        lstat(entry->d_name, &statBuf);
        if(S_ISDIR(statBuf.st_mode))
        {
            if(strcmp(".", entry->d_name) == 0 || strcmp("..", entry->d_name) == 0)
            {
                continue;
            }
            string s(depth, ' ');
            cout << s << entry->d_name << "/"<< endl;
            printDir(entry->d_name, depth+4);
        }
        else
        {
            string s(depth, ' ');
            cout << s << entry->d_name <<  endl;
        }

    }

    chdir("..");
    closedir(dp);
}

int main(int argc, char *argv[])
{
    cout << "DIrectory scan of /home:" << endl;
    char a[1024] = "/home/wang/cpp/my_cpp_class";

    printDir(a, 0);

    cout << "done." << endl;
    return 0;
}


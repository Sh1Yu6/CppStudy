
/************************************************
#
#      Filename: tenth.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-08 16:28:34
# Last Modified: 2020-08-08 16:52:58
#***********************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>
using namespace std;
void func(auto uid)
{
    auto pw = getpwnam(uid);
    cout << "UID passwd entry:" << endl;
    cout << "nmae=" << pw->pw_name << " uid=" << pw->pw_uid
         << " gid=" << pw->pw_gid << " home=" << pw->pw_dir
         << " shell=" << pw->pw_shell << endl;

}
int main(int argc, char *argv[])
{
    auto uid = getuid();
    auto gid = getgid();
    cout << "User is " << getlogin() << endl;
    cout << "User Ids:  uid=" <<  uid << " gid=" << gid << endl;

    func("root");
    return 0;
}


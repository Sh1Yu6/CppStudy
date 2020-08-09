
/************************************************
#
#      Filename: sixth.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-08 15:26:30
# Last Modified: 2020-08-08 15:47:31
#***********************************************/
#include <iostream>
#include <unistd.h>


using namespace std;
int main(int argc, char *argv[])
{
    int opt;
    while((opt = getopt(argc, argv, ":if:lr")) != -1)
    {
        switch(opt)
        {
            case 'i':
            case 'r':
            case 'l':
                cout << "option: " << static_cast<char>(opt) << endl;
                break;
            case 'f':
                cout << "filenmae: " << optarg << endl;
                break;
            case ':':
                cout << "optin needs a value" << endl;
                break;
            case '?':
                cout << "unknow option: " << static_cast<char>(optopt) << endl;
                break;
        }
    }
        for(; optind < argc; ++optind)
        {
            cout << "argument: " << argv[optind] << endl;
        }
    return 0;
}


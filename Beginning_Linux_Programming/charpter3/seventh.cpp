
/************************************************
#
#      Filename: seventh.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-08 16:00:33
# Last Modified: 2020-08-08 16:17:09
#***********************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(int argc, char *argv[])
{
    if(argc == 1 || argc > 3)
    {
        cerr << "usage: environ var [value]" << endl;
        exit(1);
    }

    char* var = argv[1];
    char* value = getenv(var);

    if(value)
    {
        cout << "Variable " << var << " has value " << value << endl;
    }
    else
    {
        cout << "Variable " << var << " no value" << endl;
    }


    if(argc == 3)
    {
        value = argv[2];
        char* str = new char[strlen(var)+strlen(value)+2];
        if(!str)
        {
            cout << "out of memory" << endl;
            exit(1);
        }
        
        strcpy(str, var);
        strcat(str, "=");
        strcat(str, value);
        cout << "calling putenv with : " << str << endl;
        if(putenv(str) != 0)
        {
            cout << "putenv failed" << endl;
            delete [] str;
            exit(1);
        }
    }

    value = getenv(var);
    if(value)
    {
        cout << "New value of " << var << " is " << value << endl;
    }
    else
    {
        cout << "New value of " << var << " is null??" << endl;
    }

    return 0;
}


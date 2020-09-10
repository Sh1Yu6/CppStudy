
/************************************************
#
#      Filename: second.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-09 16:10:19
# Last Modified: 2020-08-09 16:34:53
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <unistd.h>
using namespace std;

vector<string> menu{"a - add new record", "d - delete record", "q - quit"};

char getChoice(char* greet, vector<string> menu, istream& in, ostream& out);

int main(int argc, char *argv[])
{
    char choice = 0;
    ifstream in{"/dev/tty"};
    ofstream out{"/dev/tty"};

    if(!isatty(fileno(stdout)))
    {
        cout << "You are not a terminal, Ok." << endl;
    }

    if(!in || !out)
    {
        cout << "Unable to open /dev/tty" << endl;
        exit(1);
    }

    do
    {
        choice = getChoice("Please select an action", menu, in, out);
        cout << "You have chosen: " << static_cast<char>(choice) << endl;
    }while(choice != 'q');

    return 0;
}

char getChoice(char* greet, vector<string> menu, istream& in, ostream& out)
{
    int chosen = 0;
    char selected = 0;
    do
    {
        out << greet << endl;
        for(const auto& i: menu)
        {
            out << i << endl;
        }
        cin >> selected;
        for(const auto& i: menu)
        {
            if(selected == i[0])
            {
                chosen = 1;
                break;
            }
        }
        if(!chosen)
        {
            out << "Incorrect choice, select again" << endl;
        }
    }while(!chosen);
    return selected;
}



/************************************************
#
#      Filename: first.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-09 15:47:53
# Last Modified: 2020-08-09 16:02:28
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

char* menu[] = {
    "a - add new record", 
    "d - delete record", 
    "q - quit", 
    NULL,
};

vector<string> menu2{
    "a - add new record",
    "d - delete record", 
    "q - quit"
};

int getChoice(char* greet, char* choices[]);
int getChoice(char* greet, vector<string> choices);

int main(int argc, char *argv[])
{
    int choice = 0;
    do 
    {
        choice = getChoice("Please select an action", menu);
        cout << "You have chosen: " << static_cast<char>(choice) << endl;
    }while(choice != 'q');
    return 0;
}

int getChoice(char* greet, vector<string> choices)
{

}

int getChoice(char* greet, char* choices[])
{
    int chosen = 0;
    int selected;
    char** option;

    do
    {
        cout << "Choice: " << greet << endl;
        option = choices;
        while(*option)
        {
            cout << *option << endl;
            ++option;
        }
        selected = getchar();
        option = choices;
        while(*option)
        {
            if(selected == *option[0])
            {
                chosen = 1;
                break;
            }
            ++option;
        }
        if(!chosen)
        {
            cout << "Incorrect choice, select again" << endl;
        }

    }while(!chosen);
    return selected;
}


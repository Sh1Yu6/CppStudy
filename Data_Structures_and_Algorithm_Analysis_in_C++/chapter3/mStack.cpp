
/************************************************
#
#      Filename: mStack.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-03 08:06:42
# Last Modified: 2020-08-03 08:43:15
#***********************************************/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void test(stack<char>& sta, const char c)
{
    if(sta.top() == c)
    {
        sta.pop();
    }
    else
    {
        cout << "asdasdasd" << endl;
    }
    
}

int main(int argc, char *argv[])
{
    string str="{}()(({{(({{[[[}]]]}}))}}))";
    stack<char> sta;
    for(auto& i: str)
    {
        if(i == '(' || i == '[' || i == '{')
        {
            sta.push(i);
        }
        else if(i == ')' || i == ']' || i == '}')
        {
            if(sta.empty())
            {
                cout << "qweqweqwe" << endl;
            }
            switch(i)
            {
                case ')':
                    test(sta, '(');
                    break;
                case ']':
                    test(sta, '[');
                    break;
                case '}':
                    test(sta, '{');
                    break;
            }
        }
    }
    return 0;
}


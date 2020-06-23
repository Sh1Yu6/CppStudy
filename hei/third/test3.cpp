
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-22 21:48:12
# Last Modified: 2020-06-23 19:42:11
#***********************************************/
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(int argc, char *argv[])
{
    stack<int> s;
    queue<int> q;
    for(int i = 0; i < 10; ++i)
    {
        s.push(i);
        q.push(i);
    }

    for(int i = 0; i < 10; ++i)
    {
        cout << s.top() << endl;
        s.pop();
    }

    for(int i = 0; i < 10; ++i)
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}


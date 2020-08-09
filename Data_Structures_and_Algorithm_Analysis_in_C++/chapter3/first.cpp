
/************************************************
#
#      Filename: first.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-02 07:53:01
# Last Modified: 2020-08-02 08:10:05
#***********************************************/
#include <cstdint>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

template<typename Container>
void removeEveryOtherItem(Container& lst)
{
    auto itr = lst.begin();

    while(itr != lst.end())
    {
        itr = lst.erase(itr);
        if(itr != lst.end())
        {
            ++itr;
        }
    }
}

template<typename Container, typename Object>
void change(Container& c, const Object& newValue)
{
    auto itr= c.begin();
    while(itr != c.end())
    {
        *itr++ = newValue;
    }
}

template<typename Container>
void print(const Container& c, ostream& out = cout)
{
    if(c.empty())
    {
        out << "empty";
    }
    else
    {
        auto itr = begin(c);
        out << "[ " << *itr++;

        while(itr != end(c))
        {
            out <<", " << *itr++;
        }

        out << " ]" << endl;
    }
}
int main(int argc, char *argv[])
{
    vector<int> a{1, 2, 3, 4, 5, 6};
    ofstream file{"heihei"};
    print(a, file);
    return 0;
}


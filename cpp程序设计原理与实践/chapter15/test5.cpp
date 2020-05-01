
/************************************************
#
#      Filename: test5.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-30 19:41:13
# Last Modified: 2020-04-30 19:55:08
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename T>
class vector
{
    public:
        using size_type = unsigned long;
        using value_type = T;
        using iterator = T*;
        using const_iterator = const T*;

        iterator begin();
        const_iterator begin()const;
        iterator end();
        const_iterator end()const;

        size_type size();

};

template<typename T>
class list
{
public:
    class Link;
    using size_type = unsigned long;
    using value_type = T;
    class iterator;
    class const_iterator;

    iterator begin();
    const_iterator begin() const;
    iterator end();
    const_iterator end() const;

    size_type size();
};

//template<typename T>
//void user(vector<T>& v, list<T>& lst)
//{
    //for(vector<T>::iterator p = v.begin(); p != v.end(); ++p)
        //std::cout << *p << "\n";

    //for(list<T>::iterator q = find(lst.begin(), lst.end(), T{42}))
//}
int main(int argc, char *argv[])
{
    // vector<int>::iterator p = find(v.bengin(), v.end(), 32);
    // for(vector<int>::size_type i = 0; i < v.size(); ++i)
    return 0;
}

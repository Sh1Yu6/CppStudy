
/************************************************
#
#      Filename: test4.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-29 20:23:43
# Last Modified: 2020-04-30 19:28:50
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>


// 链表结点
template<typename Elem>
struct Link
{
    Link* prev;
    Link* succ;
    Elem va;
};


// 链表
//template<typename Elem>
//struct list
//{
    //Link<Elem>* first;
    //Link<Elem>* last;
//};


template<typename Elem>
class list
{
public:
    class iterator;
    iterator begin();
    iterator end();

    void push_back(const Elem& v);
    void push_front(const Elem& v);
    void pop_front();
    void pop_back();

    Elem& front();
    Elem& back();
private:
};


template<typename Elem>
class list<Elem>::iterator
{
public:
    iterator(Link<Elem>* p): curr{p}{}

    iterator& operator++()
    {
        curr = curr->succ;
        return *this;
    }
    iterator& operator--()
    {
        curr = curr->prev;
        return *this;
    }
    Elem& operator*()
    {
        return curr->val;
    }

    bool operator==(const iterator& b)const
    {
        return curr == b.curr;
    }
    bool operator!=(const iterator& b)const
    {
        return curr != b.curr;
    }
private:
    Link<Elem>* curr;
};
























int main(int argc, char *argv[])
{

    return 0;
}

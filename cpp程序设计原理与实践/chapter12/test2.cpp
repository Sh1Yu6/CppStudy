
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-23 21:49:49
# Last Modified: 2020-04-23 22:38:44
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

struct Link
{
    std::string value;
    Link* prev;
    Link* succ;
    
    Link(const std::string& v, Link* p = nullptr, Link* s = nullptr)
        : value{v}, prev{p}, succ{s}{}
    
    Link* insert(Link* p, Link* n)
    {
        if(n == nullptr)
            return p;
        if(p == nullptr)
            return n;
        n->succ = p;
        if(p->prev)
            p->prev->succ = n;
        n->prev = p->prev;
        p->prev = n;
        return n;
    }

    Link* add(Link* p, Link* n)
    {
        if(n == nullptr)
            return p;
        if(p == nullptr)
            return n;
        n->prev = p;
        n->succ = p->succ;
        p->succ = n;
        if(n->succ)
            n->succ->prev = n;

        return n;
    }

    Link* erase(Link* p)
    {
        if(p == nullptr)
            return nullptr;
        if(p->succ)
            p->succ->prev = p->prev;
        if(p->prev)
            p->prev->succ = p->succ;
        auto r = p->succ;
        delete p;
        return r;
    }

    Link* find(Link* p, const std::string& s)
    {
        while(p)
        {
            if(p->value == s)
                return p;
            p = p->succ;
        }
        return nullptr;
    }

    Link* advance(Link* p, int n)
    {
        if(p == nullptr)
            return nullptr;

        if(0 < n)
        {
            while(n--)
            {
                if(p->succ == nullptr)
                    return nullptr;
                p = p->succ;
            }
        }
        else if(n < 0)
        {
            while(n++)
            {
                if(prev == nullptr)
                    return nullptr;
                p = p->prev;
            }
        }
        return p;
    }

    void print_all(Link* p)
    {
        std::cout << "{";
        while(p)
        {
            std::cout << p->value;
            p = p->succ;
            if(p)
                std::cout << ",";
        }
        std::cout << "}\n";
    }
    
};


#ifndef NDEBUG
int main(int argc, char *argv[])
{

    Link* norse_gods = new Link("Thor");
    norse_gods =  norse_gods->insert(norse_gods, new Link{"Odin"});
    norse_gods = norse_gods->insert(norse_gods, new Link{"asdf"});
    norse_gods = norse_gods->insert(norse_gods, new Link{"sdf"});
    
    norse_gods->print_all(norse_gods);
    return 0;
}
#endif

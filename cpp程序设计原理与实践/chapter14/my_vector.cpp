
/************************************************
#
#      Filename: my_vector1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-22 21:27:27
# Last Modified: 2020-04-25 20:57:28
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

    vector(): sz{0}, elem{nullptr}, space{0}{}

    explicit vector(int s): sz{s}, elem{new T[s]}, space{s}
    {
        for(int i = 0; i < s; ++i)
            elem[i] = 0;
    }

    // 列表初始化
    vector(std::initializer_list<double> lst): sz{lst.size()}, elem{new T[sz]}, 
                                                space{lst.size()}
    {
        std::copy(lst.begin(), lst.end(), elem);
    }


    // 拷贝构造函数
    vector(const vector& arg): sz{arg.sz}, elem{new T[arg.sz]}, space{arg.sz}
    {
        std::copy(arg.elem, arg.elem+sz, elem);
    }

    // 移动拷贝构造
    vector(vector&& a):sz{a.sz}, elem{a.elem}, space{a.sz}
    {
        a.sz = 0;
        a.elem = nullptr;
    }


    // 析构
    ~vector()
    {
        delete [] elem;
    }

    // 赋值
    vector& operator=(const vector& a)
    {
        if(this == &a)
            return *this;

        if(a.sz <= space)
        {
            for(int i = 0; i < a.sz; ++i)
                elem[i] = a.elem[i];
            sz = a.sz;
            return *this;
        }

        T* p = new T[a.sz];
        std::copy(a.elem, a.elem+a.sz, p);

        delete [] elem;
        elem = p;
        space = a.sz;
        sz = a.sz;
        return *this;
    }

    // 移动赋值
    vector& operator=(vector&& a)
    {
        delete [] elem;
        elem = a.elem;
        sz = a.sz;
        a.elem = nullptr;
        a.sz = 0;
        return *this;
    }

    void reserve(int newalloc)
    {
        if(newalloc <= space)
            return ;
        T* p = new T[newalloc];
        for(int i = 0; i < sz; ++i)
            p[i] = elem[i];
        delete []elem;
        elem = p;
        space = newalloc;
    }

    int capacity() const
    {
        return space;
    }

    void resize(int newsize)
    {
        reserve(newsize);
        for(int i = sz; i < newsize; ++i)
            elem[i] = 0;
        sz = newsize;
    }

    void push_back(T d)
    {
        if(space == 0)
            reserve(8);
        else if(sz == space)
            reserve(2*space);
        elem[sz] = d;
        ++sz;
    }

    T& operator[](int n)
    {
        return elem[n];
    }

    T operator[](int n) const
    {
        return elem[n];
    }

    T get(int n) const
    {
        return elem[n];
    }

    void set(int n, T v)
    {
        elem[n] = v;
    }

    int size() const
    {
        return sz;
    }

private:
    int sz;
    T* elem;
    int space;
};























































#ifndef NDEBUG

int main(int argc, char *argv[])
{

    vector v(5);
    for(int i = 0; i < v.size(); ++i)
    {
        v.set(i, 1.1*i);
        std::cout << v.get(i) << "\n";
    }

    vector v2 = v;
    v2.set(3, 10);


    for(int i = 0; i < v.size(); ++i)
    {
        std::cout << v2.get(i) << "\n";
        std::cout << v.get(i) << "\n";
    }
    return 0;
}
#endif

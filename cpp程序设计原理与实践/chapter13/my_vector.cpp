
/************************************************
#
#      Filename: my_vector1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-22 21:27:27
# Last Modified: 2020-04-24 21:58:29
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

class vector
{
public:

    explicit vector(int s): sz{s}, elem{new double[s]}
    {
        for(int i = 0; i < s; ++i)
            elem[i] = 0;
    }

    // 列表初始化
    vector(std::initializer_list<double> lst): sz{lst.size()}, elem{new double[sz]}
    {
        std::copy(lst.begin(), lst.end(), elem);
    }


    // 拷贝构造函数
    vector(const vector& arg): sz{arg.sz}, elem{new double[arg.sz]}
    {
        std::copy(arg.elem, arg.elem+sz, elem);
    }

    // 移动拷贝构造
    vector(vector&& a):sz{a.sz}, elem{a.elem}
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
        double* p = new double[a.sz];
        std::copy(a.elem, a.elem+a.sz, p);

        delete [] elem;

        elem = p;
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

    double& operator[](int n)
    {
        return elem[n];
    }

    double operator[](int n) const
    {
        return elem[n];
    }

    double get(int n) const
    {
        return elem[n];
    }

    void set(int n, double v)
    {
        elem[n] = v;
    }

    int size() const
    {
        return sz;
    }

private:
    int sz;
    double* elem;
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

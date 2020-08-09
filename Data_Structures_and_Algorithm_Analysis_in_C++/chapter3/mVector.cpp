
/************************************************
#
#      Filename: mVector.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-02 08:17:11
# Last Modified: 2020-08-02 09:02:49
#***********************************************/
#include <iostream>
#include <algorithm>
using namespace std;


template<typename Object>
class mVector
{
    public:
        const int kSpareCapacity = 10;

        explicit mVector(int initSize = 0): mSize{initSize},
                                            mCapacity{initSize+kSpareCapacity}
        {
            objects = new Object[mCapacity];
        }

        mVector(const mVector& rhs): mSize{rhs.mSize},
                                     mCapacity{rhs.mCapacity},
                                     objects{nullptr}
        {
            objects = new Object[mCapacity];
            for(int i = 0; i < mSize; ++i)
            {
                objects[i] = rhs[i];
            }
        }

        mVector& operator=(const mVector& rhs)
        {
            mVector copy = rhs;
            std::swap(*this, copy);
            return *this;
        }

        ~mVector()
        {
            delete [] objects;
        }

        mVector(mVector&& rhs): mSize{rhs.mSize},
            mCapacity{rhs.mCapacity}, objects{rhs.objects}
        {
            rhs.objects = nullptr;
            rhs.mSize = 0;
            rhs.mCapacity = 0;
        }

        mVector& operator=(mVector&& rhs)
        {
            std::swap(mSize, rhs.mSize);
            std::swap(mCapacity, rhs.mCapacity);
            std::swap(objects, rhs.objects);
            return *this;
        }

        void resize(int newSize)
        {
            if(newSize > mCapacity)
            {
                reserve(newSize*2);
            }
            mSize = newSize;
        }

        void reserve(int newCapacity)
        {
            if(newCapacity < mSize)
            {
                return ;
            }

            Object* newArray = new Object[newCapacity];
            for(int i = 0; i < mSize; ++i)
            {
                newArray[i] = std::move(objects[i]);
            }

            mCapacity = newCapacity;
            std::swap(objects, newArray);
            delete [] newArray;
        }

        Object& operator[](int index)
        {
            return objects[index];
        }

        const Object& operator[](int index) const
        {
            return objects[index];
        }

        bool empty() const
        {
            return size() == 0;
        }

        int size() const 
        {
            return mSize;
        }

        int capacity() const
        {
            return mCapacity;
        }

        void push_back(const Object& x)
        {
            if(mSize == mCapacity)
            {
                reserve(mCapacity*2+1);
            }
            objects[mSize++] = x;
        }

        void push_back(Object&& x)
        {
            if(mSize == mCapacity)
            {
                reserve(mCapacity*2+1);
            }
            objects[mSize++] = std::move(x);
        }

        void pop_back()
        {
            --mSize;
        }

        const Object& back() const
        {
            return objects[mSize-1];
        }

        typedef Object* iterator;
        typedef const Object* const_iterator;

        iterator begin()
        {
            return &objects[0];
        }

        const_iterator begin() const
        {
            return &objects[0];
        }

        iterator end()
        {
            return &objects[size()];
        }

        const_iterator end() const
        {
            return &objects[size()];
        }

    private:
        int mSize;
        int mCapacity;
        Object* objects;
};

int main()
{
    mVector<int> a;
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    for(auto i: a)
    {
        cout << i <<endl;
    }
    return 0;
}

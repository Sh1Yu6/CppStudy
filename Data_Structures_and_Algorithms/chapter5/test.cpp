
/************************************************
#
#      Filename: test.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-23 19:01:04
# Last Modified: 2020-05-24 20:34:05
#***********************************************/
#include <cstddef>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <sstream>

template<typename T>
class Iterator
{
    public:
        using iterator_category = std::bidirectional_iterator_tag;
        using value_type = T;
        using difference_type = std::ptrdiff_t;
        using pointer = T*;
        using reference = T&;

        Iterator(T* the_position = 0): position{the_position}{}
        
        T& operator*() const
        {
            return *position;
        }

        T* operator->() const
        {
            return &* position;
        }

        Iterator& operator++()
        {
            ++position;
            return *this;
        }

        Iterator operator++(int)
        {
            Iterator old = *this;
            ++position;
            return old;
        }

        Iterator& operator--()
        {
            --position;
            return *this;
        }

        Iterator operator--(int)
        {
            Iterator old = *this;
            --position;
            return old;
        }

        bool operator!=(const Iterator right) const
        {
            return position != right.position;
        }

        bool operator==(const Iterator right) const
        {
            return position == right.position;
        }

        
    private:
        T* position;


};

template<typename T>
class LinearList
{
    public:
        virtual ~LinearList(){};

        virtual bool Empty() const = 0;

        virtual int Size() const = 0;

        virtual T& Get(int the_index) const = 0;

        virtual int IndexOf(const T& the_element) const = 0;

        virtual void Erase(int the_index) = 0;

        virtual void Insert(int the_index, const T& the_element) = 0;

        virtual void OutPut(std::ostream& out) const = 0;
};

template<typename T>
void ChangeLength(T*& arr, int old_length, int new_length)
{
    if(new_length < 0)
    {
        std::cerr << "some thing worry, exit\n" << std::endl;
        exit(1);
    }

    T* temp = new T[new_length];
    int number = std::min(old_length, new_length);
    std::copy(arr, arr + number, temp);
    delete [] arr;
    arr = temp;
    
}

template<typename T>
void ChangeLength2D(T**& arr, int old_row, int old_col, int new_row, int new_col)
{
    if(new_row < 0 || new_col < 0)
    {
        std::cerr << "some things are worry, exit\n";
        return 0;
    }

    T* temp = new T*[new_row];
}

template<typename T>
class ArrayList: public LinearList<T>
{
    public:
        ArrayList(int initial_capacity = 10);
        
        ArrayList(const ArrayList<T>&);

        ~ArrayList()
        {
            delete [] element;
        }

        bool Empty() const
        {
            return list_size == 0;
        }

        int Size() const
        {
            return list_size;
        }

        T& Get(int the_index) const;

        int IndexOf(const T& the_element) const;

        void Erase(int the_element);

        void Insert(int the_index, const T& the_element);

        void OutPut(std::ostream& out) const;

        int Capacity() const 
        {
            return array_length;
        }
    private:
        void CheckIndex(int the_index) const;

        T* element;
        int array_length;
        int list_size;
};

template<typename T>
ArrayList<T>::ArrayList(int initial_capacity)
{
    if(initial_capacity < 1)
    {
        std::ostringstream s;
        s << "Initial capacity = " << initial_capacity << " Must be > 0\n";
        std::cout << s.str() << std::endl;
        exit(1);
    }

    array_length = initial_capacity;
    element = new T[array_length];
    list_size = 0;
}

template<typename T>
ArrayList<T>::ArrayList(const ArrayList<T>& the_list)
{
    array_length = the_list.array_length;
    list_size = the_list.list_size;
    element = new T[array_length];
    std::copy(the_list.element, the_list.element + list_size, element);
}

template<typename T>
void ArrayList<T>::CheckIndex(int the_index) const
{
    if(the_index < 0 || the_index >= list_size)
    {
        std::ostringstream s;
        s << "index = " << the_index << " size = " << list_size << std::endl;
        std::cout << s.str();
    }
}

template<typename T>
T& ArrayList<T>::Get(int the_index) const
{
    CheckIndex(the_index);
    return element[the_index];
}

template<typename T>
int ArrayList<T>::IndexOf(const T& the_element) const
{
    int the_index = std::find(element, element + list_size, the_element) - element;
    if(the_index == list_size)
    {
        return -1;
    }
    
    return the_index;
}

template<typename T>
void ArrayList<T>::Erase(int the_index)
{
    CheckIndex(the_index);
    std::copy(element + the_index + 1, element + list_size, element + the_index);
    element[--list_size].~T();
}

template<typename T>
void ArrayList<T>::Insert(int the_index, const T& the_element)
{
    if(the_index < 0 || the_index > list_size)
    {
        std::ostringstream s;
        s << "index = " << the_index << " size = " << list_size << "\n";
        std::cout << s.str();
        return ;
    }

    if(list_size == array_length)
    {
        ChangeLength(element, array_length, array_length * 2);
        array_length *= 2;
    }

    std::copy_backward(element + the_index, element + list_size, element + list_size +1);
    element[the_index] = the_element;
    ++list_size;
}

template<typename T>
void ArrayList<T>::OutPut(std::ostream& out) const
{
    std::copy(element, element + list_size, std::ostream_iterator<T>(std::cout, " "));
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const ArrayList<T>& x)
{
    x.OutPut(out);
    return out;
}

template<typename T>
void copy(T start, T end, T to)
{
    while(start != end)
    {
        *to = *start;
        ++start;
        ++to;
    }
}


int main(int argc, char *argv[])
{

    return 0;
}

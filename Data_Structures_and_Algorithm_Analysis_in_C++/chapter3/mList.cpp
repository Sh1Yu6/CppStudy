
/************************************************
#
#      Filename: mList.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-08-02 09:03:43
# Last Modified: 2020-08-03 08:06:31
#***********************************************/
#include <exception>
#include <iostream>
#include <iterator>
using namespace std;


template<typename Object>
class mList
{
    private:
        struct Node
        {
            Object data;
            Node *prev;
            Node *next;

            Node(const Object& d = Object{}, Node* p = nullptr, Node* n = nullptr)
                : data{d}, prev{p}, next{n}{}

            Node(Object&& d, Node* p = nullptr, Node* n = nullptr)
                : data{std::move(d)}, prev{p}, next{n}{}
        };

    public:
        class const_iterator
        {
            public:
                friend class mList<Object>;

                const_iterator(): current{nullptr}{}

                const Object& operator*() const
                {
                    return retrieve();
                }

                const_iterator& operator++()
                {
                    current = current->next;
                    return *this;
                }

                const_iterator operator++(int)
                {
                    const_iterator old = *this;
                    ++(*this);
                    return old;
                }

                bool operator==(const const_iterator& rhs) const
                {
                    return current == rhs.current;
                }

                bool operator!=(const const_iterator& rhs) const
                {
                    return !(*this == rhs);
                }

            protected:
                Node* current;

                Object& retrieve() const
                {
                    return current->data;
                }

                const_iterator(Node* p): current{p}{}

                

        };

        class iterator: public const_iterator
        {
            public:
                friend class mList<Object>;
                iterator(){}
                Object& operator*()
                {
                    return const_iterator::retrieve();
                }

                const Object& operator*() const
                {
                    return const_iterator::operator*();
                }

                iterator& operator++()
                {
                    this->current = this->current->next;
                    return *this;
                }

                iterator operator++(int)
                {
                    iterator old = *this;
                    ++(*this);
                    return old;
                }

            protected:
                iterator(Node* p): const_iterator{p}{}
            
        };

    public:
        mList()
        {
            init();
        }

        mList(const mList& rhs)
        {
            init();
            for(auto& x: rhs)
            {
                push_back(x);
            }
        }

        ~mList()
        {
            clear();
            delete head;
            delete tail;
        }

        mList& operator=(const mList& rhs)
        {
            mList copy = rhs;
            std::swap(*this, copy);
            return *this;
        }

        mList(mList&& rhs): mSize(rhs.mSize), head{rhs.head}, tail{rhs.tail}
        {
            rhs.mSize = 0;
            rhs.head = nullptr;
            rhs.tail = nullptr;
        }

        mList& operator=(mList&& rhs)
        {
            std::swap(mSize, rhs.mSize);
            std::swap(head, rhs.head);
            std::swap(tail, rhs.tail);
            return *this;
        }

        iterator begin()
        {
            return {head->next};
        }

        const_iterator begin() const
        {
            return {head->next};
        }

        iterator end()
        {
            return {tail};
        }
        
        const_iterator end() const
        {
            return {tail};
        }

        int size() const
        {
            return mSize;
        }

        bool empty() const
        {
            return size() == 0;
        }

        void clear()
        {
            while(!empty())
            {
                pop_front();
            }
        }

        Object& front()
        {
            return *begin();
        }

        const Object& front() const
        {
            return *begin();
        }

        Object& back()
        {
            return *--end();
        }

        const Object& back() const
        {
            return *--end();
        }

        void push_front(const Object& x)
        {
            insert(begin(), x);
        }

        void push_front(Object&& x)
        {
            insert(begin(), std::move(x));
        }

        void push_back(const Object& x)
        {
            insert(end(), x);
        }

        void push_back(Object&& x)
        {
            insert(end(), std::move(x));
        }

        void pop_front()
        {
            erase(begin());
        }

        void pop_back()
        {
            erase(--end());
        }

        iterator insert(iterator itr, const Object& x)
        {
            Node *p = itr.current;
            ++mSize;
            return {p->prev = p->prev->next = new Node{x, p->prve, p}};
        }

        iterator insert(iterator itr, Object&& x)
        {
            Node* p = itr.current;
            ++mSize;
            return {p->prev = p->prev->next = new Node{std::move(x), p->prev, p}};
        }

        iterator erase(iterator itr)
        {
            Node* p = itr.current;
            iterator retVal{p->next};
            p->prev->next = p->next;
            p->next->prev = p->prev;
            delete p;
            --mSize;
            return retVal;
        }

        iterator erase(iterator from, iterator to)
        {
            for(iterator itr = from; itr != to;)
            {
                itr = erase(itr);
            }
            return to;
        }

    private:
        int mSize;
        Node *head;
        Node *tail;

        void init()
        {
            mSize = 0;
            head = new Node;
            tail = new Node;
            head->next = tail;
            tail->prev = head;
        }

};














int main(int argc, char *argv[])
{
    return 0;
}


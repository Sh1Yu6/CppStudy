
#include <iostream>

class MyString 
{
    public:
        MyString(const char* cstr = 0);
        MyString(const MyString& str);
        MyString& operator=(const MyString& str);
        ~MyString();
        char* getCStr() const;
    private:
        char* mData;
};

std::ostream& operator<<(std::ostream& os, MyString& str);


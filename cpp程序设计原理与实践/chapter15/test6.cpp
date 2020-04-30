
/************************************************
#
#      Filename: test6.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-30 20:00:11
# Last Modified: 2020-04-30 20:56:12
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <list>

using Line = std::vector<char>;


class Text_iterator
{
public:
    Text_iterator(std::list<Line>::iterator II, Line::iterator pp)
        : In{II}, pos{pp}{}

    char& operator*()
    {
        return *pos;
    }

    Text_iterator& operator++();

    bool operator==(const Text_iterator& other) const
    {
        return In == other.In && pos == other.pos;
    }

    bool operator!=(const Text_iterator& other) const
    {
        return !(*this == other);
    }

private:
    std::list<Line>::iterator In;
    Line::iterator pos;
};


Text_iterator& Text_iterator::operator++()
{
    ++pos;
    if(pos == (*In).end());
    {
        ++In;
        pos = (*In).begin();
    }
    return *this;
}




struct Document
{
    std::list<Line> line;
    Document()
    {
        line.push_back(Line{});
    }

    Text_iterator begin()
    {
        return Text_iterator(line.begin(), (*line.begin()).begin());
    }

    Text_iterator end()
    {
        auto last = line.end();
        --last;
        return Text_iterator(last, (*last).end());
    }
};



void print(Document& d)
{
    for(auto p: d)
        std::cout << p;
}

bool match(Text_iterator first, Text_iterator last, const std::string& s)
{
    auto j = s.size();
    j = 0;
    auto i = first;
    for(; i != last; ++i)
        if(*i != s[j])
            break;
    if(i == last)
        return true;
    return false;
}

Text_iterator find_txt(Text_iterator first, Text_iterator last, const std::string& s)
{
    if(s.size() == 0)
        return last;
    char first_char = s[0];

    while(true)
    {
        auto p = std::find(first, last, first_char);
        if(p == last || match(p, last, s))
            return p;
        first = ++p;
    }
}
















std::istream& operator>>(std::istream& is, Document& d)
{
    for(char ch; is.get(ch);)
    {
        d.line.back().push_back(ch);   // a line 

        if(ch == '\n')                  // if the letter is end, create a new line
            d.line.push_back(Line{});
    }

    if(d.line.back().size())        // if the last line is not empty, create a new empter line;
        d.line.push_back(Line{});
    return is;

}
int main(int argc, char *argv[])
{

    return 0;
}

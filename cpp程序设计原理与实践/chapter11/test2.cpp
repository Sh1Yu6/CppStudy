
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-22 19:32:02
# Last Modified: 2020-04-22 20:13:32
#***********************************************/
#include <cstdlib>
#include <iostream>
#include <istream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

class PunctStream
{
public:
    PunctStream(std::istream& is): source{is}, sensitive{true}{}

    void whitespace(const std::string& s)
    {
        white = s;
    }

    void add_white(char c)
    {
        white += c;
    }

    bool is_whitespace(char c);
    
    void case_sensitive(bool b)
    {
        sensitive = b;
    }

    bool is_case_sensitive()
    {
        return sensitive;
    }

    PunctStream& operator>>(std::string& s);
    operator bool();
private:
    std::istream& source;
    std::istringstream buffer;
    std::string white;
    bool sensitive;
};

PunctStream& PunctStream::operator>>(std::string& s)
{
    while(!(buffer >> s))
    {
        if(buffer.bad() || !source.good())
            return *this;
        buffer.clear();

        std::string line;
        getline(source, line);

        for(char& ch: line)
        {
            if(is_whitespace(ch))
                ch = ' ';
            else if(!sensitive)
                ch = tolower(ch);
        }

        buffer.str(line);
    }

    return *this;
}

bool PunctStream::is_whitespace(char c)
{
    for(char w: white)
    {
        if(c == w)
            return true;
    }
    return false;
}

PunctStream::operator bool()
{
    return !(source.fail() || source.bad()) && source.good();
}


int main(int argc, char *argv[])
{

    PunctStream ps{std::cin};
    ps.whitespace(";:,.<>!");
    ps.case_sensitive(false);

    std::cout << "please enter words\n";
    std::vector<std::string> vs;
    for(std::string word; ps >> word;)
    {
        vs.push_back(word);
    }

    std::sort(vs.begin(), vs.end());
    for(int i = 0; i < vs.size(); ++i)
    {
        if(i == 0 || vs[i] != vs[i-1])
            std::cout << vs[i] << "\n";
    }

    return 0;
}

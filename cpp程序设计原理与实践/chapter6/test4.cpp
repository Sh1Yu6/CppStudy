
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-10 19:13:34
# Last Modified: 2020-04-11 19:27:22
#***********************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

class Token
{
public:
    char kind;
    double value;
};

class Token_stream
{
public:
    Token get();
    void putback(Token t);
private:
    bool full{false};
    Token buffer;
};
void Token_stream::putback(Token t)
{
    if(full)
    {
        std::cerr << "putback() into a full buffer\n";
    }
    buffer = t;
    full = true;
}
Token Token_stream::get()
{
    if(full)
    {
        full = false;
        return buffer;
    }
    char ch;
    std::cin >> ch;

    switch(ch)
    {
    case ';':
    case 'q':
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
        return Token{ch};
    case '.':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        {
            std::cin.putback(ch);
            double val;
            std::cin >> val;
            return Token{'8', val};
        }
    default:
        std::cerr << "Bad token\n";
        exit(0);
    }
}

Token get_token();
double expression();
double term();
double primary();

Token_stream ts;

int main(int argc, char *argv[])
{
    try
    {   double val = 0;
        while(std::cin)
        {
            Token t = ts.get();

            while(t.kind == ';')
            {
                t = ts.get();
                if(t.kind == 'q')
                {
                    return 0;
                }
                ts.putback(t);
                std::cout << "=" << expression() <<"\n";

            }
            
            
        }
    }
    catch(std::runtime_error& e)
    {
        std::cerr << e.what() << "\n";
        std::cout << "Please enter the character ~ to close the window\n";
        for(char ch; std::cin >> ch;)
            if(ch == '~')
                return 1;
        return 1;
    }
    catch(...)
    {
        std::cout << "exception \n";
        std::cout << "Please enter the character ~ to close the window\n";
        for(char ch; std::cin >> ch;)
            if(ch == '~')
                return 1;
        return 2;
    }
}

double expression()
{
    double left = term();
    Token t = ts.get();
    while(true)
    {
        switch(t.kind)
        {
        case '+':
            left += term();
            t = ts.get();
            break;
        case '-':
            left -= term();
            t = ts.get();
            break;
        default:
            ts.putback(t);
            return left;
        }
    }
}

double term()
{
    double left = primary();
    Token t = ts.get(); 
    while(true)
    {
        switch(t.kind)
        {
        case '*':
            left *= primary();
            t = ts.get(); 
            break;
        case '/':
            {
                double d = primary();
                if(d == 0)
                {
                    std::cerr << "divide by zero\n";
                    exit(0);
                }
                left /= d;
                t = ts.get(); 
                break;
            }
        case '%':
            {
                double d = primary();
                if(d == 0)
                {
                    std::cerr << "divide by zero\n";
                    exit(0);
                }
                left = fmod(left, d);
                t = ts.get();
                break;

            }
        default:
            ts.putback(t);
            return left;
        }
    }
}

double primary()
{
    Token t = ts.get();
    switch(t.kind)
    {
    case '(':
        {
            double d = expression();
            t = ts.get();
            if(t.kind != ')')
            {    
                std::cerr << "')' expected\n";
                exit(0);
            }
            return d;
        }
    case '8':
        return t.value;
    case '-':
        return -primary();
    case '+':
        return primary();
    default:
        std::cerr << "primary expected\n";
        exit(0);
    }
}





















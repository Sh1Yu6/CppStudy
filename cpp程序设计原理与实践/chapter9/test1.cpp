
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-16 19:36:33
# Last Modified: 2020-04-16 21:58:53
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

// 用 enum class 而不用 enum , 因为enum class 更安全
enum class Month 
{
    jan=1, feb, mar, apr, may, jun, july, aug, sep, oct, nov, dec
};



class Date
{
public:
    Date():year{2001}, month{Month::jan}, day{1}{}

    Date(int year, Month month, int day);

    void add_day(int n);

    int get_year(){return year;}

    Month get_month(){return month;}

    int get_day(){return day;}

private:
                 //默认
    int year;    //int year{2001}
    Month month;   //int month{Month::jan}
    int day;     //int day{1}
    
    bool is_valid(int m);
    
};

Date::Date(int yy, Month mm, int dd):year{yy}, month{mm}, day{dd}
{
    if(!is_valid(int(month)))
        std::cerr << "false\n";
}

bool Date::is_valid(int m)
{
    if(m < 1 || 12 < m)
        return false;
    return true;
}












int main(int argc, char *argv[])
{


    std::vector<Date> birthdays(10);
    for(auto i = birthdays.begin(); i != birthdays.end(); ++i)
    {
    std::cout << i->get_year()  << "/"  << i->get_day() << "\n";
    }
    return 0;
}

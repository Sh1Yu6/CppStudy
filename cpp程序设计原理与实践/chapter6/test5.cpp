
/************************************************
#
#      Filename:		test5.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-11 19:46:52
# Last Modified: 2020-04-21 20:22:31
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

class Variable
{
    public:
        std::string name;
        double value;
};

double get_value(std::string s);
void set_value(std::string s, double d);


std::vector<Variable> var_table;

int main(int argc, char *argv[])
{
    while(std::cin)
    {
        Variable a;
        std::cin >> a.name >> a.value;
        var_table.push_back(a);
    }

    std::cout << get_value("wang") << "\n";
    set_value("wang", 100);
    std::cout << get_value("wang") << "\n";
    return 0;
}


double get_value(std::string s)
{
    for(auto& v: var_table)
    {
        if(v.name == s)
            return v.value;
    }
}
void set_value(std::string s, double d)
{
    for(auto& v: var_table)
    {
        if(v.name == s)
        {
            v.value = d;
            return ;
        }
    }
}

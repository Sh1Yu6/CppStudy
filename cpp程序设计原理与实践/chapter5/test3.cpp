
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-09 21:06:16
# Last Modified: 2020-04-09 21:17:19
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
int main(int argc, char *argv[])
{
    std::cout << "Please enter the number of values you want to sum:\n";
    int first_int = 0;
    std::cin >> first_int;
    
    std::cout << "Please enter some integers(press '|' to stop):\n";
    std::vector<int> n;
    for(int x; std::cin >> x;)
    {
        n.push_back(x); 
    }

    if(first_int > n.size())
    {
        std::cerr << "Sorry, The number you entered is greater than the total.\n";
        return 1;
    }
    else
    {
        int sum = 0;
        std::cout << "The sum of the first " << first_int << " numbers (";
        for(int i = 0; i < first_int; ++i)
        {
            sum += n[i]; 
            std::cout << " " << n[i] << " ";
        } 
        std::cout << ") is " << sum << "\n";
    }
    return 0;
}


/************************************************
#
#      Filename: test8.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 20:22:41
# Last Modified: 2020-03-29 20:37:05
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    int number_of_words = 0;
    std::string previous = "";
    std::string current;
    while(std::cin >> current)
    {
        ++number_of_words;
        if(previous == current)
            std::cout << "word number:" << number_of_words
                      << "repeated word:" << current << '\n';
        previous = current;
    }
    return 0;
}

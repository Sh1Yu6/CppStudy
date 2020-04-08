
/************************************************
#
#      Filename: test11.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-08 20:57:06
# Last Modified: 2020-04-08 21:15:04
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    std::vector<std::string> words;
    for(std::string temp; std::cin >> temp;)
    {
        words.push_back(temp);
    }
    std::cout << "Number of words:" << words.size() << "\n";

    sort(words.begin(), words.end());
    

    for(int i = 0; i < words.size(); ++i)
    {
        if(words[i] == "where" )
        {
            std::cout << "BLEEP" << "\n";
        }
        else if(i == 0 || words[i-1] != words[i])
        {
            std::cout << words[i] << "\n";
        }
    }
    return 0;
}

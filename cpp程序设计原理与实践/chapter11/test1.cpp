
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-22 19:01:52
# Last Modified: 2020-04-22 19:23:46
#***********************************************/
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <sstream>
int main(int argc, char *argv[])
{
    std::string command;
    getline(std::cin, command);

    std::stringstream ss{command};
    std::vector<std::string> words;
    for(std::string s; ss >> s;)
    {
        words.push_back(s);
    }
    for(auto i: words)
    {
        std::cout << i << std::endl;
    }


    return 0;
}

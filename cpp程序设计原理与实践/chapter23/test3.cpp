
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-05 20:26:09
# Last Modified: 2020-05-05 20:31:18
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <regex>
#include <fstream>
int main(int argc, char *argv[])
{
    std::ifstream in {"file.txt"};
    if(!in)
    {
        std::cerr << "can't open the file\n";
    }
    
    std::regex pat{R"(\w{2}\s*\d{5}(-d{4})?)"};
    int lineno = 0;
    for(std::string line; getline(in, line);)
    {
        ++lineno;
        std::smatch matches;
        if(regex_search(line, matches, pat));
            std::cout << lineno << " : " << matches[0] << "\n";
    }
    return 0;
}

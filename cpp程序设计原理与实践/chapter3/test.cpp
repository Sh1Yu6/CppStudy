
/************************************************
#
#      Filename: test.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 19:16:02
# Last Modified: 2020-03-29 19:17:49
#***********************************************/
#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
    std::cout<< "Please enter your first name(followed by 'enter'):\n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Hello, " << first_name << "!\n";
    return 0;
}

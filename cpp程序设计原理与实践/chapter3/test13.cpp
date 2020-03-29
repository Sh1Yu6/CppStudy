
/************************************************
#
#      Filename: test13.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-03-29 22:08:36
# Last Modified: 2020-03-29 22:35:29
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(int argc, char *argv[])
{
    std::cout << "Enter the name of the person you want to write to:\n";
    std::string first_name;
    std::cin >> first_name;
    
    std::cout << "Enter a name of your friend:\n";
    std::string friend_name;
    std::cin >> friend_name;

    std::cout << "Enter m if your friend is a man or Enter f if you friend is a woman:\n";
    char friend_sex = 0;
    std::cin >> friend_sex;
    
    std::cout << "Dear " << first_name << ":\n"
              << "    How are you? I am fine. I miss you."
              << " Have you seen " << friend_name << " lately? ";
    

    if('m' == friend_sex)
        std::cout << "If you see " << friend_name << "please ask him to call me.\n";
    else
        std::cout << "If you see " << friend_name << "please ask her to call me.\n";
     
    return 0;
}

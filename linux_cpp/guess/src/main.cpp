
/************************************************
#
#      Filename: main.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-13 20:45:36
# Last Modified: 2020-04-21 21:36:12
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include "guess.h"

int main(int argc, char *argv[])
{
    double prevailed_ratio;
    print_welcome_info();
    initialize_game();
    prevailed_ratio = play_game();
    print_game_over_info(prevailed_ratio);
    return 0;
}

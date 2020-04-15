
/************************************************
#
#      Filename: guess.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-04-13 21:10:32
# Last Modified: 2020-04-15 19:59:32
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "guess.h"
using std::cout;
using std::cin;

const int lowest_price = 100;
const int highest_price = 200;
const int guess_count = 6;

static int initialize_bout();
                                                                                
static bool play_bout(int actual_price, int lower_price, 
        int higher_price, int chances_left);

static bool again();

static int get_price(int lower_price, int higher_price, int chances_left);

static int check_price(int lower_price, int higher_price, int guess_price);

static int judge_price(int actual_price, int guess_price);


void print_welcome_info()
{
    cout << "The program lists a product with price between "
        << lowest_price << " and " << highest_price << " (RMB Yuan).\n";
    cout << "You give a guess price. If the price you give is "
        << "correct, you win.\n";
    cout << "You have " << guess_count << " chances.\n";
    cout << "Rise to the challenge to win your bonus..\n";
}

void initialize_game()
{
    int i, n;
    srand(static_cast<int>(time(NULL)));
}

double play_game()
{
    int actual_price;
    int lower_price = lowest_price;
    int higher_price = highest_price;
    int chances_left = guess_count;
    int bout_count = 0;
    int prevailed_bout_count = 0;
    while(true)
    {
        cout << "\n";
        actual_price = initialize_bout();
        if(play_bout(actual_price, lower_price, higher_price, chances_left))
        {
            ++prevailed_bout_count;
        }
        ++bout_count;
        if(!again())
            break;
    }
    return static_cast<double>(prevailed_bout_count) / static_cast<double>(bout_count);
}

void print_game_over_info(double prevailed_ratio)
{
    cout << "\nprevailed ratio: " << std::setw(3) << prevailed_ratio * 100 << "%.\n";
    if(prevailed_ratio >= 0.75)
        cout << "You luckyyyyyy!\n\n";
    else if(prevailed_ratio >= 0.50)
        cout << "So gooood.\n\n";
    else 
        cout << "You can do it better. Wish you luck.\n\n";
}


static int initialize_bout()
{
    double t = rand() % highest_price + lowest_price;
    return t;
}
                                                                                
static bool play_bout(int actual_price, int lower_price, 
        int higher_price, int chances_left)
{
    int guess_price;
    int judge_result;
    while(chances_left > 0)
    {
        guess_price = get_price(lower_price, higher_price, chances_left);
        guess_price = check_price(lower_price, higher_price, guess_price);
        --chances_left;
        judge_result = judge_price(actual_price, guess_price);
        switch(judge_result)
        {
        case 1:
            if(chances_left > 0)
            {
                cout << "\nHigher.\n";
                higher_price = guess_price-1;
            }
            else
            {
                cout << "\nYou lose this bout.The actual price is: " << actual_price << "\n";
                return false;
            }
            break;
        case -1:
            if(chances_left > 0)
            {
                cout << "\nLower.\n";
                lower_price = guess_price + 1;
            }
            else
            {
                cout << "\nYou lose this bout.The actual price is: " << actual_price << "\n";
                return false;
            }
            break;
        default:
            cout << "\nYou winnnnn\n\n";
            return true;
        }
    }       
}

static bool again()
{
    int t;
    cout << "\nPlay a new game (\"0\" to stop, other numbers to play again)?\n";
    cin >> t;
    return t !=0;
}

static int get_price(int lower_price, int higher_price, int chances_left)
{
    int t;
    cout << "The actual price is in [" << lower_price << "," << higher_price << "].\n";
    cout << "Chances left " << chances_left << ".\nYou guess:";
    cin >> t;
    return t;
}

static int check_price(int lower_price, int higher_price, int guess_price)
{
    int t = guess_price;
    while(t < lower_price || t > higher_price)
    {
        cout << "Guess price " << t << " is out of the range.";
        cout << "Please choose one in [" << lower_price << "," << higher_price
            << "].\nTry again: ";
        cin >> t;
    }
    return t;
}

static int judge_price(int actual_price, int guess_price)
{
    int t = guess_price - actual_price;
    if(t > 0)
        return 1;
    else if(t < 0)
        return -1;
    else
        return 0;
}

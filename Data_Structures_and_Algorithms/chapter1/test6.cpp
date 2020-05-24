
/************************************************
#
#      Filename: test6.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-07 22:02:31
# Last Modified: 2020-05-08 19:13:59
#***********************************************/
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include "test6.h"


void Currency::SetValue(SignType the_sign, unsigned int the_dollars,
                        unsigned int the_cents)
{
    if(the_cents > 99)
    {
        throw "Cents should be < 100\n";
    }
    sign_ = the_sign;
    dollars_ = the_dollars;
    cents_ = the_cents;
}

void Currency::SetValue(double the_amount)
{
    if(the_amount < 0)
    {
        sign_ = kMinus;
        the_amount = -the_amount;
    }
    else
    {
        sign_ = kPlus;
    }
    dollars_ = static_cast<unsigned int> (the_amount);
    cents_ = static_cast<unsigned int> ((the_amount + 0.001 - dollars_) * 100);
}

Currency Currency::Add(const Currency& x) const
{
    int a1 = 0;
    int a2 = 0; 
    int a3 = 0;
    Currency result;

    a1 = dollars_ * 100 + cents_;
    if (sign_ == kMinus)
    {
        a1 = -a1;
    }

    a2 = x.dollars_ * 100 + x.cents_;
    if (x.sign_ == kMinus)
    {
        a2 = -a2;
    }

    a3 = a1 + a2;
    if (a3 < 0)
    {
        result.sign_ = kMinus;
        a3 = -a3;
    }
    else
    {
        result.sign_ = kPlus;
    }
    result.dollars_ = a3 / 100;
    result.cents_ = a3 - result.dollars_ * 100;

    return result;
}

Currency& Currency::Increment(const Currency& x)
{
    *this = Add(x);
    return *this;
}

void Currency::OutPut() const
{
    if(sign_ == kMinus)
    {
        std::cout << "-";
    }
    std::cout << "$" << dollars_ << ".";
    if(cents_ < 10)
    {
        std::cout << "0";
    }
    std::cout << cents_;
}












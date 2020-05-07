
/************************************************
#
#      Filename: test6.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-07 22:02:31
# Last Modified: 2020-05-07 22:46:12
#***********************************************/
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

enum SignType {kPlus, kMinus};
class Currency
{
    public:
        Currency(SignType the_sign = kPlus, unsigned int the_dollars = 0,
                 unsigned int the_center = 0)
                 : sign_{the_sign}, dollars_{the_dollars}, cents_{the_center}{}
        ~Currency(){}
        void SetValue(SignType, unsigned int, unsigned int);
        void SetValue(double);
        SignType GetSign() const
        {
            return sign_;
        }

        unsigned int GetDollars() const 
        {
            return dollars_;
        }
        
        unsigned int GetCents() const
        {
            return cents_;
        }

        Currency Add(const Currency&) const;
        Currency& Increment(const Currency&);
        void OutPut() const;

    private:
        SignType sign_;
        unsigned int dollars_;
        unsigned int cents_;
};

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













int main(int argc, char *argv[])
{

    return 0;
}


/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-25 19:25:34
# Last Modified: 2020-05-25 20:01:32
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <memory>
#include <string>
using namespace std;


class AirlineTicket
{
    public:
        AirlineTicket();
        ~AirlineTicket();
        int CalculatePriceDollaes() const;
        const string& GetPassengerName() const;
        void SetPassengerNmae(const std::string& name);
        int GetNumberOfMiles() const;
        void SetNumberOfMiles(int miles);
        bool GetHasEliteSuperRewardsStatus() const;
        void SetHasEliteSuperRewardsStatus(bool status);

    private:
        std::string passenger_name_;
        int number_of_miles_;
        bool has_elite_super_rewards_status_;
};

AirlineTicket::AirlineTicket()
{
    has_elite_super_rewards_status_ = false;
    passenger_name_ = "Unknown Passenger";
    number_of_miles_ = 0;
}

int AirlineTicket::CalculatePriceDollaes() const
{
    //if(GetHasEliteSuperRewardsStatus())
    //{
        //return 0;
    //}
    return static_cast<int>(GetNumberOfMiles() * 0.1);
}

const std::string& AirlineTicket::GetPassengerName() const
{
    return passenger_name_;
}

void AirlineTicket::SetPassengerNmae(const std::string& name)
{
    passenger_name_ = name;
}

int main(int argc, char *argv[])
{
    
    AirlineTicket my_ticket;
    my_ticket.SetPassengerNmae("wang");
    my_ticket.SetNumberOfMiles(666);
    int cost = my_ticket.CalculatePriceDollaes();
    cout << "This ticket will cost $" << cost << endl;

    auto my_ticket2 = make_unique<AirlineTicket>();
    my_ticket2->SetPassengerNmae("Shi");
    my_ticket2->SetNumberOfMiles(2000);
    my_ticket2->SetHasEliteSuperRewardsStatus(true);
    int cost2 = my_ticket2->CalculatePriceDollaes();
    cout << "This other ticket will cost $" << cost2 << endl;

    AirlineTicket* my_ticket3 = new AirlineTicket();
    delete my_ticket3;

    return 0;
}

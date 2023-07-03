#include "NewUnknownAirlineUpgradeSystem.hpp"

#include <iostream>
#include <string>
#include <vector>

int main()
{
    NewUnknownAirlineUpgradeSystem::NUASystem *nua = new NewUnknownAirlineUpgradeSystem::NUASystem();
    std::vector<NewUnknownAirlineUpgradeSystem::FrequentFlyer> new_waiting_list;    
    
    new_waiting_list.emplace_back(3, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SILVER,    90, "John");
    new_waiting_list.emplace_back(2, NewUnknownAirlineUpgradeSystem::FrequentFlyer::GOLD,      60, "Lauren");
    new_waiting_list.emplace_back(1, NewUnknownAirlineUpgradeSystem::FrequentFlyer::PLATINUM,  30, "Jess");
    new_waiting_list.emplace_back(4, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SUPER,    120, "Mike");

    std::cout << "**First Test** \n";
    nua->insertRequests(new_waiting_list);
    nua->systemUpgrade(1, 2);

    std::cout << "Highest-Priority Flyers:" << "\n\n";
    for(int i = 0; i < nua->returned_passengers.size(); i++)
    {
       std::cout << nua->returned_passengers[i].toString() << "\n";
    }
    
    NewUnknownAirlineUpgradeSystem::NUASystem *nua2 = new NewUnknownAirlineUpgradeSystem::NUASystem();
    std::vector<NewUnknownAirlineUpgradeSystem::FrequentFlyer> new_waiting_list2;

    new_waiting_list2.emplace_back(4, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SILVER,   150, "Jeff");
    new_waiting_list2.emplace_back(2, NewUnknownAirlineUpgradeSystem::FrequentFlyer::GOLD,     130, "Paul");
    new_waiting_list2.emplace_back(1, NewUnknownAirlineUpgradeSystem::FrequentFlyer::PLATINUM, 120, "Sammy");
    new_waiting_list2.emplace_back(5, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SUPER,     60, "Kyle");
    new_waiting_list2.emplace_back(3, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SUPER,    140, "Brooke");

    std::cout << "**Second Test** \n";
    nua2->insertRequests(new_waiting_list2);
    nua2->systemUpgrade(2, 1);
    
    std::cout << "Highest-Priority Flyers:" << "\n\n";
    for(int i = 0; i < nua2->returned_passengers.size(); i++)
    {
       std::cout << nua2->returned_passengers[i].toString() << "\n";
    }


    NewUnknownAirlineUpgradeSystem::NUASystem *nua3 = new NewUnknownAirlineUpgradeSystem::NUASystem();
    std::vector<NewUnknownAirlineUpgradeSystem::FrequentFlyer> new_waiting_list3;
    
    new_waiting_list3.emplace_back(2, NewUnknownAirlineUpgradeSystem::FrequentFlyer::PLATINUM, 101, "Nick");
    new_waiting_list3.emplace_back(1, NewUnknownAirlineUpgradeSystem::FrequentFlyer::GOLD,     102, "Dan");
    new_waiting_list3.emplace_back(5, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SUPER,    105, "Mark");
    new_waiting_list3.emplace_back(4, NewUnknownAirlineUpgradeSystem::FrequentFlyer::GOLD,     104, "Andrew");
    new_waiting_list3.emplace_back(6, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SILVER,   103, "Alexis");
    new_waiting_list3.emplace_back(3, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SUPER,    108, "Tom");
    new_waiting_list3.emplace_back(7, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SILVER,   106, "Brian");

    std::cout << "**Third Test** \n";
    nua3->insertRequests(new_waiting_list3);
    nua3->systemUpgrade(3, 2);

    std::cout << "Highest-Priority Flyers:" << "\n\n";
    for(int i = 0; i < nua3->returned_passengers.size(); i++)
    {
       std::cout << nua3->returned_passengers[i].toString() << "\n";
    }


    NewUnknownAirlineUpgradeSystem::NUASystem *nua4 = new NewUnknownAirlineUpgradeSystem::NUASystem();
    std::vector<NewUnknownAirlineUpgradeSystem::FrequentFlyer> new_waiting_list4;

    new_waiting_list4.emplace_back(2, NewUnknownAirlineUpgradeSystem::FrequentFlyer::PLATINUM, 101, "Sal");
    new_waiting_list4.emplace_back(1, NewUnknownAirlineUpgradeSystem::FrequentFlyer::GOLD,     102, "Liam");
    new_waiting_list4.emplace_back(5, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SUPER,    105, "David");
    new_waiting_list4.emplace_back(4, NewUnknownAirlineUpgradeSystem::FrequentFlyer::GOLD,     104, "Michelle");
    new_waiting_list4.emplace_back(6, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SILVER,   103, "Morgan");
    new_waiting_list4.emplace_back(3, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SUPER,    108, "Gavin");
    new_waiting_list4.emplace_back(7, NewUnknownAirlineUpgradeSystem::FrequentFlyer::SILVER,   106, "Matt");

    std::cout << "**Forth Test** \n";
    nua4->insertRequests(new_waiting_list4);
    nua4->systemUpgrade(2, 4);

    std::cout << "Highest-Priority Flyers:" << "\n\n";
    for(int i = 0; i < nua4->returned_passengers.size(); i++)
    {
       std::cout << nua4->returned_passengers[i].toString() << "\n";
    }

    delete nua;
    delete nua2;
    delete nua3;
    delete nua4;

    return 0;
}
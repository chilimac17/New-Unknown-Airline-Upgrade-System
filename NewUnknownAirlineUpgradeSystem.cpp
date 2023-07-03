#include "NewUnknownAirlineUpgradeSystem.hpp"

#include <vector>
#include <iostream>
#include <string>

namespace NewUnknownAirlineUpgradeSystem {

//------------------------------------------------------------------------------
void NUASystem::systemUpgrade(int p_num_requests, int p_num_cancellations)
{
    while(true)
    {
        if ((returned_passengers.size() == p_num_requests    ) && 
            (cancel_counter             == p_num_cancellations)    )
        {
            break;
        }

        if (cancel_counter < p_num_cancellations)
        {
            FrequentFlyer cancelled_passenger;
            
            cancelled_passenger = waiting_list.removeMax();
            cancel_counter++;
        }

        if (returned_passengers.size() < p_num_requests)
        {
            FrequentFlyer added_passenger;
            added_passenger = waiting_list.removeMax();
            returned_passengers.emplace_back(added_passenger);
        }
    }

    cancel_counter = 0;
}

//------------------------------------------------------------------------------
void NUASystem::insertRequests(const std::vector<FrequentFlyer> &p_unorganized_waiting_list)
{
    for(int i = 0; i < p_unorganized_waiting_list.size(); ++i)
    {
        waiting_list.insert(p_unorganized_waiting_list[i]);
    }
}
    
}

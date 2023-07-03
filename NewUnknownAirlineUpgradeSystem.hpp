#pragma once

#include "MaxHeap.hpp"

#include <iostream>
#include <vector>

namespace NewUnknownAirlineUpgradeSystem {
    
class NUASystem
{
public:

    waitingList::MaxHeap waiting_list{10};
    
    std::vector<FrequentFlyer> returned_passengers;
    
    int cancel_counter{};
    
    NUASystem() = default;

    ~NUASystem() 
    {
        //std::cout << "size:" << returned_passengers.size() << "\n";
    }

    void systemUpgrade(int p_num_requests, int p_num_cancellations);

    void insertRequests(const std::vector<FrequentFlyer> &p_unorganized_waiting_list);
};

}

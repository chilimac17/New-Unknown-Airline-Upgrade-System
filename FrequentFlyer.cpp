#include "FrequentFlyer.hpp"

#include <string>
#include <sstream>

namespace NewUnknownAirlineUpgradeSystem {

//------------------------------------------------------------------------------
bool FrequentFlyer::operator==(const FrequentFlyer &p_frequent_flyer)
{
    return confirmation_number == p_frequent_flyer.confirmation_number;
}

//------------------------------------------------------------------------------
bool FrequentFlyer::operator>(const FrequentFlyer &p_frequent_flyer)
{
    bool status{};
        
    if(current_status > p_frequent_flyer.current_status)
    {
        status = true;
    }
    else if(current_status == p_frequent_flyer.current_status)
    {
        if(wait_time > p_frequent_flyer.wait_time)
        {
            status = true;
        }
    }
    
    return status;
}

//------------------------------------------------------------------------------
bool FrequentFlyer::operator<(const FrequentFlyer &p_frequent_flyer)
{
    bool status{};

    if(current_status < p_frequent_flyer.current_status)
    {
        status = true;
    }
    else if(current_status == p_frequent_flyer.current_status)
    {
        if(wait_time < p_frequent_flyer.wait_time)
        {
            status = true;
        }
    }

    return status;
}

//------------------------------------------------------------------------------
std::string FrequentFlyer::toString() const
{
    std::stringstream frequent_flyer_info;

    frequent_flyer_info << "Flyer Name: " << flyer_name << "\n"
                        << "Confirmation Number: " << confirmation_number << "\n"
                        << "Flyer Status: " << current_status << "\n";

    return frequent_flyer_info.str(); 
}
 
} // NewUnknownAirlineUpgradeSystem::

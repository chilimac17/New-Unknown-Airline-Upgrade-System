#pragma once

#include <iostream>
#include <string>
#include <utility>

namespace NewUnknownAirlineUpgradeSystem {
    
class FrequentFlyer
{
public:

    enum FrequentFlyerStatus{
        INVALID   = -1,
        SILVER    =  0,
        GOLD      =  1,
        PLATINUM  =  2,
        SUPER     =  3
    };

    int confirmation_number{};

    int wait_time{};

    FrequentFlyerStatus current_status{INVALID};

    std::string flyer_name;

    FrequentFlyer(int p_confirmation_num, FrequentFlyerStatus p_current_stat, int p_wait_time, std::string p_flyer_name)
         : confirmation_number(p_confirmation_num),
           current_status     (p_current_stat),
           wait_time          (p_wait_time),
           flyer_name         (p_flyer_name)
    {}

    FrequentFlyer() = default;

    ~FrequentFlyer()
    {
        /*std::cout << "\t\tDTOR FrequentFlyer\n";*/
    }

    bool operator==(const FrequentFlyer &p_frequent_flyer);

    bool operator>(const FrequentFlyer &p_frequent_flyer);

    bool operator<(const FrequentFlyer &p_frequent_flyer);

    void swap(FrequentFlyer &p_rhs) noexcept
    {
        std::swap(confirmation_number, p_rhs.confirmation_number);
        std::swap(wait_time,           p_rhs.wait_time);
        std::swap(current_status,      p_rhs.current_status);
        std::swap(flyer_name,          p_rhs.flyer_name);
    }

    std::string toString() const;

};

} // NewUnknownAirlineUpgradeSystem::

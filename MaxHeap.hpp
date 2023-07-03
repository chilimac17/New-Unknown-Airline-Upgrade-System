#pragma once

#include "FrequentFlyer.hpp"

#include <iostream>
#include <vector>

namespace waitingList {
    
class MaxHeap
{
public:

    int size{};
    
    int max_size{};

    std::vector<NewUnknownAirlineUpgradeSystem::FrequentFlyer> bin_heap_pq{};
    
    MaxHeap(int p_max_size) : max_size(p_max_size), bin_heap_pq(max_size)
    {}
    
    ~MaxHeap()
    {
       /* std::cout << "\tDTOR MaxHeap\n";*/
    }

    int getParent(int p_pos);

    int getLeftChild(int p_pos);

    int getRightChild(int p_pos);

    bool isNodeALeaf(int p_pos);

    void swap(int p_final_pos, int p_start_pos);

    void maxHeapify(int p_posn);
    
    NewUnknownAirlineUpgradeSystem::FrequentFlyer removeMax();

    void insert(const NewUnknownAirlineUpgradeSystem::FrequentFlyer &p_frequent_flyer);
};

} // waitingList

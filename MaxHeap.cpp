#include "MaxHeap.hpp"

namespace waitingList {

//------------------------------------------------------------------------------
int MaxHeap::getParent(int p_pos)
{
    return (p_pos - 1) / 2;
}

//------------------------------------------------------------------------------
int MaxHeap::getLeftChild(int p_pos)
{
    return (p_pos * 2) + 1;
}

//------------------------------------------------------------------------------
int MaxHeap::getRightChild(int p_pos)
{
    return (p_pos * 2) + 2;
}

//------------------------------------------------------------------------------
bool MaxHeap::isNodeALeaf(int p_pos)
{
    return (p_pos > (size / 2)) && p_pos <= size;
}

//------------------------------------------------------------------------------
void MaxHeap::swap(int p_final_pos, int p_start_pos)
{
    if(     (p_final_pos < bin_heap_pq.size()) && 
            (p_start_pos < bin_heap_pq.size())    )
    {
        bin_heap_pq[p_final_pos].swap(bin_heap_pq[p_start_pos]);
    }
}

//------------------------------------------------------------------------------
void MaxHeap::maxHeapify(int p_pos)
{
    if(isNodeALeaf(p_pos))
    {
        return;
    }

    if(     (bin_heap_pq[p_pos] < bin_heap_pq[getLeftChild(p_pos)] ) || 
            (bin_heap_pq[p_pos] < bin_heap_pq[getRightChild(p_pos)])    )
    {
        if(bin_heap_pq[getLeftChild(p_pos)] > bin_heap_pq[getRightChild(p_pos)])
        {
            swap(p_pos, getLeftChild(p_pos));
            maxHeapify(getLeftChild(p_pos));
        }
        else
        {
            swap(p_pos, getRightChild(p_pos));
            maxHeapify(getRightChild(p_pos));
        }
    }
}

//------------------------------------------------------------------------------
NewUnknownAirlineUpgradeSystem::FrequentFlyer MaxHeap::removeMax()
{
    NewUnknownAirlineUpgradeSystem::FrequentFlyer front_item; 
    
    if((size > 1) && (size < bin_heap_pq.size()))
    {
        front_item.swap(bin_heap_pq[0]);
        
        bin_heap_pq[0].swap(bin_heap_pq[--size]);
        
        maxHeapify(0);
    }
    
    return front_item;
}

//------------------------------------------------------------------------------
void MaxHeap::insert(const NewUnknownAirlineUpgradeSystem::FrequentFlyer &p_frequent_flyer)
{
    bin_heap_pq[size] = p_frequent_flyer;

    int current_pos = size;
    
    while(bin_heap_pq[current_pos] > bin_heap_pq[getParent(current_pos)])
    {
        swap(current_pos, getParent(current_pos));

        current_pos = getParent(current_pos);
    }

    ++size;
}

}

//
//  sorting.cpp
//  c++
//
//  Created by Kavit Shah on 6/1/21.
//

#include "sorting.hpp"
using namespace std;


void sorting() {
    vector<int> data = {43, 45,32, 54, 12, 55, 60, 87, 21, 35, 79, 64};
    // sort(data.begin(), data.end());

    // Partial Sort with order
    // partial_sort(data.begin(), data.begin() + 5, data.end());
    // partial_sort(data.begin(), data.begin() + 5, data.end(), greater<int>());
    
    // last 5 students without order
    // nth_element(data.begin(), data.begin() + 5, data.end());
    // first 5 students
    // nth_element(data.begin(), data.begin() + 5, data.end(), greater<int>());
    
    // median
    // nth_element(data.begin(), data.begin() + data.size()/2, data.end());
    // cout << "media - " << data[data.size()/2] << endl;
    // 2nd smallest element
    // nth_element(data.begin(), data.begin() + 2, data.end());
    // 2nd largest element
    // nth_element(data.begin(), data.begin() + 2, data.end(), greater<int>());
    
    // partition around a number
    // partition(data.begin(), data.end(), [](int x){ return  x < 50;});
    // stable_partition(data.begin(), data.end(), [](int x){ return  x < 50;});
    printVec(data);
    
}

void heap()
{
    vector<int> myVec = {3,2,4,5,7,8,10};
    make_heap(myVec.begin(), myVec.end());
    printVec(myVec);

    // Remove the largest item
    pop_heap(myVec.begin(), myVec.end());
    myVec.pop_back();
    printVec(myVec);

    // Add new element
    myVec.push_back(100);
    push_heap(myVec.begin(), myVec.end());
    printVec(myVec);
}

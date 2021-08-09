//
//  deque.cpp
//  c++
//
//  Created by Kavit Shah on 5/17/21.
//

#include "deque.hpp"

#ifndef deque_hpp
#define deque_hpp

using namespace std;

void dequeBasics()
{
    deque<int> d = {4, 5, 6};
    d.push_back(7);
    d.push_front(3);

    for_each(d.begin(), d.end(), [](int i){
        cout << "value = " << i << std::endl;
    });
    
    // deque also provides contiguous memory allocation.
    // Hence, it's possible to have random access.
    cout << "value = " << d[2] << endl;

}
#endif /* deque_hpp */

//
//  deque.hpp
//  c++
//
//  Created by Kavit Shah on 5/17/21.
//

#ifndef deque_hpp
#define deque_hpp

#include <stdio.h>
#include <deque>
using namespace std;
/**
      --------------------
   <--- |   |   |   |   | --->
      --------------------
 * Properties of deque
 * 0. Vector can grow at the begining and end 
 * 1. Insert/remove at the begining and end takes O(1) time
 * 2. Insert/remove in the middle takes           O(n) time
 * 3. Searching an element takes                  O(n) time
 */

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

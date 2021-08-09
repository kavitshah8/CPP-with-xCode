//
//  list.cpp
//  c++
//
//  Created by Kavit Shah on 5/17/21.
//

#include "list.hpp"

#include <iostream>
#include <list>

using namespace std;

/**
 * list is basically a doubly linked list
 * forward_list is a singly linked list
 * Properties:
 * 1. Insert and remove at begin, middle, end takes O(1) time
 * 2. Searching an element takes                    O(n) time
 * 3. no random access, meaning no operator []
 */

void listBasics()
{
    list<int> intList = {3, 4, 5};
    intList.push_back(6); // {3, 4, 5, 6}
    intList.push_front(1); // {1, 3, 4, 5, 6}

    /**
     * Why is list slower than vector or deque for finding?
     * https://youtu.be/gxZJ5JNuWMY?t=558
     * List is non contiguous memory. Hence, it has more cache misses and page faults.
     */

    // Iterator: https://www.cplusplus.com/reference/iterator/
    list<int>::iterator itr = find(intList.begin(), intList.end(), 3);
    intList.insert(itr, 2); // {1, 2, 3, 4, 5, 6}

    itr++;
    intList.erase(itr); // {1, 2, 3, 5, 6}

    for_each(intList.begin(), intList.end(), [](int i) {
        cout << "item = " << i << endl;
    });

    // ONLY list can SPLICE
    list<int> list1 = {3, 4, 5};
    list<int> list2 = {0, 1, 2};

    list1.splice(list1.begin(), list2, list2.begin(), list2.end()); // O(1)
    
    for_each(list1.begin(), list1.end(), [](int i) {
        cout << "list 1 = " << i << endl;
    });
    
    cout << "list 2 size = " << list2.size() << endl;
}

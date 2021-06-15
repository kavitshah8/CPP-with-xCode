//
//  sorting.hpp
//  c++
//
//  Created by Kavit Shah on 6/1/21.
//

#ifndef sorting_hpp
#define sorting_hpp

#include "utils.hpp"

// https://youtu.be/TZv5qHU2AMQ

/**
 * Requires random access iterator:
 * Hence, works with vector, deque, native array, container array
 * Associative containers do not need sorting anyways
 *
 * partial_sort
 * nth_element
 */

void sorting();

/**
 * 1. First element is always the largest
 *
 * 2. Add/Remove takes O(log(n)) time
 *
 * 3. Used for implementing Priority Queue
 *
 * 4. API: make_heap, push_heap, pop_heap, sort_heap
 */
void heap();

#endif /* sorting_hpp */

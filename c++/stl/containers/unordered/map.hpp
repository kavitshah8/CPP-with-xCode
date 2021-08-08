//
//  map.hpp
//  c++
//
//  Created by Kavit Shah on 5/20/21.
//

#ifndef map_hpp
#define map_hpp

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

/**
            | map                            | unordered_map
Implementation  | Red-Black Tree          | Hash Table
search time        | log(n)                          | O(1) -> Average, O(n) -> Worst Case
Insertion time     | log(n)                          | Same as search
::lower_boud      | Yes                             | No
::load_factor       | No                              | Yes

 * Properties of unordered containers
 * Fastest search/insert at any place  :  O(1) amortized
 * Associative containers take            : O(log(n)) gauranteed
 * Sequence containers
 *  vector, deque takes                      : O(n)
 *  list takes                                       : O(1) insert, O(n) to find
 */

void basicsOfUnorderedSet();

void HashTableAPIs();

/**
 * Implemented using Hash Table
 * Find amortized Time: O (1)
 *  Sequence : O(n)
 *  Associative container: O (long(n))
 */
void basicsUnorderedMap();

void iterateMap(const unordered_map<char, int> &myMap);

void gotchaWithMap();

#endif /* map_hpp */

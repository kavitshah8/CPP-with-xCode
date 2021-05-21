//
//  map.hpp
//  c++
//
//  Created by Kavit Shah on 5/18/21.
//

#ifndef map_hpp
#define map_hpp

#include <stdio.h>
#include <map>
#include <utility>

using namespace std;

/**
 * Implemented using Binary Trees
 * Always sorted, but uses Key : Value pair
 * Insertion                              : O(log(n)), can be O(1)
 * Finding / Deletion                : O(log(n))
 * Traversing                            : slow
 * Radom Access/ [] operator : No
 */
void basicsOfMap()
{
    map<string, int> m;
    
    m.insert(make_pair("a", 10));
    m.insert(make_pair("b", 20));
    m.insert(make_pair("c", 30));
    
    for_each(m.begin(), m.end(),[](auto item){
        std::cout << item.first << " " << item.second << std::endl;
    });
}
#endif /* map_hpp */

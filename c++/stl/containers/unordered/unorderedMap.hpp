//
//  map.hpp
//  c++
//
//  Created by Kavit Shah on 5/20/21.
//

#ifndef map_hpp
#define map_hpp

#include <stdio.h>
#include <unordered_map>

using namespace std;

/**
 * Implemented using Hash Table
 * Find amortized Time: O (1)
 *  Sequence : O(n)
 *  Associative container: O (long(n))
 */
void basicsUnorderedMap()
{
    unordered_map<string, string> days = {{"S", "Sunday"}, {"M", "Monday"}};
    
    unordered_map<string, string>::iterator itr = days.find("S");
    if (itr != days.end())
    {
        cout << *itr << endl;
    }
}
#endif /* map_hpp */

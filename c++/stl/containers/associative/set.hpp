//
//  set.hpp
//  c++
//
//  Created by Kavit Shah on 5/18/21.
//

#ifndef set_hpp
#define set_hpp

#include <stdio.h>
#include <set>

using namespace std;

/**
 * Always sorted, implemented using Binary Trees
 * Insertion                              : O(log(n)), can be reduced to O(1)
 * Searching / Erasing             : O(log(n))
 * Traversing                            :  Slow
 * Radom Access/ [] operator : No
 */

void basicsOfSet()
{
    
    set<int> s;
    set<int>::iterator itr1;
    set<int>::iterator itr2;
    pair<set<int>::iterator, bool> ret;
    
    {
        s.insert(3); // {3}
        s.insert(1); // {1, 3}
        s.insert(2); // {1, 2, 3}, takes O(log(n))
        
        // insert() takes an optional iterator
        // it does not insert before iterator
        // it uses iterator as a hint, O(log(n)) => O(1)
        itr1 = s.find(1);
        s.insert(itr1, 5);
        
        // insert also returns a pair of values
        ret = s.insert(4);
        if (!ret.second) {
            cout << *ret.first << endl;
        }
    }
    
    {
        // Finding takes O(log(n))
        // Sequence containers do not have find, as it takes linear time which is slow
        itr2 = s.find(3);
        // read only, returns a const value
        // it corrupts the DS
        cout << *itr2 << endl;
        // *itr2 = 10;
    }
    
    {
        // You can remove item using iterator and value
        s.erase(itr2); // removes 3
        s.erase(4);  // Uses find and erase, as find is logarithmic, erase is too
        // Note: sequence containers do not provide such features

    }
    
    {
        for_each(s.begin(), s.end(), [](int i){
            cout<<i<<endl;
        });
    }
    

}
#endif /* set_hpp */

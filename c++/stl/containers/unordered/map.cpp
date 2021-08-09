//
//  map.cpp
//  c++
//
//  Created by Kavit Shah on 5/20/21.
//

#include "map.hpp"

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

void basicsOfUnorderedSet()
{
    unordered_set<string> s = {"foo", "bar"};
    // Insert
    s.insert("zoo"); // O(1)
    
    vector<string> vs = {"hoo" , "lala"};
    s.insert(vs.begin(), vs.end());
    
    // Find
    auto itr = s.find("foo");
    if (itr!=s.end())
        cout << *itr << endl;
}

void HashTableAPIs()
{
    unordered_set<string> myset = {"a", "b", "c"};
    
    cout << myset.load_factor() << endl;
    cout << myset.bucket("a") << endl;
    cout << myset.bucket_count() << endl;
}
/**
 * Implemented using Hash Table
 * Find amortized Time: O (1)
 *  Sequence : O(n)
 *  Associative container: O (long(n))
 */
void basicsUnorderedMap()
{
    unordered_map<string, string> days = {{"S", "Sunday"}, {"M", "Monday"}};
    
    auto itr = days.find("S");
    if (itr != days.end())
    {
        std::string s = itr->first;
        cout << s << endl;
    }

    for_each(days.begin(), days.end(), [](auto pair) {
        cout << pair.first << "=" << pair.second << endl;
    });

}

void iterateMap(const unordered_map<char, int> &myMap)
{
    for (auto item : myMap) {
        cout << item.first <<  "==" <<  item.second << endl;
    }
    // for_each(myMap.begin(), myMap.end(), [](auto item){
    //     cout << item.first << item.second << endl;
    // });
}

void gotchaWithMap()
{
    unordered_map<char, int> myMap = {{'a', 1}, {'b', 2},{'c', 3}};
    cout << myMap.at('a') << endl;
    
    // insert
    myMap['d'] = 4;
    myMap.insert(make_pair('e', 5));
    
//    printMap(myMap);
}


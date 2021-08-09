//
//  map.cpp
//  c++
//
//  Created by Kavit Shah on 5/18/21.
//

#include "map.hpp"

using namespace std;

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

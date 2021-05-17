//
//  array.hpp
//  c++
//
//  Created by Kavit Shah on 5/17/21.
//

#ifndef array_hpp
#define array_hpp

#include <stdio.h>
#include <array>

using namespace std;
void stlArray()
{
    int a[3] = {1, 2, 3};
    
    // stl array allows you to use convenient methods of stl
    // being, end, size, swap
    array<int, 3> b = {1, 2, 3};
    
    for_each(b.begin(), b.end(), [](int i) {
        cout << i << endl;
    });
    
    // Is a different type
    array<int, 4> c = {1, 2, 3, 4};
    
}
#endif /* array_hpp */

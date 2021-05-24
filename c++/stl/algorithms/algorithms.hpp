//
//  algorithms.hpp
//  c++
//
//  Created by Kavit Shah on 5/21/21.
//

#ifndef algorithms_hpp
#define algorithms_hpp

#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

/**
 * Algos are mainly loops
 */
void printVec(vector<int> myVec) {
    cout << "========================" << endl;
    for_each(myVec.begin(), myVec.end(), [](int i){
        cout << i << endl;
    });
    cout << "========================" << endl;
}

void algo1()
{
    vector<int> myVec = {21, 31, 61, 51, 41, 11, 71, 81, 91};
    vector<int>::iterator itr = min_element(myVec.begin(), myVec.end()); // itr -> 11
    
    // Note1: Algos always process in half open ways [begin, end)
    sort(myVec.begin(), itr); // itr -> 11
    printVec(myVec); // { 21, 31, 41, 51, 6, 11, 71, 81, 91 }
    
    // itr is tied to the memory location, not the value
    reverse(itr, myVec.end()); // itr -> 91
    printVec(myVec);  // {21, 31, 41, 51, 61, 91, 81, 71, 11}
    
    // Note2: two ranges of data
    vector<int> vec2(3);
    // vec2 needs at least 3 spaces. Not safe. C++ compromises safety for efficiency and flexibility
    copy(
         myVec.begin(), myVec.begin() + 5,   // source range
         vec2.begin()                       // Destination
         );
    printVec(vec2);
    
    // Note3:
    vector<int> vec3, vec4;
    // Inserting instead of overwriting, not efficient
    // insert one item at a time
    copy(itr, myVec.end(), back_inserter(vec3));
    printVec(vec3);

    // Efficient and safe
    vec4.insert(vec4.end(), itr, myVec.end());
    printVec(vec4);
    
    // Note4: works with native arrays
    int arr[3] = {10, 5, 3};
    sort(arr, arr+3);
    for_each(arr, arr+3, [](int i){
        cout << i << endl;
    });
    
}
#endif /* algorithms_hpp */

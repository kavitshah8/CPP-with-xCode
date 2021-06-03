//
//  nonModifying.cpp
//  c++
//
//  Created by Kavit Shah on 5/31/21.
//

#include "nonModifying.hpp"

void nonMod() {
    vector<int> data = {1, 1, 2, 2, 2, 32, 12, 33, 33, 45, 67, 54, 98, 9, 91, 98};
    
    // 1. Counting
    cout << "#2 = " << count(data.begin(), data.end(), 2) << endl;
    cout << "#<20 = " << count_if(data.begin(), data.end(), [](int x){return x >20;}) << endl;
    
    // 2. Min / Max
    cout << "First MaxElement = " << *max_element(data.begin(), data.end()) << endl;
    cout << "Max = " << *max_element(data.begin(), data.end(),[](int x, int y){ return x%10 < y%10;}) << endl;
    
    // first min and last max
    std::pair<vector<int>::iterator, vector<int>::iterator> itr = minmax_element(data.begin(), data.end());
    cout << "min = " << *itr.first << " max = " << *itr.second << endl;

    // 3. Linear searching (used with non sorted data)
    cout << "find = " << *find(data.begin(), data.end(), 12)<< endl;
    cout << "find = " << *find_if(data.begin(), data.end(), [](int x){ return x > 20;})<< endl;
    cout << "find = " << *find_if_not(data.begin(), data.end(), [](int x){ return x <95;})<< endl;
    
    
    cout << "search = " << *search_n(data.begin(), data.end(), 3, 2) << endl;
    
    //sub range
    vector<int> sub = {45, 67};
    cout << "sub range using search = " << *search(data.begin(), data.end(), sub.begin(), sub.end()) << endl;
    cout << "sub range w find_end = " << *find_end(data.begin(), data.end(), sub.begin(), sub.end()) << endl;
    
    // search ANY OF: find_first_of, adjacent_find
    string s = "hello world";
    string f = "world";
    cout << "first any of = " << *find_first_of(s.begin(), s.end(), f.begin(), f.end()) << endl;
//    cout << "first any of = " << *find_first_of(data.begin(), data.end(), sub.begin(), sub.end(), [](int x, int y){ return x==y*2;}) << endl;
    
    /**
     *  4. comaparing ranges: equal, is_permutation, mismatch, lexicographical_compare
     */

    /**
     *  5. checking attributes: is_sorted, is_partitioned, is_heap
     */

    cout << "all of = " << all_of(data.begin(), data.end(), [](int i){ return i < 80;}) << endl;
    cout << "all of = " << any_of(data.begin(), data.end(), [](int i){ return i < 80;}) << endl;
    cout << "all of = " << none_of(data.begin(), data.end(), [](int i){ return i < 80;}) << endl;
}

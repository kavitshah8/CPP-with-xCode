//
//  sortedDataAlgorithms.cpp
//  c++
//
//  Created by Kavit Shah on 6/3/21.
//

#include "sortedDataAlgorithms.hpp"

void playingWithSortedData()
{
    vector<int> data = {90,21, 324,543,21,12,54,65};
    vector<int> data2 = {543,21, 90,12,54,21, 324,65};
    
    sort(data.begin(), data.end());
    sort(data2.begin(), data2.end());
    bool found = binary_search(data.begin(), data.end(), 90);
    cout << found << endl;
    
    vector<int> s = {12, 65, 90};
    // both vectors need to be sorted
    bool include = includes(data.begin(), data.end(), s.begin(), s.end());
    cout << include << endl;
    
    vector<int> in = {1, 2, 3};
    vector<int> out = {0, 0, 0, 0, 0, 0};

    merge(in.begin(), in.end(), // source 1 sorted
          s.begin(), s.end(),   // source 2 sorted
          out.begin());         // output
    printVec(out);
}


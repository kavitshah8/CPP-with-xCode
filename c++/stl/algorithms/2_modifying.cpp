//
//  2_modifying.cpp
//  c++
//
//  Created by Kavit Shah on 6/1/21.
//

#include "2_modifying.hpp"


vector<int> data = {10, 11, 43, 54, 65, 87, 21, 90};
vector<int> data2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
vector<int> data4 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
vector<string> data3 = {"hi", "hello"};
vector<int>::iterator itr;
pair<vector<int>::iterator, vector<int>::iterator> itr_pair;

void modify()
{
//    move(data.begin(), data.end(), data2.begin());
//    printVec(data2);
    
    transform(
        data.begin(), data.end(), // source
        data2.begin(),            // destination
        [](int x){ return  x*x;}
    );
    printVec(data2);
    transform(
        data.begin(), data.end(),   // source 1
        data2.begin(),              // source 2
        data4.begin(),              // source 3
        [](int x, int y){ return  x+y;}
    );
    printVec(data4);
}

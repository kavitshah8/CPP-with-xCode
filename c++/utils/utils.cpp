//
//  utils.cpp
//  c++
//
//  Created by Kavit Shah on 5/31/21.
//
//
#include "utils.hpp"
using namespace std;

void printVec(vector<int> myVec) {
    cout << "========================" << endl;
    for_each(myVec.begin(), myVec.end(), [](int i){
        cout << i << endl;
    });
    cout << "========================" << endl;
}



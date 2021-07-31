//
//  utils.cpp
//  c++
//
//  Created by Kavit Shah on 5/31/21.
//
//
#include "utils.hpp"

using namespace std;

void printMap(std::map<char, int> myMap) {
    cout << "========================" << endl;
    for (auto item: myMap)
        cout << item.first << ":" << item.second << endl;
    cout << "========================" << endl;
}

void printVec(vector<int> myVec) {
    cout << "========================" << endl;
    for (auto i : myVec)
        cout << i << endl;
    cout << "========================" << endl;
}



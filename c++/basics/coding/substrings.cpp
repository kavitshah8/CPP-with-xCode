//
//  substrings.cpp
//  c++
//
//  Created by Kavit Shah on 7/31/21.
//

#include "substrings.hpp"

// basically two ways of generating all the possible substrings of a string
// still some bugs. fix it later.
void generateAllSubstrings(string s) {
    for (int i = 0; i < s.length(); i++)
        for (int j = i; j < s.length(); j++)
            cout << s.substr(i,j) << endl;
    
    cout << "====" << endl;
}

void generateAllSubstringsRecursion(string s, int left, int right) {
    if (left > right || left == right) return;
    cout << s.substr(left, right) << endl;
    generateAllSubstringsRecursion(s, left, right - 1);
    generateAllSubstringsRecursion(s, left + 1, right);
}

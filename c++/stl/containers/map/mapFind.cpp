#include <iostream>
#include <map>

using namespace std;
// To compile: g++ map.cpp -std=c++11
void mainFind() {
    // std::map::find()
    map<char,int> mymap;
    char c;
    mymap ['a']=101;
    mymap ['c']=202;
    mymap ['f']=303;
    
    // http://www.cplusplus.com/reference/map/map/count/
    // Do the same example using std::map::find instead of std::map::count

    // there are four ways to find a key in a map
    // []
    // .at()
    // .count()
    // .find()
    
    for (c='a'; c<'h'; c++)
    {
        cout << c;
        map<char, int>::iterator iterator2;
        iterator2 = mymap.find(c);
        if (iterator2 != mymap.end())
            cout << " is an element of mymap." << iterator2->second << "\n";
        else 
            cout << " is not an element of mymap.\n";
    }
}


void searchingMap1() {
    std::map<string, int> myMap = { {"a", 1}, {"b", 2}, {"c", 3}, {"f", 4}, {"h", 5} };
    
    cout << "Elelement in the map : " << endl;
    auto itrLower = myMap.lower_bound("c");
    auto itrUpper = myMap.upper_bound("c");
    cout << itrLower->first << " : " << itrLower->second << endl;
    cout << itrUpper->first << " : " << itrUpper->second << endl;
    
    cout << "Elelement not in the map : " << endl;
    itrLower = myMap.lower_bound("d");
    itrUpper = myMap.upper_bound("d");
    cout << itrLower->first << " : " << itrLower->second << endl;
    cout << itrUpper->first << " : " << itrUpper->second << endl;

    //std::map::equal-range
}

#include <iostream>
#include <map>

// To compile: g++ map.cpp -std=c++11
int main() {
    // std::map::find()
    std::map<char,int> mymap;
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
        std::cout << c;
        std::map<char, int>::iterator iterator2;
        iterator2 = mymap.find(c);
        if (iterator2 != mymap.end())
            std::cout << " is an element of mymap." << iterator2->second << "\n";
        else 
            std::cout << " is not an element of mymap.\n";
    }
}

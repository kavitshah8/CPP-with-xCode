//
//  1_streams.cpp
//  c++
//
//  Created by Kavit Shah on 6/20/21.
//

#include "1_streams.hpp"
#include <iostream>
#include <fstream>
using namespace std;

void streamBasics()
{
    cout << " Hello World" << endl;
    
    // cout   : global member variable of ostream class
    // <<     : ostream& ostream::operator<< (string s);
    
    // What is a stream?
    // Serial IO for external devices (files/terminals, network)
    
    // What is serial? - No random access
    
    string s {"Hello"};
    s[3] = 't';   // Random access
    // cout[3];  // error
    
    {
        ofstream of("foo.too");
        of << "Hello World" << endl;
        of << bitset<16>(256) << endl;
    } // RAII
}

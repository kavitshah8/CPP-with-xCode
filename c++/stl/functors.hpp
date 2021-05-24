//
//  functors.hpp
//  c++
//
//  Created by Kavit Shah on 5/22/21.
//

#ifndef functors_hpp
#define functors_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

/**
 * Function objects (functors)
 * Benefits:
 * 1. More features than operator(), remembers states
 * 2. Can have it's own type
 * 3. Parameterized functions
 * 4. Provides callable objects
 */
class Functor {
public:
    // ctor
    Functor()
    {
        cout << "ctor is called" << endl;
    }
    
    // ctor
    Functor(int i)
    {
        cout << "ctor with one argument " << i << endl;
    }

    // Do not confuse with type conversion
    // Type comes after operator keyword
    // operator string () const { return "c"};
    void operator()(string s)
    {
        cout << "Functor called with " << s << endl;
    }
};

void basicFunctors()
{
    Functor f;
    f("Foo");
    
    // parameterized with int and then call with string argument
    Functor(9)("parameterized func");
}


// Parameterized functions and its need
// Option 1: global variables
// Option 2: Template functions, compile time

void add2(int i){
    cout << i + 2 << endl;
}

// int val has to be resolved at compile time
template <int val>
void addVal(int i)
{
    cout << val + i << endl;
}

// functor
class AddVal
{
public:
    int val;
    AddVal(int i): val(i) {}
    void operator()(int i) { cout << val + i << endl; }
};
void parameterizedFunctions()
{
    vector<int> vec = {2, 3, 4, 5};
    for_each(vec.begin(), vec.end(), add2);
    // does not compile
    int x = 10;
    // for_each(vec.begin(), vec.end(), addVal<x>);
    for_each(vec.begin(), vec.end(), AddVal(x));

}

// Built in functions: http://www.cplusplus.com/reference/functional/
// Used for algorithms

#endif /* functors_hpp */

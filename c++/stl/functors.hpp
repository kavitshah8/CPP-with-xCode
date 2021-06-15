//
//  functors.hpp
//  c++
//
//  Created by Kavit Shah on 5/22/21.
//

#ifndef functors_hpp
#define functors_hpp

#include <iostream>
#include <string>
#include <vector>
#include <set>

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
void builtInFunctors()
{
    int x = multiplies<int>()(3, 40);
    if (not_equal_to<int>()(x, 12))
        cout <<  x << endl;
}

// https://www.cplusplus.com/reference/functional/bind/
void add(int i, int j)
{
    cout << i + j << endl;
}

void parameterBinding()
{
    set<int> s = {2, 3, 4};
    vector<int> v;
    
    transform(s.begin(), s.end(), back_inserter(v), bind(multiplies<int>(), placeholders::_1, 10));
    
    for_each(v.begin(), v.end(), [](int i) { cout << i << endl;});

    for_each(v.begin(), v.end(), bind(add, placeholders::_1, 21));
}

// function template: https://www.cplusplus.com/reference/functional/function/
// converts any function into a functor

// (x > 20) || (x < 5)

void bind()
{
    vector<int> myVec = { 1, 2, 3, 4, 5, 25, 15, 20 };
    vector<int> myVec2;
    vector<int> myVec3;
    transform(myVec.begin(), myVec.end(),
              // can't do myVec2.begin()
              back_inserter(myVec2),
              bind(logical_or<bool>(),
                   bind(greater<int>(), placeholders::_1, 20),
                   bind(less<int>(), placeholders::_1, 5))
              );
    for_each(myVec2.begin(), myVec2.end(), [](int i) { cout << i << endl;});

    transform(myVec.begin(), myVec.end(),
              back_inserter(myVec3),
              [](int i){ return i < 5 || i > 20;}
              );
    
    for_each(myVec3.begin(), myVec3.end(), [](int i) { cout << i << "= "  << endl;});
}

bool lsb_less(int i, int j)
{
    return (i%10) < (j%10);
}

class Lsb_less{
public:
    bool operator() (int i, int j){
        return (i%10) < (j%10);
    };
};
// For associative containers like set, map
void needForFunctorsInSTL()
{
    // set<int> mySet = {11, 10, 12, 9, 8}; // {8, 9, 10, 11, 12}
    set<int, less<int>> mySet = {11, 10, 12, 9, 8};
    for_each(mySet.begin(), mySet.end(), [](int i){
//        cout << i << endl;
    });
    
//    auto f = function<bool(int, int)>(lsb_less);
    set<int, Lsb_less> mySet1 = {11, 10, 12, 9, 8};
    for_each(mySet1.begin(), mySet1.end(), [](int i){
        cout << i << endl;
    });
}

/**
 * Predicate:
 * A function or a functor
 * Returns boolean
 * Should be a pure function, because we can not assume that it will be called only once for each element
 */

void algo() {
    vector<int> myVec = {4, 7, 99, 80, 50};
    
    vector<int>::iterator itr = max_element(myVec.begin(), myVec.end(), [](int x, int y) {
        cout << "x = " << x << " y = " << y << endl;
        return x%10 < y%10;
    });
    
    cout << "max = " << *itr << endl;
}

#endif /* functors_hpp */

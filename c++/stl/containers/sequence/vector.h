#include <iostream>
#include <vector>
using namespace std;

/**
    --------------------
    |   |   |   |   | --->
    --------------------
 * Properties of vector
 * 0. Vector can grow only at the end of the vector
 * 1. Insert/remove at the end takes                        O(1) time
 * 2. Insert/remove at the begining and in the middle takes O(n) time
 * 3. Searching an element takes                            O(n) time
 */
void vectorIterations() {
    vector<int> v = {7, 5, 16, 8};
    
    // Three ways of iterating over vector 
    // 1. like an array
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << "v["<<i << "] = " <<  v[i] << endl;
    }
    
    // 2. Recommended way of iterating a vector
    // - Faster & works on all the sequence containers
    for_each(v.begin(), v.end(), [](int i) {
        cout << i << endl;
    });
    
    // 3. Since c++11
    for(int it : v) {
        // Copy of each item in the vector
        cout << it << '\n';
    }
    for (int& it: v) {
        // Real reference to each item in the vector
        it = 10; 
    }
 
    for_each(v.begin(), v.end(), [](int i) {
        cout << i << endl;
    });

}

void vectorBasics()
{
    // Create a vector containing integers
    vector<int> v; // vec.size() == 0
    
    // Add integers to vector<int>
    // vector<int> v = {7, 5, 16, 8};
 
    v.push_back(7);
    v.push_back(5);
    v.push_back(16);
    v.push_back(8); // vec.size() == 4

    // Random accessing vector elements
    // It's possible because vector provides contiguous memory allocation
    cout << v[2] << endl;    // No Range Check
    cout << v.at(2) << endl; // throws range_error exception of out of scope range
    

    // Vector is a dynamically allocated CONTIGUOUS array in a memory
    // Hence, you can access it like an array
    int *p = &v[0];
    p[3] = 60;
    cout << v.at(3) << endl;
}

/**
 * All three container types have below common APIs
 */
void commonAPI() {
    vector<int> common = {4, 5, 6, 7};
    // copy ctor
    vector<int> commonCopy(common);

    commonCopy.clear();

    common.swap(commonCopy);

    cout << commonCopy.size() << endl;
    cout << commonCopy.empty() << endl;
    
}

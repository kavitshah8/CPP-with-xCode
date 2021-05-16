#include <iostream>
#include <vector>
 
namespace vector {
void runners()
{
    // Create a vector containing integers
    std::vector<int> v ;
    
    std::cout << v.size() << std::endl;
    
    // Add integers to vector<int>
    // std::vector<int> v = {7, 5, 16, 8};
 
    v.push_back(25);
    v.push_back(13);
 
    // Iterate and print values of vector
    for(int n : v) {
        std::cout << n << '\n';
    }
}
};

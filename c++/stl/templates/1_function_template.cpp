#include <iostream>

template<typename T>
T square(T a) {
    return a*a;
}

// NOTE: code bloat
void F() {
    std::cout << square<int>(5) << std::endl;
    std::cout << square<double>(5.5) << std::endl;
    
    // For function templates, data type can be infered from the parameter 
    std::cout << square(5) << std::endl;
    std::cout << square(5.5) << std::endl;
}

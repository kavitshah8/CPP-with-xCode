#include <iostream>

namespace functionTemplate {

template<typename T>
T square(T a) {
    return a*a;
}

// NOTE: code bloat
void runner() {
    std::cout << square<int>(5) << std::endl;
    std::cout << square<double>(5.5) << std::endl;
    
    // Data Type infered from the parameter
    std::cout << square(5) << std::endl;
    std::cout << square(5.5) << std::endl;
}
}

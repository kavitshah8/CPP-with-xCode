#include <iostream>

// The format for declaring function templates with type parameters is:

// template <class identifier> function_declaration;
// template <typename identifier> function_declaration;

// template <class T>
template <typename T>
T max(T a, T b) { // function template
    return a > b ? a : b;
}

int main() {
    int a = 50, b = 6;
    const char* c = "C", *d = "D";
    // std::cout << "Max is = " << max<int> (a, b) << std::endl;
    // std::cout << "Max is = " << max<const char*> (c, d) << std::endl;
    std::cout << "Max is = " << max(a, b) << std::endl;
    std::cout << "Max is = " << max(c, d) << std::endl;
}
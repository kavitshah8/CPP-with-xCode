#include <iostream>

#define NAME(exp) { \
    std::cout << exp << std::endl; \
    std::cout << #exp << std::endl; \
} \

int main () {
    NAME("Kavit");
    return 0;
}
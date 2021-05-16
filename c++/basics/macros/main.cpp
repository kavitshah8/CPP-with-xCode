#include <iostream>

#define NAME(exp) { \
    std::cout << exp << std::endl; \
    std::cout << #exp << std::endl; \
} \

int mainTestMacro () {
    NAME("Kavit");
    return 0;
}
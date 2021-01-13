#include <iostream>

// Both syntax work
// using namespace::std;
using namespace std;

int main() {
    int a = 6;
    char b = 'B';
    // main.cpp:7:10: error: cannot initialize a variable of type 'char' with an lvalue of type 'const char [2]'
    // char b = "B";
    // No need to define type %d %c like printf, puts
    cout << a << " Hello World! " << b << endl;
    return 0;
}
#include "../Cube.h"
#include <iostream>

bool sendCubeByValue(Cube cube)
{
    std::cout << "Inside sendCube()" << std::endl;
    std::cout << "Returning from sendCube()" << std::endl;
    return true;
}

bool sendCubeByPointer(const Cube *c)
{
    return true;
}

bool sendCubeByReference(const Cube &c)
{
    return true;
}

Cube bar()
{
    std::cout << "Inside bar()" << std::endl;
    Cube a(10);
    std::cout << "Returning from bar()" << std::endl;
    return a;
}

/*

Variables can be created by three ways
    - By value
    - By reference
    - By pointer

In the same way, functions arguments and return type 
*/

int main()
{
    // Custom constructor was called.
    Cube a;
    // Custome copy constructor was called.
    Cube b = a;
    // Custom constructor was called.
    Cube x;
    // Custom assignment operator was called.
    // Note: no object concstruction was needed.
    x = b;

    // Custom one paramenter constructor was called
    Cube c(10);
    // Custome copy constructor was called
    Cube d = c;
    // Cube d = std::move(c); // If move ctor is not present, it will call copy ctor
    // No costructor will be called, only an alias will be created
    Cube &e = d; // By Reference
    // No costructor will be called
    Cube *f = &d; // By Pointer

    // Copy ctor will be called as it c has to be copied into sendCube's stack frame
    sendCubeByValue(c); // Pass By Value
    // No constructor will be called as we are passing an alias of an instance
    sendCubeByReference(c); // Pass by reference
    // No constructor will be called as we are passing a pointer to an instance
    sendCubeByPointer(&c); // Pass by pointer

    // Copy ctor will be called as returned obj from bar has to be copied onto main's stack frame
    // Ideally, one, copy, copy ctor should be called
    // Note: some how it does not call copy ???
    // Answer: https://www.reddit.com/r/cpp_questions/comments/fgwhxk/stack_vs_heap_clarification/fk7mnwm/
    // https://en.m.wikipedia.org/wiki/Copy_elision#Return_value_optimization
    Cube i = bar();

    return 0;
}
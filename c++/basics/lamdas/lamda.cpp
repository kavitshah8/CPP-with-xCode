#include <iostream>

// Function Pointers

// void (*foo)(int);

// foo* is a function pointer which takes int* argument and returns void *
// void *(*foo)(int *);

// Example 1: with no arguments and void return
void noop()
{
    std::cout << "no op function" << std::endl;
}
// noopFunc is a pointer to the function
void(*noopFunc)() = &noop;

// Below also works
//void(*noopFunc)() = noop;

typedef void(*fucntionPoiter)();
fucntionPoiter f = noop;

// Example 2: with one arguments and void return
void handleResponse(std::string response)
{
    std::cout << response << std::endl;
}
// responseHandeler is a pointer to the function
void(*responseHandler)(std::string) = handleResponse;

// Example 3: with one arguments and void return
std::string handleRequest(std::string url)
{
    return "Response";
}
std::string(*requestHandler)(std::string) = handleRequest;


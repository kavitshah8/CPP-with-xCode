#include <iostream>

void noop()
{
    std::cout << "no op function" << std::endl;
}
void(*noopFunc)() = noop;
typedef void(*fucntionPoiter)();

void handleResponse(std::string response)
{
    std::cout << response << std::endl;
}
void(*response)(std::string) = handleResponse;

std::string handleRequest(std::string url)
{
    return "Response";
}
std::string(*request)(std::string) = handleRequest;

fucntionPoiter f = noop;

#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono;

void process()
{
    std::this_thread::sleep_for(milliseconds(5000));
    
    std::cout << "Done with process" << std::endl;
}

int main()
{
    std::thread task(process);
    
    std::this_thread::sleep_for(milliseconds(1000));
    
    std::cout << "Done with Main, waiting for task" << std::endl;
    
    if (task.joinable())
        task.join();
    
    return 0;
}

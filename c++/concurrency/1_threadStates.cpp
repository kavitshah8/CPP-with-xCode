#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono;

void process()
{
    std::this_thread::sleep_for(milliseconds(5000));
    
    std::cout << "Done with process" << std::endl;
}

int mainTask()
{
    std::thread task(process);
    
    std::this_thread::sleep_for(milliseconds(1000));
    
    std::cout << "Done with mainTest, waiting for task" << std::endl;
    
    // Usually join() is called from the destructor of the class
    // To make sure before we delete the object, thread associated with the object terminates
    // If we forget to do that then process will terminate, resulting in an appliaction crash
    if (task.joinable())
        task.join();
    
    return 0;
}

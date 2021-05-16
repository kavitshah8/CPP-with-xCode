#include <iostream>
#include <thread>
#include <chrono>

void task() {
    int i = 0;
    while (true) {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "I am a task "<< i++ << std::endl;
    }
}

int mainDetached() {
    std::thread detachedWorker(task);
    // You may never use detach()
    // Programer should make sure all the resources are deleted properly
    // before the appliation terminates or mainTest() returns
    // detachedWorker.join(); // creates an infinite loop
    detachedWorker.detach();
    
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    return 0;
}

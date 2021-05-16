
#include <thread>
#include <chrono>

void counting(const char* name)
{
    while(true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        printf("Still counting \n");
    }
}

void mainDT()
{
    std::thread T1(counting, "Thread 1");
    T1.detach(); // Prints Still counting only twice
    std::this_thread::sleep_for(std::chrono::seconds(3));
//    T1.join(); // Prints forever, even after mainTest ends
}

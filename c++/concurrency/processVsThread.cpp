#include <thread>
#include <chrono>
#include <unistd.h>

void cpu_waster()
{
    printf("Thread ID %d \n", getpid);
    printf("Process ID %d \n", std::this_thread::get_id());
    while(true) continue;
}

//#include <iostream>
//#include "basics/threads/processVsThread.cpp"
//
//int mainTest(int argc, const char * argv[]) {
//    // insert code here...
//    printf("mainTest Process ID %d \n", getpid());
//    printf("mainTest Thread ID %d \n", std::this_thread::get_id());
//    std::thread t1(cpu_waster);
//    std::thread t2(cpu_waster);
//
//    while (true)
//    {
//        std::this_thread::sleep_for(std::chrono::seconds(5));
//    }
//    return 0;
//}

/**
 * scheduling threads is controlled by operating system
 * Order of execution Or time allocation for each thread is not guaranteed
 * Hence, do not rely on order of execution
*/

#include <thread>

bool isActive = true;

void countCalls(const char* name)
{
    unsigned int callCounter = 0;
    while(isActive)
    {
        callCounter++;
    }
    printf(" %s receveived %d calls \n", name, callCounter);
}

int main()
{
    std::thread thread1(countCalls, "thread1");
    std::thread thread2(countCalls, "thread2");
    std::this_thread::sleep_for(std::chrono::seconds(1));
//    set a breakpoint here to see both threads
    isActive = false;
    thread1.join();
    thread2.join();
    return 0;
}


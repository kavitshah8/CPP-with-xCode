#include "basics/threads/schedulingThreads.cpp"

int main()
{
    std::thread thread1(countCalls, "thread1");
    std::thread thread2(countCalls, "thread2");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    isActive = false;
    thread1.join();
    thread2.join();
    return 0;
}


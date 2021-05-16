#include <condition_variable>
#include <mutex>
#include <chrono>
#include <stdlib.h> 
#include <thread>

std::condition_variable cv;
std::mutex m;

void fooCV()
{
    std::unique_lock<std::mutex> lck(m);
    cv.wait(lck);
}

void bar()
{
    fooCV();
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    cv.notify_all();
}

void mainCV()
{
    bar();
}

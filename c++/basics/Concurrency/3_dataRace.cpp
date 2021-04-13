
#include <thread>
#include <iostream>
#include <vector>

// Shared resources. Potential source of the data race.
int counter;

// 1. std::atomic<int> counter;
// 2. protect it with mutex
// std::mutex m_mutex;

void worker()
{
    for(int i = 0; i < 10000; i++)
    {
        // 2. m_mutex.lock();
        // Both threads trying to modify the same shared resource
        counter++;
        // 2. m_mutex.unlock();
    }
}

int main()
{
    // Creating vector of threads for fun
    std::vector<std::thread> threadPool;
    
    std::thread t1;
    t1 = std::thread(worker);
    std::thread t2(worker);

    // Threads are not copyable
    threadPool.push_back(std::move(t1));
    threadPool.push_back(std::move(t2));
    
    for (std::thread &th : threadPool)
    {
        if (th.joinable()) {
            th.join();
        }
    }
    
    std::cout << counter << std::endl;
    
    return 0;
}

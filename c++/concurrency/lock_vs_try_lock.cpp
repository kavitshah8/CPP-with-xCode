#include <mutex>
#include <thread>
#include <chrono>
#include <iostream>
std::mutex pencil;
int shared_items = 0;

void shop_try_lock()
{
    int items_to_add = 0;
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    while (shared_items < 20) {
        if (items_to_add && pencil.try_lock())
        {
            shared_items += items_to_add;
            pencil.unlock();
            items_to_add = 0;
        }
        else
        {
            std::cout << "I am not accessing shared resources" << std::endl;
            items_to_add++;
        }
    }
}

void shop_lock()
{
    int items_to_add = 0;
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    while (shared_items < 20) {
        if (items_to_add)
        {
            pencil.lock();
            shared_items += items_to_add;
            pencil.unlock();
            items_to_add = 0;
        }
        else
        {
            std::cout << "I am not accessing shared resources" << std::endl;
            items_to_add++;
        }
    }
}

int mainLock()
{
    auto start_time = std::chrono::steady_clock::now();
    std::thread k(shop_lock);
    std::thread m(shop_lock);
    
//    std::thread k(shop_try_lock);
//    std::thread m(shop_try_lock);
    
    std::cout << "shared_items = "<< shared_items << std::endl;
    k.join();
    m.join();
    std::cout << "shared_items = "<< shared_items << std::endl;
    
    auto elapsed_time = std::chrono::steady_clock::now() - start_time ;
    std::cout << "Elapsed Time = " << elapsed_time.count() << std::endl;
    return 0;
}



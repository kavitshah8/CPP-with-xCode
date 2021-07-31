//
//  callbacks.cpp
//  c++
//
//  Created by Kavit Shah on 6/15/21.
//

#include "callbacks.hpp"

auto callback = [](){
    // things to not here is which thread this callback is called on
    puts("callback is called");
    auto t = std::this_thread::get_id();
    printf("%d \n = ", t);
    
};

void asyncFunction(std::function<void(void)> fp)
{
    puts("Async function is called");

    // Note: if you do
    // std::async(std::launch::async, [&](){ .. }
    // instead of
    // std::future<void> fu = std::async(std::launch::async, [&](){ .. }
    // then execution becomes sequential
    
//    std::future<void> fu = std::async(std::launch::async, [&](){
        std::this_thread::sleep_for(std::chrono::seconds(10));
        auto t = std::this_thread::get_id();
        printf("%d \n = ", t);
        fp();
//    });
    puts("After launching a thread");
}

void cbRunner()
{
    asyncFunction(callback);
}

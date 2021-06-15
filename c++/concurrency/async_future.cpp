//
//  async_future.cpp
//  c++
//
//  Created by Kavit Shah on 6/11/21.
//

#include "async_future.hpp"
#include "utils.hpp"
#include <future>

int returnString(std::future<int>& fu) {
    
    cout << "Waiting for future = " << endl;
    int x = fu.get();
    
    while (true) {
        cout << x << endl;
    }
    return x;
}

int runner()
{
    std::promise<int> t;
    std::future<int> fu = t.get_future();
    
    std::future<int> f = std::async(returnString, std::ref(fu));
    std::this_thread::sleep_for(std::chrono::seconds(5));
    
    t.set_value(400);
    cout << "Future lanuched" << endl;
//    cout << f.get() << endl;
    
    return 0;
}
// waiting for future
// future lauched
// 400
// 400

//
//  callable_objects.cpp
//  c++
//
//  Created by Kavit Shah on 6/15/21.
//

#include "callable_objects.hpp"
#include "functors.hpp"
#include <thread>
#include <future>


void callableRunner()
{
    
    // callable object, arguments is a popular pattern
    // std::async(), std::thread(), std::bind(), std::call_once()
    // More examples with thread
    
    Functor foo;
    
    std::thread t1(foo, "Copy");                            // copy_of_foo() in a different thread
    std::thread t2(std::ref(foo), "referece");              // foo() in a different thread
    std::thread t3(Functor(), "Functor()");                 // temp Functor() in a different thread
    std::thread t4(std::move(foo), "Moved");
    
    // Member function
    std::thread t5(&Functor::twoParam, foo, 8, "Hello");      // copy_of_foo_twoParam() in a different thread
    std::thread t6(&Functor::twoParam, &foo, 9, "Bye");       // foo_twoParam() in a different thread
    
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
}

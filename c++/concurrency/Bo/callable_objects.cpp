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
    Functor foo;
    std::async(std::launch::async, foo, "Foo");
//    std::thread t(foo, "Hi");
}


#include <thread>
#include <iostream>

int counter = 0;

void foo()
{
    for(int i = 0; i < 10000; i++)
    {
        // Both threads trying to modify the same shared resource
        counter++;
    }
}

int main()
{
    std::thread t1(foo);
    std::thread t2(foo);
    t1.join();
    t2.join();
    
    std::cout << counter << std::endl;
}


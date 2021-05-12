#include <iostream>
#include <thread>

using namespace std;
void task()
{
    int i =1;
    while (i<10)
    {
        cout<<i<<endl;
        i++;
    }
    
}

int main()
{
    // Note thread ends when it's task ends
    std::thread ta(task);
    
    bool f = true;
    while(f)
    {
        std::this_thread::sleep_for(5000ms);
        f = false;
    }
    return 0;
}

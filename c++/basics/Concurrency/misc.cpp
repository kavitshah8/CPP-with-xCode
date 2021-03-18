#include <ftw.h>
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int threadMain()
{
    
    auto callback = [](const char *fpath, const struct stat *sb,
        int typeflag) -> int {
        cout << fpath << endl;
        std::this_thread::sleep_for(2000ms);
        return 0;
    };

    int ret = ftw("/etc", callback, 1);
    cout << "after" <<endl;
    return ret;
}
int main()
{
    std::thread t1(threadMain);
    int i = 0;
    while(i<100){
        std::this_thread::sleep_for(1000ms);
        cout<<i<<endl;
        i++;
    }
    t1.join();
    return 0;
}

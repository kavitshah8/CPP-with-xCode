
#include <iostream>
#include <unistd.h>
#include <thread>
#include <shared_mutex>
#include <future>

#include "substrings.hpp"
using namespace std;


int main(int argc, char **argv)
{

    generateAllSubstrings("abc");
    generateAllSubstringsRecursion("abc", 0, 3);
    return 0;
}

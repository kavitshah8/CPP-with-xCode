//
//  main.cpp
//  c++
//
//  Created by Kavit Shah on 12/22/20.
//

#include <iostream>
#include "basics/lamdas/lamda.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    noop();
    f();
    std::cout<< request("https://google.com");
    response("!! Success !!");
    return 0;
}

//
//  callbacks.hpp
//  c++
//
//  Created by Kavit Shah on 6/15/21.
//

#ifndef callbacks_hpp
#define callbacks_hpp

#include <future>

void asyncFunction(std::function<void(void)> fp);
void cbRunner();
#endif /* callbacks_hpp */

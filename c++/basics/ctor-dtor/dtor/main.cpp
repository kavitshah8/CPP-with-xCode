#include "../Cube.h"
#include <iostream>

bool create_cube_on_stack() {
    Cube c;
    std::cout << "returning from create_cube_on_stack()"<< std::endl;
    return true;
}

bool create_cube_on_heap() {
    // new, delete, nullptr goes together
    Cube *c = new Cube();
    Cube *d = new Cube();
    std::cout<<"Before invoking delete"<<std::endl;
    delete c;
    std::cout<<"After invoking delete"<<std::endl;
    c = nullptr;
    return true;
}

int main() {
    // create_cube_on_heap();
    create_cube_on_stack();
    return 0;
}
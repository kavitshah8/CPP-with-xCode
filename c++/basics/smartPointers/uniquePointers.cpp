#include <iostream>
#include <memory>

class Entity {

    Entity()
    {
        std::cout << "Entity ctor called." << std::endl;
    }
    ~Entity()
    {
        std::cout << "Entity dtor called." << std::endl;
    }
    void fooPointer(){}
};

int mainUnique()
{
    
    {
//        std::unique_ptr<Entity> ptr(new Entity());

    }
    std::cout << "Inside mainTest" << std::endl;
    return 0;
}

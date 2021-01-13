#include <iostream>
#include "Cube.h"

// Default Constructor
// Default Assignment operator

// Copy Constructor
// Copy Assignment operator

// Move Constructor
// Move Assignment operator

Cube::Cube() {
    std::cout<<"Custom constructor was invoked." << std::endl;
}

Cube::Cube(int length) {
    _length = length;
    std::cout << "One paramenter constructor was invoked." << std::endl;
}

Cube::Cube(const Cube& obj) {
    _length = obj._length;
    std::cout << "Copy constructor was invoked." << std::endl;
}

const Cube& Cube::operator=(const Cube & obj) {
    _length = obj._length;
    std::cout << "Copy Assignment operator was invoked." << std::endl;
    return *this;
}

Cube::~Cube() {
    std::cout<<"Destructor was invoked."<<std::endl;
}

int Cube::getVolunme() {
    return _length * _length * _length; 
}
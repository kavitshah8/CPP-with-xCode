#include <iostream>

// Most relevant
// https://en.cppreference.com/w/cpp/language/cast_operator
// https://stackoverflow.com/questions/15999123/const-before-parameter-vs-const-after-function-name-c

// Note the difference between user defined casting and language casting
// https://en.cppreference.com/w/cpp/language/implicit_conversion
// https://en.cppreference.com/w/c/language/conversion

// Interfaces
struct T {
    std::string a;
    std::string b;
    std::string c;

    // If anyone wants to convert struct T to a std::string, give them this.a
    operator std::string() const {
        std::cout << "User defined cast got invokesd" << std::endl;
        return this->a;
    }
};

void log(std::string, std::string, std::string);
void log(T, T, T);

// Implementations
void log(std::string a, std::string b, std::string c) {
    std::cout << "A = " << a << ", B = " << b << ", C = " << c << "\n" << std::endl;
}

void log(T a, T b, T c) {
    std::cout << "T A = " << a.a << ", T B = " << b.b << ", T C = " << c.c << "\n" << std::endl;
}

int conversions() {
    T a = {"aFoo"};
    T b = {"bFoo", "bBar"};
    T c = {"cFoo", "cBar", "cBro"};
    log("foo", "bar", "bro");
    log(a, b, c);

    // Note we do not have an inteface which accepts the following calls
    // And our user defined casts kicks in 
    log("Foo", "Bar", c);
    log("Foo", b, c);
    return 0;
}

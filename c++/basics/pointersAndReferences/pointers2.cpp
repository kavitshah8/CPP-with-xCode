#include <iostream>

int main() {
    int x = 10;
    // can be changed, in the sense it can point to some other variable
    int *pointerToX = &x;
    // can not be changed
    int &referenceToX = x;

    std::cout << "x = " << x << std::endl;
    std::cout << "Address of x = " << pointerToX << std::endl;
    std::cout << "The value of *ip = " << *pointerToX << std::endl;
    
    std::cout << "x (referenceToX) =  " << referenceToX << std::endl;
    referenceToX = 100;
    std::cout << "x (referenceToX) after updated =  = " << referenceToX << std::endl;

    // Notes:

    // Similarities 
    // Both can be used to change local variables of one function inside another function. 
    // Both of them can also be used to save copying of big objects when passed as arguments to functions or returned from functions.

    // Differences:
    // Once a reference is created, it cannot be later made to reference another object; it cannot be reseated. 
    // References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any valid thing.
        // A pointer can be declared as void but a reference can never be void: void &a = x; // Not valid
    // A reference must be initialized when declared. There is no such restriction with pointers
    
    // References are easier to use: 
    // References don’t need dereferencing operator to access the value. ‘&’ operator is needed only at the time of declaration. 
    // Also, members of an object reference can be accessed with dot operator (‘.’), unlike pointers where arrow operator (->) is needed.
    return 0;
}
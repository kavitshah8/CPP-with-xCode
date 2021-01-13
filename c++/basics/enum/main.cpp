#include <stdio.h>
#include <iostream>

/** Syntax
    // Declaration
    Enum Class EnumName {Val1, Val2, Val3, ...};
    // Initialization
    EnumName objName = EnumName::Val1;
*/

// enum vs enum class
// 1. Different enums cannot share the same name
// 2. No variable can have the name exists in the enum
// 3. Enums are not type safe
enum Timeout 
{
    // You can override the values
    Short = 60,
    Medium = 100,
    Large = 1000
};
// enum classes (also called scoped enumerations), that makes enumerations both strongly typed and strongly scoped. 
// Class enum doesn’t allow implicit conversion to int, and also doesn’t compare enumerators from different enumerations.
// You can change the default type of the enum values
enum class Gender : char
{
    Male = '0', 
    Female = '1'
};

std::ostream& operator<<(std::ostream& os, Gender c)
{
    switch(c)
    {
        case Gender::Male  : os << "ONE";    break;
        case Gender::Female : os << "female"; break;
        default    : os.setstate(std::ios_base::failbit);
    }
    return os;
}
 
int main() {
    
    Gender g = Gender::Male;
    std::cout << (g == Gender::Male) << std::endl;
    // without overloading << we will get an error
    std::cout << g << std::endl;

    // Timeout t = Timeout::Short;
    Timeout t = Short;
    std::cout << t << std::endl;
    // std::cout << Timeout::t << std::endl;

    return 0;
}
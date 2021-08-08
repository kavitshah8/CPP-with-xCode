
#include <iostream>
class Student {
    public:
    void print();
    
    Student() : m_name("kavit"), m_age(2) {
        print();
    }

    std::string m_name;
    int m_age;
};



#include <iostream>
class Student {
    public:
    void print();
    
    Student() : m_name("kavit"), m_age(2) {
        std::cout << m_name << std::endl;
        print();
    }

    std::string m_name;
    int m_age;
};


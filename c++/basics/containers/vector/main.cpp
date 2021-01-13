#include <vector>
#include <iostream>
#include <algorithm>

struct Student {
    std::string name;
    int age;
};

int main() {
    std::vector<int> v = {7, 5, 16, 8};
    Student s1 = {"K", 1};
    Student s2;
    Student s3;
    

    for (auto& it: v) { 
        std::cout << it << ","; 
    }

    for (auto it: v) { 
        std::cout << it << ","; 
    }   

    for_each(v.begin(), v.end(), [](int i) {
        std::cout << i << std::endl;
    });

    return 0;
}

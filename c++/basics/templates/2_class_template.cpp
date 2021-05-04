#include "1_function_template.cpp"
#include <iostream>

namespace classTemplate {

const int SIZE = 1000;

template <typename T>
class TemplatedArray{
    int index;
    T store[SIZE];
public:
    TemplatedArray():index(0) {}
    
    void pushItemToStore(T data)
    {
        store[index] = data;
        index++;
    }
    
    void printStore()
    {
        for (int i = 0; i < index; i++) {
            std::cout << store[i] << std::endl;
        }
    }
    
    int getStoreLength() const { return index; }
    
    T getItemFromStore(const int i) const {
        return store[i];
    }
};

template <typename T>
TemplatedArray<T> operator* (const TemplatedArray<T>& rhs1, const TemplatedArray<T>& rhs2)
{
    TemplatedArray<T> result;
    for(int i = 0; i < rhs1.getStoreLength(); i++) {
        result.pushItemToStore(rhs1.getItemFromStore(i) * rhs2.getItemFromStore(i));
    }
    return result;
}

void runner()
{
    // One must explicitly specify the type unlike the function template
    // function templates can infer types but class templates can not
    TemplatedArray<int> tv;
    
    for (int i = 0; i < 10; i++) {
        tv.pushItemToStore(i*2);
    }
    
    tv.printStore();
    
    TemplatedArray<int> result = functionTemplate::square(tv);
    
    result.printStore();
}

}

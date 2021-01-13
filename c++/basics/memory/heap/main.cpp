#include <iostream>
using namespace std;

class Cube {
    private:
        int length;
    public:
        void setLength(int a) {
            length = a;
        };
};
int main () {
    // Creates a cube object on Heap
    Cube *cPtr = new Cube;
    // Creates a cube object on Stack
    Cube c;

    // Low memory addrss
    cout << "cPtr: " << cPtr << endl; 
    // High memory address 
    cout << "c: " << &c << endl; 
    // High memeory address
    cout << "&cPtr: " << &cPtr << endl;
    
    // When a objects is accessed via poiter we can access its memeber functions using -> operator
    cPtr->setLength(44);
    // (*cPtr).setLength(44); // Identical to the arrow operator

    c.setLength(42);

    delete cPtr;
    cPtr = nullptr;
    
    // Example of an array of heap memeory
    int *x;
    x = new int[3];
    for (int i = 0; i < 3; i++)
    {
        x[i] = i + 3;
    }
    // delete an array of heap memory
    delete[] x;
    x = nullptr;

    return 0;
}

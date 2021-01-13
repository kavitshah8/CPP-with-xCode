#include <iostream>
using namespace std;

void foo() {
    int y = 9;
    cout << "y in foo is = " << y << endl;
    cout << "Address y in foo is = " << &y << endl;
}

int main() {
    int z;
    int x = 7;

    // stack memory starts with the highest address available in the memory. 
    // Usually involving addreess space with ffff
    cout << "x in main is = " << x << endl;
    cout << "Address of x in main is = " << &x << endl;

    // Address for variables should decrease
    foo();
    
    // foo's memory will be free. Hence, z should have higher address than the y in foo.
    // Closer to the address of x 
    z = 10;
    cout << "z in main is = " << z << endl;
    cout << "Address of z in main is = " << &z << endl;
    return 0;
}
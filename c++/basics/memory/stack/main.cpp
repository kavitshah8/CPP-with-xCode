#include <iostream>
using namespace std;

void barFoo() {
    int y = 9;
    cout << "y in barFoo is = " << y << endl;
    cout << "Address y in barFoo is = " << &y << endl;
}

int mainStack() {
    int z;
    int x = 7;

    // stack memory starts with the highest address available in the memory. 
    // Usually involving addreess space with ffff
    cout << "x in mainTest is = " << x << endl;
    cout << "Address of x in mainTest is = " << &x << endl;

    // Address for variables should decrease
    barFoo();
    
    // barFoo's memory will be free. Hence, z should have higher address than the y in barFoo.
    // Closer to the address of x 
    z = 10;
    cout << "z in mainTest is = " << z << endl;
    cout << "Address of z in mainTest is = " << &z << endl;
    return 0;
}
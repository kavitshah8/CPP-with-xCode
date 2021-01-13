#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int y = 20;
    cout << "x is " << x << endl;
    {
        int x = 100;
        cout << "x is "<< x << endl;
        // inner block has access to the variable outside of the block
        cout << "y is " << y << endl;
    }
    cout << "x in the outer block is "<< x << endl;
    return 0;
}
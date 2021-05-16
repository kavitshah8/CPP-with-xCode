#include <iostream>
#include <tuple>
using namespace std;

// To comipe: g++ mainTest.cpp -std=c++11
int mainTuple() {
    tuple <int, int, int> node = make_tuple(1, 2, 3);
    cout << get<0>(node) << endl;
    cout << get<1>(node) << endl;
    cout << get<2>(node) << endl;
    return 0;
}
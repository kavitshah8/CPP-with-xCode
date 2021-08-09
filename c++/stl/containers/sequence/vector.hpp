#include <iostream>
#include <vector>
using namespace std;

/**
    --------------------
    |   |   |   |   | --->
    --------------------
 * Properties of vector
 * 0. Vector can grow only at the end of the vector
 * 1. Insert/remove at the end takes                        O(1) time
 * 2. Insert/remove at the begining and in the middle takes O(n) time
 * 3. Searching an element takes                            O(n) time
 */
void vectorIterations();

void vectorBasics();

/**
 * All three container types have below common APIs
 */
void commonAPI();

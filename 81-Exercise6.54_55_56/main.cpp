/*
 *      Author: Quang Tran
 *      Date: August 6, 2019
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int func1(int, int);            // Declaration for a func.

typedef decltype(func1) ff;     // 'ff' is not yet a function pointer

int add(const int e1, const int e2) { return (e1 + e2); }
int subtract(const int e1, const int e2) { return (e1 - e2); }
int multiply(const int e1, const int e2) { return (e1 * e2); }
int divide(const int e1, const int e2) { return (e1 / e2); }

int main() {
    // Vector that holds pointer type to these functions.
    vector<ff*> v = { &add, &subtract, &multiply, &divide };

    for (auto& item : v) {
        cout << item(4, 2) << endl;
    }
    return 0;
}
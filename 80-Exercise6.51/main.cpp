/*
 *      Author: Quang Tran
 *      Date: August 5, 2019
 */

#include <iostream>

using std::cout;
using std::endl;

void f() {
    cout << "f() is called." << endl;
}
void f(int) {
    cout << "f(int) is called." << endl;
}
void f(int, int) {
    cout << "f(int, int) is called." << endl;
}
void f(double, double = 3.14) {
    cout << "f(double, double = 3.14) is called." << endl;
}

int main() {
//    f(2.56, 42);    ---  ambiguous
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}
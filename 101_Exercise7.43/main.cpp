/*
 *      Author: Quang Tran
 *      Date: September 19, 2019
 */

#include <iostream>

class NoDefault {
public:
    NoDefault(int number) {
    }
};

class C {
public:
    C() : n(0) {
    }

private:
    NoDefault n;
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Created a 'C' object!" << std::endl;
    C c1;

    return 0;
}
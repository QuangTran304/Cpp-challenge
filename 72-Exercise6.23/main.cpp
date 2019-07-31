/*
 *      Author: Quang Tran
 *      Date: July 31, 2019
 */

#include <iostream>

void print(const int* begin, const int* end) {
    while (begin != end) {
        std::cout << *begin++ << std::endl;
    }
}

void print(const int ia[], size_t size) {
    for (size_t i = 0; i != size; ++i) {
        std::cout << ia[i] << std::endl;
    }
}

void print(int (&array)[2]) {
    for (auto e : array) {
        std::cout << e << std::endl;
    }
}

void print(const int* p) {
    if (p)
        std::cout << *p << std::endl;
}

int main() {
    int i = 0, j[2] = {0, 1};

    print(std::begin(j), std::end(j));
    std::cout << "--------------------------\n";
    print(j);
    std::cout << "--------------------------\n";
    print(j, 2);
    std::cout << "--------------------------\n";
    print(&i);
    return 0;
}
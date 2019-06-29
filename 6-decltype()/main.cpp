/*
 *      Author: Quang Tran
 *      Date: June 29, 2019
 */

#include <iostream>

int main() {
    int a = 3, b = 4;
    decltype(a) c = a;      // c is type plain 'int'
    decltype((b)) d = a;    // d is type 'int&'

    std::cout << "Value in 'c' before changes: " << c << std::endl;
    std::cout << "Value in 'd' before changes: " << d << std::endl;

    ++c;
    ++d;

    std::cout << "Value in 'c' after changes: " << c << std::endl;
    std::cout << "Value in 'd' after changes: " << d << std::endl;

    return 0;
}
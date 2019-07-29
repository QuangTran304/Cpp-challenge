/*
 *      Author: Quang Tran
 *      Date: July 29, 2019
 */

#include <iostream>
#include <stdexcept>
int main() {
    std::cout << "Please enter two integers: " << std::endl;
    int a, b;
    std::cin >> a >> b;


    if (b == 0) {
        throw std::runtime_error("Division by 0!");
    }
    std::cout << "The result is: " << (a / b) << std::endl;

    // If we use "try" block without "catch" block, the compiler will complain when we run.

    return 0;
}
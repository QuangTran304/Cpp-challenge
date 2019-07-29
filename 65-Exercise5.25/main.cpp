/*
 *      Author: Quang Tran
 *      Date: July 29, 2019
 */

#include <iostream>
#include <stdexcept>

int main() {
    std::cout << "Please enter two integers: " << std::endl;
    int a, b;

    while (std::cin >> a >> b) {
        try {
            if (b == 0) {
                throw std::runtime_error("Division by 0!!!");
            }
            std::cout << "The result is: " << (a / b) << std::endl;
        } catch (std::runtime_error err) {
            std::cout << err.what() << "\nTry again? Enter y or n" << std::endl;
            char c;
            std::cin >> c;
            if (!std::cin || c == 'n')
                break;
        }
    }
    return 0;
}
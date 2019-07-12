/*
 *      Author: Quang Tran
 *      Date: July 12, 2019
 */

#include <iostream>

int main() {

    // Original expression:
    std::cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;


    // Guess precedence:
    std::cout << (12 / 3 * 4) + (5 * 15) + 24 % (4 / 2) << std::endl;

    return 0;
}
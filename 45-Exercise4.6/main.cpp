/*
 *      Author: Quang Tran
 *      Date: July 12, 2019
 */

#include <iostream>

int main() {

    int test = 5;

    if (test % 2 == 0) {
        std::cout << "It's even!" << std::endl;
    } else if (test % 2 == 1) {
        std::cout << "It's odd!" << std::endl;
    }

    return 0;
}
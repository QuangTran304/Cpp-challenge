/*
 *      Author: Quang Tran
 *      Date: July 30, 2019
 */

#include <iostream>

void reset(int& a) {
    a = 0;
}

int main() {

    int number = 5;
    reset(number);
    std::cout << "Number after resetting is: " << number << std::endl;

    return 0;
}
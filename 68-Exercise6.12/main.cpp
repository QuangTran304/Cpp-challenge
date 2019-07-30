/*
 *      Author: Quang Tran
 *      Date: July 30, 2019
 */

#include <iostream>

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int number1 = 5;
    int number2 = 6;
    swap(number1, number2);
    std::cout << "Number1 after swapping: " << number1 << std::endl;
    std::cout << "Number2 after swapping: " << number2 << std::endl;

    return 0;
}
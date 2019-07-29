/*
 *      Author: Quang Tran
 *      Date: July 29, 2019
 */

#include <iostream>

void swapTwoValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 2;
    int y = 5;

    std::cout << "Value of x before swapping: " << x << std::endl;
    std::cout << "Value of y before swapping: " << y << std::endl;
    swapTwoValues(&x, &y);
    std::cout << "Value of x after swapping: " << x << std::endl;
    std::cout << "Value of y after swapping: " << y << std::endl;

    return 0;
}
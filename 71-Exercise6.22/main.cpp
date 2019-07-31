/*
 *      Author: Quang Tran
 *      Date: July 31, 2019
 */

#include <iostream>

void swapTwoPointer(int*& p1, int*& p2) {
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}

int main() {
    int a = 2;
    int b = 5;

    int* pa = &a;
    int* pb = &b;

    swapTwoPointer(pa, pb);
    std::cout << "Content of 'pa': " << *pa << std::endl;
    std::cout << "Content of 'pb': " << *pb << std::endl;
    return 0;
}
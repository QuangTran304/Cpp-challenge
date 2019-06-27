/*
 *      Author: Quang Tran
 *      Date: June 26, 2019
 *
 */

#include <iostream>

int main() {
    // This code changes value of a pointer:
    int num1 = 5;
    int* pNum1 = &num1;
    std::cout << pNum1 << std::endl;

    pNum1 = 0;
    std::cout << pNum1 << std::endl;


    // This code changes the value which the pointer points:
    int num2 = 6;
    int* pNum2 = &num2;
    std::cout << *pNum2 << std::endl;

    *pNum2 = 10;
    std::cout << num2 << std::endl;

    return 0;
}
/*
 *      Author: Quang Tran
 *      Date: July 10, 2019
 */

#include <iostream>

int main() {

    int myArr[10];
    for (size_t i = 0; i < 10; ++i)
        myArr[i] = i;

    // Print out the contents:
    for (auto item : myArr)
        std::cout << item << " ";

    return 0;
}
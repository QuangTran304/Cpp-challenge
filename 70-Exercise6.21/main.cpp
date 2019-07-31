/*
 *      Author: Quang Tran
 *      Date: July 31, 2019
 */

#include <iostream>

int findLarger(const int& a, const int* b) {
    return ( (a > (*b)) ? a : *b );
}

int main() {
    int x = 5;
    int y = 8;

    std::cout << "The larger number is: " << findLarger(x, &y) << std::endl;

    return 0;
}
/*
 *      Author: Quang Tran
 *      Date: August 1, 2019
 */

#include <iostream>

int findSum(std::initializer_list<int> intList) {
    int sum = 0;
    for (auto it = intList.begin(); it != intList.end(); ++it) {
        sum += (*it);
    }
    return sum;
}

int main() {
    std::cout << " The sum is: " << findSum( {5, 4, 3, 2, 1} ) << std::endl;

    return 0;
}
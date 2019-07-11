/*
 *      Author: Quang Tran
 *      Date: July 11, 2019
 */

#include <iostream>
#include <vector>

using std::begin;
using std::endl;

int main() {
    std::vector<int> numbers = {1,2,3,4,5};
    int arrayNumbers[numbers.size()];

    for (int i = 0; i != numbers.size(); ++i) {
        arrayNumbers[i] = numbers[i];
    }

    // Display the result
    for (int item : arrayNumbers) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}
/*
 *      Author: Quang Tran
 *      Date: July 10, 2019
 */

#include <iostream>

int main() {

    int array[] = {1,2,3,4,5,6,9};

    int* begin = std::begin(array);
    int* end = std::end(array);

    // Set every element to 0
    for (; begin != end; ++begin) {
        *begin = 0;
    }

    // Display content of array
    for (int item : array) {
        std::cout << item << " ";
    }

    return 0;
}
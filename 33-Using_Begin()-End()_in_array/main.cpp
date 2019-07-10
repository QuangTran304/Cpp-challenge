/*
 *      Author: Quang Tran
 *      Date: July 10, 2019
 */

#include <iostream>

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9};

    int* begin = std::begin(array);
    int* end = std::end(array);

    for (; begin != end; ++begin) {
        std::cout << *begin << " ";
    }

    return 0;
}
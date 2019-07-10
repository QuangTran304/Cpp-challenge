/*
 *      Author: Quang Tran
 *      Date: July 10, 2019
 */

#include <iostream>
#include <vector>

int main() {

    int myArr[10];
    for (size_t i = 0; i < 10; ++i)
        myArr[i] = i;

    // Copy contents of 'myArr' to 'anotherArr' using Vector
    std::vector<int> anotherArr(10);
    for (unsigned i = 0; i != 10; ++i) {
        anotherArr[i] = myArr[i];
    }

    // Print out the contents of 'anotherArr':
    for (auto item : anotherArr)
        std::cout << item << " ";


    return 0;
}
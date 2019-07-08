/*
 *      Author: Quang Tran
 *      Date: July 8, 2019
 */

#include <iostream>
#include <vector>

int main() {
    // This method is the best since it is shortest.
    std::vector<int> myVector(10, 42);
    for (int& i : myVector) {
        std::cout << i << " ";
    }

    std::cout << "\n\n=============================\n\n";

    // Second method
    std::vector<int> myVector2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    for (int& i : myVector) {
        std::cout << i << " ";
    }

    std::cout << "\n\n=============================\n\n";

    // Third method
    std::vector<int> myVector3 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    for (int& i : myVector) {
        std::cout << i << " ";
    }


    return 0;
}
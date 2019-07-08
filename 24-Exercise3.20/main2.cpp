/*
 *      Author: Quang Tran
 *      Date: July 8, 2019
 *
 *      Note: Read integers into a vector, print sum of first & last element, second and second-to-last element...
 */

#include <iostream>
#include <vector>

int main() {

    std::vector<int> myVector;
    int number;

    std::cout << "Please enter a set of integer, end by a character: " << std::endl;
    while (std::cin >> number) {
        myVector.push_back(number);
    }

    std::cout << "The sums of the pairs are: ";
    for (int i = 0; i < myVector.size()/2; ++i) {
       std::cout << myVector[i] + myVector[myVector.size()-1 - i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
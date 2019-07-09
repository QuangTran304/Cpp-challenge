/*
 *      Author: Quang Tran
 *      Date: July 9, 2019
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

    // Part one of the question:
    std::cout << "Sum of 2 adj. numbers is: ";
    for (auto it = myVector.cbegin(); it != myVector.cend()-1; ++it) {
        std::cout << (*it) + *(it + 1) << " ";
    }
    std::cout << "\n==================\n";


    // Part two of the question:
    std::cout << "Sum of first & last element, second & second to the last... is: ";
    for (auto start = myVector.cbegin(), end = myVector.cend()-1; start != end; ++start, --end) {
        std::cout << (*start) + (*end) << " ";
    }
    std::cout << "\n==================\n";

    return 0;
}
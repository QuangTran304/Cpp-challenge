/*
 *      Author: Quang Tran
 *      Date: June 20th, 2019
 *
 *      Note: This simple program counts frequency of integer inputs.
 */

#include <iostream>

int main() {
    int currentVal = 0;
    int val = 0;

    std::cout << "Enter some integers, end by some characters: ";

    if (std::cin >> currentVal) {       // Check first number to ensure we have data.
        int count = 1;

        while (std::cin >> val) {       // Read and store the next value from 'istream' to 'val'
            if (val == currentVal) {
                ++count;
            } else {
                std::cout << currentVal << " occurs " << count << " times." << std::endl;

                currentVal = val;       // Set current value to the next new value.
                count = 1;              // Reset counter.
            }
        }
    }

    return 0;
}
/*
 *      Author: Quang Tran
 *      Date: July 9, 2019
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

int main() {

    vector<int> myVector(10, 1);

    cout << "Original contents inside vector: ";
    for (auto it = myVector.cbegin(); it != myVector.cend(); ++it) {
        cout << *it << " ";
    }

    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        (*it) *= 2;
    }

    cout << "\nNew contents inside vector: ";
    for (auto it = myVector.cbegin(); it != myVector.cend(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
/*
 *      Author: Quang Tran
 *      Date: July 17, 2019
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> numbers{1, 3, 4, 5, 7, 8, 9};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it = ( (*it) % 2 == 1 ) ? (*it)*2 : (*it);
    }

    // Display changes:
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
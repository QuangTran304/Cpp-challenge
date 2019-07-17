/*
 *      Author: Quang Tran
 *      Date: July 17, 2019
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Please enter some integers: ";
    int val = 0;

    while (cin >> val) {
        if (val == 42) {
            cout << "Program has stopped. You entered 42." << endl;
            break;
        }
    }

    return 0;
}
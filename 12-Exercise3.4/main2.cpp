/*
 *      Author: Quang Tran
 *      Date: July 2, 2019
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string line1;
    string line2;
    cout << "Please enter the first string: ";
    getline(cin, line1);
    cout << "Enter the second string now: ";
    getline(cin, line2);

    if (line1.size() == line2.size()) {
        cout << "\nThe 2 strings have the same length!!" << endl;
    } else if (line1.size() > line2.size()) {
        cout << "\nThe first string is longer!" << endl;
    } else {
        cout << "\nThe second string is longer!!" << endl;
    }

    return 0;
}
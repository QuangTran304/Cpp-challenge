/*
 *      Author: Quang Tran
 *      Date: July 2, 2019
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string line;
    cout << "Please enter a line of words: ";

    while (getline(cin, line)) {
        cout << line << endl;
    }

    return 0;
}
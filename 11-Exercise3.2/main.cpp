/*
 *      Author: Quang Tran
 *      Date: July 2, 2019
 *
 *      Note: This program keep reading a word at a time (forever)
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    string word;
    cout << "Please enter a word: ";

    while (cin >> word) {
        cout << word << endl;
    }

    return 0;
}
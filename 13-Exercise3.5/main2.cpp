/*
 *      Author: Quang Tran
 *      Date: July 2, 2019
 *
 *      Note: This program separate adjacent inputs by a space.
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string word;
    string line;
    cout << "Please enter a word: ";

    while (getline(cin, word)) {
        line += ((line.empty())? "" : " ") + word;
        cout << line << endl;
    }

    return 0;
}
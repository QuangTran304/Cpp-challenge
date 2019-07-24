/*
 *      Author: Quang Tran
 *      Date: July 24, 2019
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {

    string str, prev;
    bool notTwice = true;

    while (cin >> str) {
        if (isupper(str[0]) && prev == str) {
            cout << "'" << str << "' occurred twice in succession!" << endl;
            notTwice = false;
            break;
        }
        prev = str;
    }

    if (notTwice) {
        cout << "No words was repeated!" << endl;
    }
    return 0;
}
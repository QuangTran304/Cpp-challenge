/*
 *      Author: Quang Tran
 *      Date: July 24, 2019
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    string str, prev;
    while (cin >> str) {
        if (str == prev)
            break;
        else
            prev = str;
    }

    if (cin.eof())
        cout << "No word was repeated." << endl;
    else
        cout << str << " occurred twice in succession." << endl;

    return 0;
}
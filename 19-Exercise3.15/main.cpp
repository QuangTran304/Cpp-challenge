/*
 *      Author: Quang Tran
 *      Date: July 3, 2019
 */

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<string> myStrings;
    cout << "Enter a string/ word:";

    for (string temp; cin >> temp; cout << "You entered: " << temp << endl) {
        myStrings.push_back(temp);
    }

    return 0;
}
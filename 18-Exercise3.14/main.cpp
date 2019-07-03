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
    vector<int> myNums;
    cout << "Enter an integer. Use a character to end: ";

    for (int temp; cin >> temp; cout << "You entered: " << temp << endl) {
        myNums.push_back(temp);
    }
    return 0;
}
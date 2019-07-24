/*
 *      Author: Quang Tran
 *      Date: July 24, 2019
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::pair;

int main() {

    pair<string, int> max_duplicate;
    int counter = 0;

    string str = "";
    string prev = "";
    while (cin >> str) {        // Ctr+D in Xcode to send EOF (End of File)
        // If the current word is the same as the previous word.
        if (str == prev) {
            ++counter;
        } else {
            counter = 0;
        }

        // If the repeated times of current word is GREATER than the previous
        if (counter > max_duplicate.second) {
            max_duplicate = {str, counter};
        }

        prev = str;
    }

    // Display final result:
    if (max_duplicate.first.empty()) {
        cout << "There's no duplicated word.\n";
    } else {
        cout << "'" << max_duplicate.first << "' was repeated " << max_duplicate.second + 1 << " times!\n";
    }

    return 0;
}
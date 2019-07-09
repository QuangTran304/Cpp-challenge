/*
 *      Author: Quang Tran
 *      Date: July 9, 2019
 *
 *      Question: Revise the loop that printed the first paragraph in text
 *      to instead change the elements in text that correspond
 *      to the first paragraph to all uppercase.
 *      After you’ve updated text, print its contents.
 */

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;

int main() {

    vector<string> text;

    string line;
    getline(cin, line);
    text.push_back(line);

    for (auto& word : text) {
        for (auto& c : word) {
            if (isalpha(c))   c = toupper(c);
        }
        cout << word << " ";
    }

    return 0;
}
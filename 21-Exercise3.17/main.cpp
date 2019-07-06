/*
 *      Author: Quang Tran
 *      Date: July 5, 2019
 *
 *      Note: This program reads a sequence of words from cin and store the values
 *      in a vector. Print out contents in UPPERCASE. 8 words per line.
 */

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    string aWord;
    std::vector<string> wordsSequence;

    cout << "Please enter a sequence of words: ";

    while(getline(cin, aWord) && !aWord.empty()) {
        wordsSequence.push_back(aWord);
        cout << "Added: " << aWord << endl;
    }   // Done reading inputs

    // Transform the words to upper-case
    for (auto& word : wordsSequence) {
        for (auto& c : word) {
            c = toupper(c);
        }
    }

    // Display the result: 8 words per line
    for (int i = 0; i != wordsSequence.size(); ++i) {
        if (i != 0  &&  i % 8 == 0) {
            cout << endl;
        }
        cout << wordsSequence[i] << " ";
    }

    return 0;
}
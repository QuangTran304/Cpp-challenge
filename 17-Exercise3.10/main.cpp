/*
 *      Author: Quang Tran
 *      Date: July 3, 2019
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    string line;
    cout << "Please enter a string w/ punctuations: ";
    getline(std::cin, line);
    cout << "Original string: " << line << endl;

    for (char& c : line) {
        if (c == ',' || c == '.')
            c = ' ';
    }

    cout << "Modified string: " << line << endl;
    return 0;


    // Another way:
//    cout << "Please enter a string w/ punctuations: ";
//    for (string str; getline(cin, str); cout << endl) {
//        for (auto character : str)
//            if (!ispunct(character))    cout << character;
//    }
//    return 0;
}


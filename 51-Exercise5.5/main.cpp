/*
 *      Author: Quang Tran
 *      Date: July 22, 2019
 */

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main() {

    vector<string> grades = { "F", "D", "C", "B", "A", "A++" };

    cout << "Enter your grade: ";

    for (int grade; cin >> grade;) {

        string gradeLetter;
        if (grade < 60) {
            gradeLetter = grades[0];
        } else {
            gradeLetter = grades[ (grade-50)/10 ];

            if (grade != 100) {
                gradeLetter += (grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : "";
            }
        }

        cout << gradeLetter << endl;
    }

    return 0;
}
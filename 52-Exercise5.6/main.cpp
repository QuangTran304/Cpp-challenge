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

        string gradeLetter = "";

        gradeLetter += (grade < 60) ? grades[0] : grades[ (grade-50)/10 ];
        gradeLetter += (grade == 100 || grade < 60) ? "" : (grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : "";

        cout << gradeLetter << endl;
    }

    return 0;
}
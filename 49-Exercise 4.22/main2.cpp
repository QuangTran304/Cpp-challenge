/*
 *      Author: Quang Tran
 *      Date: July 17, 2019
 *
 *      Note: This is version 2 of the exercise
 */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int grade = 0;
    cout << "Please enter a grade: ";
    cin >> grade;

    if (grade > 90) {
        cout << "high pass";
    } else if (grade >= 60 && grade <= 70) {
        cout << "low pass";
    } else if (grade < 60) {
        cout << "fail";
    }


    return 0;
}
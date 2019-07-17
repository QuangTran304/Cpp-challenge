/*
 *      Author: Quang Tran
 *      Date: July 27, 2019
 */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "Please enter value of 'a': ";
    int a = 0;
    cin >> a;

    cout << "Please enter value of 'b': ";
    int b = 0;
    cin >> b;

    cout << "Please enter value of 'c': ";
    int c = 0;
    cin >> c;

    cout << "Please enter value of 'd': ";
    int d = 0;
    cin >> d;

    if (a > b && b > c && c > d) {
        cout << "\nThe numbers entered are good!" << endl;
        return 0;
    } else {
        cout << "\nThe numbers entered are not good! Please re-do" << endl;
        return -1;
    }
}
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

int main() {

    string answer;

    do {
        string str1;
        string str2;

        cout << "Enter the first string: ";
        getline(cin, str1);
        cout << "Enter the second string: ";
        getline(cin, str2);

        cout <<  ((str1.size() < str2.size()) ? "==> String 1 is less than string 2.\n" : "==> String 2 is less than string 1.\n");
        cout << "\nDo you want to continue? 'y' for Yes/ 'n' for No: ";
        getline(cin, answer);
    } while (tolower(answer[0]) == 'y');

    return 0;
}
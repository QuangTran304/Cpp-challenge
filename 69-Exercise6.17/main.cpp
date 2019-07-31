/*
 *      Author: Quang Tran
 *      Date: July 31, 2019
 */

#include <iostream>
//#include <string>

using std::cout;
using std::endl;
using std::string;

bool containCapital(const string& str) {        // Const & parameter
    for (auto begin = std::begin(str), end = std::end(str); begin != end; ++begin) {
        if (isupper(*begin))
            return true;
    }
    return false;
}

void transformLowercase(string& str) {          // Plain & parameter
    for (auto begin = std::begin(str), end = std::end(str); begin != end; ++begin) {
        *begin = tolower(*begin);
    }
}

int main() {
    string str1 = "Hello";
    cout << "The string contain uppercase: " << (containCapital(str1) ? "True" : "False");
    cout << endl;

    string str2 = "HI THERE";
    transformLowercase(str2);
    cout << "String after modified: " << str2 << endl;

    return 0;
}
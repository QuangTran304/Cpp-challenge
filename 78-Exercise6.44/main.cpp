/*
 *      Author: Quang Tran
 *      Date: August 5, 2019
 */

#include <iostream>
#include <string>

using std::string;

inline bool isShorter(const string& s1, const string& s2) {
    return (s1.size() < s2.size());
}

int main() {
    string str1 = "Hello";
    string str2 = "Hi";

    std::cout << ( (isShorter(str1, str2) == 1) ? "Yes" : "No" ) << std::endl;
    return 0;
}
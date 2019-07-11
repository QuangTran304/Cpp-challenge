/*
 *      Author: Quang Tran
 *      Date: July 11, 2019
 */

#include <iostream>
#include <string>

using std::string;

int main() {
    // Compare 2 strings C++ style:
    string str1 = "abc";
    string str2 = "def";

    if (str1 < str2) {
        std::cout << "str1 is less than str2\n";
    } else {
        std::cout << "str1 is greater than str2\n";
    }


    // Compare 2 C-style character strings
    const char string1[] = {'a', 'b', 'c', '\0'};
    const char string2[] = {'d', 'e', 'f', '\0'};

    if (strcmp(string1, string2) < 0) {
        std::cout << "str1 is less than str2\n";
    } else {
        std::cout << "str1 is greater than str2\n";
    }
    return 0;
}
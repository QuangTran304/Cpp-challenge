/*
 *      Author: Quang Tran
 *      Date: July 3, 2019
 */

#include <iostream>
#include <string>


int main() {
    std::string str("Hello world, this is Quang.");
    std::cout << "Original string: " << str << std::endl;

    int i = 0;
    while (i < str.size()) {
        str[i] = 'X';
        ++i;
    }

    std::cout << "New string is: " << str << std::endl;
}

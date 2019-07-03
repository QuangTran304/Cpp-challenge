/*
 *      Author: Quang Tran
 *      Date: July 3, 2019
 */

#include <iostream>
#include <string>


int main() {
    std::string str("Hello world, this is Quang.");
    std::cout << "Original string: " << str << std::endl;

    for (unsigned i = 0; i < str.size(); ++i) {
        str[i] = 'X';
    }

    std::cout << "New string is: " << str << std::endl;
}
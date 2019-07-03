/*
 *      Author: Quang Tran
 *      Date: July 3, 2019
 */

#include <iostream>
#include <string>


int main() {
    std::string str("Hello world, this is Quang.");
    std::cout << "Original string: " << str << std::endl;

    for (char c : str) {        // change 'char& c' to 'char c'
        c =  'X';               // c become local, it copies 'char' value of 'str'
    }                           // The original str doesn't change

    std::cout << "New string is: " << str << std::endl;
}
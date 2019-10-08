/*
 *      Author: Quang Tran
 *      Date: October 7, 2019
 */

#include <iostream>
#include <string>

using std::istream;
using std::string;

istream& func1(istream& in) {
    string variable = "";
    while (!in.eof()) {     // read until end-of-file
        in >> variable;
        std::cout << variable << std::endl;
    }
    std::cin.clear();
    return in;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    func1(std::cin);

    return EXIT_SUCCESS;
}
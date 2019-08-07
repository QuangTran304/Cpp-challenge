/*
 *      Author: Quang Tran
 *      Date: August 7, 2019
 */

#include <iostream>

struct Person {
    std::string name;
    std::string address;

    std::string getName() const {
        return name;
    }

    std::string getAddress() const {
        return address;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
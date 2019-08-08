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

    std::istream& readInfo(std::istream& is, Person& p) {
        std::cout << "Name...  Address... " << std::endl;
        is >> name >> address;
        return is;
    }

    std::ostream& print(std::ostream& os, const Person& p) {
        os << name << " lives at " << address;
        return os;
    }
};


int main() {
    Person quang;

    quang.readInfo(std::cin, quang);
    quang.print(std::cout, quang);

    return 0;
}
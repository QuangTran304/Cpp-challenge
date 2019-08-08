/*
 *      Author: Quang Tran
 *      Date: August 7, 2019
 */

#include <iostream>

struct Person {
    std::string name;
    std::string address;

    Person() {
    }
    Person(const std::string& name) : name(name), address("N/A") {
    }
    Person(const std::string& name, const std::string& address) : name(name), address(address) {
    }

    std::string getName() const {
        return name;
    }

    std::string getAddress() const {
        return address;
    }
};


std::istream& readInfo(std::istream& is, Person& p) {
    std::cout << "Name...  Address... " << std::endl;
    is >> p.name >> p.address;
    return is;
}

std::ostream& print(std::ostream& os, const Person& p) {
    os << p.name << " lives at " << p.address;
    return os;
}



int main() {
    Person quang;

    readInfo(std::cin, quang);
    print(std::cout, quang);

    return 0;
}

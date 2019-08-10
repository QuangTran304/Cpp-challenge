/*
 *      Author: Quang Tran
 *      Date: August 8, 2019
 */

#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;
using std::ostream;


const string& Sales_data::isbn() const {
    return bookNo;
}
Sales_data& Sales_data::combine(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
istream& read(istream& is, Sales_data& item) {              // Non-member function
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
ostream& print(ostream& os, const Sales_data& item) {       // Non-member function
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}
Sales_data::Sales_data(std::istream& is) {
    read(is, *this);
}



int main() {
    Sales_data total(std::cin);
    if (!total.isbn().empty()) {

        std::istream& is = std::cin;
        while (is) {
            Sales_data trans(is);
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;

    } else {

        std::cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}

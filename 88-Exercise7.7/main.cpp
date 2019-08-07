/*
 *      Author: Quang Tran
 *      Date: August 7, 2019
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;
using std::ostream;


struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    const string& isbn() const;
    Sales_data& combine(const Sales_data& rhs);
    Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
    istream& read(istream& is, Sales_data& item);
    ostream& print(ostream& os, Sales_data& item);
};


const string& Sales_data::isbn() const {
    return bookNo;
}
Sales_data& Sales_data::combine(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
Sales_data Sales_data::add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
istream& Sales_data::read(istream& is, Sales_data& item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
ostream& print(ostream& os, const Sales_data& item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}


int main() {
    Sales_data total;
    if (total.read(cin, total)) {
        Sales_data trans;
        while (total.read(cin, trans)) {
            if (total.bookNo == trans.bookNo) {
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
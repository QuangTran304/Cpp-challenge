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

    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) {};
    Sales_data(const std::string& s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) {};
    Sales_data(std::istream& is);       // Define outside of class

    const string& isbn() const;
    Sales_data& combine(const Sales_data& rhs);
    Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
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
//    Sales_data total;
//    if (total.read(cin, total)) {
//        Sales_data trans;
//        while (total.read(cin, trans)) {
//            if (total.bookNo == trans.bookNo) {
//                total.combine(trans);
//            } else {
//                print(cout, total) << endl;
//                total = trans;
//            }
//        }
//        print(cout, total) << endl;
//
//    } else {
//        std::cerr << "No data?!" << endl;
//        return -1;
//    }

    Sales_data s1;
    Sales_data("b1ac895h71");
    Sales_data("b8192y1io0", 5, 12.5);

    return 0;
}

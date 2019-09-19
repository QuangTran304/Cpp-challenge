/*
 *      Author: Quang Tran
 *      Date: September 19, 2019
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

class Sales_data {
public:
    friend std::istream& read(std::istream& is, Sales_data& item);

    // Non-delegating constructor:
    Sales_data(string s, unsigned cnt, double price) : bookNo(s), units_sold(cnt), revenue(cnt * price) {
        cout << "Obj from Sales_data(s, cnt, price) constructor.\n";
    }

    // Delegating constructor:
    Sales_data() : Sales_data("", 0, 0) {
        cout << "Obj from Default constructor.\n";
    }
    Sales_data(string s) : Sales_data(s, 0, 0) {
        cout << "Obj from Sales_data(string s) constructor.\n";
    }
    Sales_data(std::istream& in) : Sales_data() {
        read(in, *this);
        cout << "Obj from Sales_data(istream& in) constructor.\n";
    }

private:
    double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::istream& read(std::istream& is, Sales_data& item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}



int main() {

    Sales_data s1;
    cout << "\n";

    Sales_data("abcd");
    cout << "\n";

    Sales_data("abc123", 5, 6.3);
    cout << "\n";

    Sales_data(cin);
    cout << "\n";
    return 0;
}
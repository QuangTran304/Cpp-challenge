//
// Created by Quang Tran on 2019-08-10.
//

#ifndef INC_96_EXERCISE7_26_SALES_DATA_H
#define INC_96_EXERCISE7_26_SALES_DATA_H

#include <string>
using std::string;
using std::ostream;
using std::istream;

class Sales_data {

    friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
    friend istream& read(istream& is, Sales_data& item);
    friend ostream& print(ostream& os, const Sales_data& item);

public:
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) {};
    Sales_data(const std::string& s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) {};
    Sales_data(std::istream& is);       // Define outside of class
    const string& isbn() const;
    Sales_data& combine(const Sales_data& rhs);

private:
    double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


inline double Sales_data::avg_price() const {
    return units_sold ? revenue/units_sold : 0;
}

#endif //INC_96_EXERCISE7_26_SALES_DATA_H

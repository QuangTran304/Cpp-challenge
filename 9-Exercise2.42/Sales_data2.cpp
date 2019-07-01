/*
 *      Author: Quang Tran
 *      Date: July 1, 2019
 */

#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data sale1, sale2;
    double price1, price2;
    std::cin >> sale1.bookNo >> sale1.units_sold >> price1;
    std::cin >> sale2.bookNo >> sale2.units_sold >> price2;
    sale1.CalcRevenue(price1);
    sale2.CalcRevenue(price2);

    if (sale1.bookNo == sale2.bookNo) {
        sale1.AddData(sale2);
        sale1.Print();
        return 0;       // Indicate a success.
    } else {
        std::cerr << "Books must have the same ISBN" << std::endl;
        return -1;      // Indicate an error.
    }
}
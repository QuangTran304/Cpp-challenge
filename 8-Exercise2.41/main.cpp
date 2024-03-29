/*
 *      Author: Quang Tran
 *      Date: June 30, 2019
 */

#include <iostream>
#include <string>

struct Sale_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {

    Sale_data book;
    double price;
    std::cin >> book.bookNo >> book.units_sold >> price;        // Get user inputs
    book.revenue = book.units_sold * price;                     // Calculate total revenue
    std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << price;

    return 0;
}
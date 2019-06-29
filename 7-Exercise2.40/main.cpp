/*
 *      Author: Quang Tran
 *      Date: June 29, 2019
 */

#include <iostream>

struct Sales_data {
    unsigned units_sold = 1000;
    double revenue = 5380.42;
    std::string bookCategory = "self-improvement";
};

int main() {
    Sales_data s1;

    std::cout << "Total units sold = " << s1.units_sold << std::endl;
    std::cout << "Total revenue = " << s1.revenue << std::endl;
    std::cout << "Book's category is: " << s1.bookCategory << std::endl;

    return 0;
}
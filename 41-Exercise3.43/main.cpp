/*
 *      Author: Quang Tran
 *      Date: July 12, 2019
 */

#include <iostream>

using std::begin;
using std::end;

int main() {

    int ia[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,1,3,2}};

    // Using range-for loop:
    for (int (&row)[4] : ia) {       // Better draw the memory on paper to help visualization
        for (int& col : row) {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }


    std::cout << "=======" << std::endl;


    // Using subscript:
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 4; ++j) {
            std::cout << ia[i][j] << " ";
        }
        std::cout << std::endl;
    }


    std::cout << "=======" << std::endl;


    // Using pointer
    for (int (*p)[4] = begin(ia); p != end(ia); ++p) {     // Better draw the memory on paper to help visualization
        for (int *q = begin(*p); q != end(*p); ++q) {
            std::cout << *q << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
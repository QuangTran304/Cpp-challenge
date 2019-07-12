/*
 *      Author: Quang Tran
 *      Date: July 12, 2019
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {

    int ia[3][4] = { {1,2,3,4},
                     {4,5,6,7},
                     {8,9,10,11} };

    for (auto& row : ia) {          // If we don't use reference here, 'row' will be 'int*' type (compiler will convert array to pointer).
        for (auto col : row) {      // As a result of not using ref from the outer loop, the inner loop will iterate through 'int*'
            cout << col << " ";
        }
        cout << endl;
    }


    return 0;
}
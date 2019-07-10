/*
 *      Author: Quang Tran
 *      Date: July 10, 2019
 */

#include <iostream>

int main() {
    constexpr size_t array_size = 10;   // 'size_t' is machine-specific unsigned type -> guarantee to hold large enough size.
    int ia[array_size];                 // array of index from: 0 - 9

//    for (size_t ix = 1; ix <= array_size; ++ix)    // Not good since index is from 1 - 10
//        ia[ix] = ix;                               // causes unpredictable behavior

    for (size_t ix = 0; ix < array_size; ++ix)       // it should be fixed like this
        ia[ix] = ix;


    for (size_t ix = 0; ix < array_size; ++ix) {     // print everything out
        std::cout << ia[ix] << " ";
    }

    return 0;
}
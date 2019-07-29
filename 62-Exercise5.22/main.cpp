/*
 *      Author: Quang Tran
 *      Date: July 29, 2019
 */

#include <iostream>

int get_size() {
    // Return a size;
    // ...
    return 0;
}

int main() {
//    begin:
//        int sz = get_size();
//        if (sz <= 0) {
//            goto begin;
//        }

    // Revised version using loop:
    for (int sz = get_size(); sz <= 0; sz = get_size()) {

    }

    return 0;
}
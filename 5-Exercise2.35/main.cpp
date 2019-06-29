/*
 *      Author: Quang Tran
 *      Date: June 29, 2019
 */

#include <iostream>

int main() {
    const int i = 42;
    auto j = i;             // Guess: j is a simple 'int'
    const auto& k = i;      // Guess: k is a const int
    auto* p = &i;           // Guess: p is a pointer to an int (or: int*)

    const auto j2 = i, &k2 = i;    // j2 is a const int
                                   // k2 is const int

    j = 10;
    std::cout << "j is now: " << j << std::endl;
    // k = 11;  ==> Doesn't work.

    int a = 1;
    std::cout << "Inside p (before changes): " << p << std::endl;
    p = &a;
    std::cout << "Inside p (after changes): " << p << std::endl;

    // j2 = 12;  ==> Doesn't work.
    //k2 = 13;   ==> Doesn't work as well

    return 0;
}
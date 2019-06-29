#include <iostream>

int main() {
    int i = 0, &r = i;
    auto a = r;         // a is an int (r is an alias for i, which has type int)

    const int ci = i, &cr = ci;
    auto b = ci;        // b is an int (top-level 'const' in ci is dropped)
    std::cout << "What stores in 'b' before changing: " << b << std::endl;
    b = 5;
    std::cout << "What stores in 'b' after changing: " << b << std::endl;

    auto c = cr;        // c is an int (cr is an alias for ci whose 'const' is top-level)
    std::cout << "What stores in 'c' before changing: " << c << std::endl;
    c = 6;
    std::cout << "What stores in 'c' before changing: " << c << std::endl;

    auto d = &i;        // d is an int* (since &i = address of i).
    std::cout << "What stores in 'd' is address of i: " << d << std::endl;

    auto e = &ci;       // e is const int* (low-level 'const' will be kept)
    std::cout << "What stores in 'e' before changing: " << e << std::endl;
//    e = 7;  ==> Doesn't work.

    auto& g = ci;       // g is cont in& that is bound to ci
    std::cout << "What stores in 'g' before changing: " << g << std::endl;
    // g = 8; ==> Doesn't work.


    return 0;
}
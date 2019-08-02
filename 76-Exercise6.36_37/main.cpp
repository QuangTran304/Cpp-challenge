/*
 *      Author: Quang Tran
 *      Date: August 2, 2019
 */

#include <iostream>

using std::string;
using std::cout;
using std::endl;

using StrArr = string[10];          // Type alias for array of 10 strings.
string arrayOfStrings[10];


string (&func1())[10];              // Function that returns a ref. to an array of 10 strings.
StrArr& func2();                    // Same as func1. Using 'type alias'.
auto func3() -> string (&)[10];     // Same as func1. Using 'trailing return type'.
decltype(arrayOfStrings)& func4();  // Same as func1. Using 'decltype()'.


int main() {

    return EXIT_SUCCESS;
}
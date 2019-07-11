/*
 *      Author: Quang Tran
 *      Date: July 11, 2019
 */

#include <iostream>
#include <vector>

using std::begin;
using std::end;

int main() {

    int numbers[] = {1,2,3,4,5};
    std::vector<int> vNumbers(begin(numbers), end(numbers));

    std::cout << "Content of vector: ";
    for (std::vector<int>::iterator it = vNumbers.begin(); it != vNumbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
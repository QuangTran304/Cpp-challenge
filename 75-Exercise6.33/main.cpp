/*
 *      Author: Quang Tran
 *      Date: August 1, 2019
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using Iterator = vector<int>::const_iterator;

void print(Iterator begin, Iterator end) {
    if (begin != end) {
        cout << *begin << " ";
        print(++begin, end);
    }
}

int main() {
    vector<int> numbers = {1,2,3,4,5,6,7,8,9};
    print(numbers.begin(), numbers.end());

    return 0;
}
/*
 *      Author: Quang Tran
 *      Date: July 9, 2019
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main() {
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100)
            ++( *(scores.begin() + grade/10) );
    }

    for (auto e : scores) {
        cout << e << " ";
    }

    return 0;
}
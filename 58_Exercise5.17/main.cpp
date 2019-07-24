/*
 *      Author: Quang Tran
 *      Date: July 24, 2019
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool checkPrefix(vector<int> v1, vector<int> v2) {
    int lengthToCheck = 0;
    if (v1.size() > v2.size()) {
        lengthToCheck = v2.size();
    } else {
        lengthToCheck = v1.size();
    }

    for (size_t i = 0; i != lengthToCheck; ++i) {
        if (v1[i] != v2[i]) {
            cout << "One element is not the same.\n";
            return false;
        }
    }

    return true;
}


int main() {

    vector<int> v1{0,1,1,2};
    vector<int> v2{0,1,1,2,3,5,8};

    if (checkPrefix(v1, v2)) {
        cout << "Vector v1 is the prefix of v2\n";
    } else {
        cout << "This vector is not the prefix of the other\n";
    }

    return 0;
}
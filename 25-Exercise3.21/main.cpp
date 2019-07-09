/*
 *      Author: Quang Tran
 *      Date: July 9, 2019
 */

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;


void validateVector(const vector<int>& v) {
    cout << "Size: " << v.size() << endl;
    cout << "Content: ";
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        cout << *it << ((it != v.cend()-1)? ", " : " ");
    }
    cout << "\n==============\n";
}

void validateVector(const vector<string>& v) {
    cout << "Size: " << v.size() << endl;
    cout << "Content: ";
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        cout << *it << ((it != v.cend()-1)? ", " : " ");
    }
    cout << "\n==============\n";
}


int main() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };

    validateVector(v1);
    validateVector(v2);
    validateVector(v3);
    validateVector(v4);
    validateVector(v5);
    validateVector(v6);
    validateVector(v7);

    return 0;
}


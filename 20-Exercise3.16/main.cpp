/*
 *      Author: Quang Tran
 *      Date: July 5, 2019
 */

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {

    vector<int> v1;
    cout << "[ v1 ]: \nSize: " << v1.size() << endl;
    cout << "Contents:  ";
    for (auto e : v1) {
        cout << e << " | ";
    }
    cout << "\n\n";


    vector<int> v2(10);
    cout << "[ v2 ]: \nSize: " << v2.size() << endl;
    cout << "Contents:  ";
    for (auto e : v2) {
        cout << e << " | ";
    }
    cout << "\n\n";


    vector<int> v3(10, 42);
    cout << "[ v3 ]: \nSize: " << v3.size() << endl;
    cout << "Contents:  ";
    for (auto e : v3) {
        cout << e << " | ";
    }
    cout << "\n\n";


    vector<int> v4{10};
    cout << "[ v4 ]: \nSize: " << v4.size() << endl;
    cout << "Contents:  ";
    for (auto e : v4) {
        cout << e << " | ";
    }
    cout << "\n\n";


    vector<int> v5{10, 42};
    cout << "[ v5 ]: \nSize: " << v5.size() << endl;
    cout << "Contents:  ";
    for (auto e : v5) {
        cout << e << " | ";
    }
    cout << "\n\n";


    vector<string> v6(10);
    cout << "[ v6 ]: \nSize: " << v6.size() << endl;
    cout << "Contents:  ";
    for (auto e : v6) {
        cout << e << " | ";
    }
    cout << "\n\n";


    vector<string> v7(10, "hi");
    cout << "[ v7 ]: \nSize: " << v7.size() << endl;
    cout << "Contents:  ";
    for (auto e : v7) {
        cout << e << " | ";
    }
    cout << "\n\n";
    return 0;
}
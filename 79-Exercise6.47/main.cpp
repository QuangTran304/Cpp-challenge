/*
 *      Author: Quang Tran
 *      Date: August 5, 2019
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;


void print(vector<int>& v) {
    #ifndef NDEBUG
    cout << "Size: " << v.size() << endl;
    cout << "Function: " << __func__ << "()" << endl;
    #endif

    if (!v.empty()) {
        int item = v.back();
        v.pop_back();
        print(v);
        cout << item << " ";
    }
}


int main() {
    vector<int> numbers = {1,2,3,4,5};
    print(numbers);

    return 0;
}
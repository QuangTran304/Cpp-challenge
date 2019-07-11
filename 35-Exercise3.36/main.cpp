/*
 *      Author: Quang Tran
 *      Date: July 11, 2019
 */

#include <iostream>
#include <vector>

using std::begin;
using std::end;
using std::cout;
using std::endl;
using std::vector;


bool compare(int (&array1)[3], int (&array2)[3]) {
    int* begin1 = begin(array1);
    int* end1 = end(array1);

    int* begin2 = begin(array2);
    int* end2 = end(array2);

    // If 2 arrays are different in size
    if ((end2 - begin2) != (end1 - begin1)) {
        cout << "Arrays are not equal";
        return false;
    }

    // If 2 arrays don't have the same elements
    for (; begin1 != end1  &&  begin2 != end2; ++begin1, ++begin2) {
        if (*begin1 != *begin2)     // Compare the actual elements
            return false;
    }

    // Otherwise, they are equal!
    return true;
}


int main() {

    cout << "======[ARRAY]======" << endl;
    int array1[3] = { 1, 1, 3 };
    int array2[3] = { 1, 2, 3 };

    if (compare(array1, array2))
        cout << "Arrays are equals" << endl;
    else
        cout << "Arrays are NOT equals" << endl;


    cout << "\n======[VECTOR]======" << endl;
    vector<int> vector1 = { 2, 3, 4 };
    vector<int> vector2 = { 2, 4, 5 };

    if (vector1 == vector2)
        cout << "Vectors are equal." << endl;
    else
        cout << "Vectors are NOT equal." << endl;

    return 0;
}
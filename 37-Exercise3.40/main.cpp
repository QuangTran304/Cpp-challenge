/*
 *      Author: Quang Tran
 *      Date: July 11, 2019
 */

#include <iostream>
#include <cstring>

//const char arr1[]="Hello";
//const char arr2[]="world!";

int main() {

    const char arr1[] = {'C', '+', '+', ' ', 'i', 's', ' ', '\0'};
    const char arr2[] = {'h', 'a', 'r', 'd', '\0'};

    // New size will be 12 as '\0' will not be counted.
    size_t arrSize = strlen(arr1) + strlen(arr2) + 1;  // +1 for '\0' character
    char arr3[arrSize];

    strcpy(arr3, arr1);     // can't do strcat(arr1, arr2) because of 'const'
    strcat(arr3, arr2);
    std::cout << "Result is: " << arr3 << std::endl;

    return 0;
}
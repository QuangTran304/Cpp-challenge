#include <iostream>

int main() {
    int sum = 0;
    int value = 0;

    std::cout << "Please enter some integers, separated by spaces, end with some string: ";

    while (std::cin >> value) {
        sum += value;
    }

    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}
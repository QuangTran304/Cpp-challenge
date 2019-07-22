/*
 *      Author: Quang Tran
 *      Date: July 22, 2019
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main() {

    char vowel;
    unsigned aCounter = 0;
    unsigned oCounter = 0;
    unsigned iCounter = 0;
    unsigned uCounter = 0;
    unsigned eCounter = 0;

    while (cin >> vowel) {
        if (vowel == 'a')   ++aCounter;
        else if (vowel == 'e')   ++eCounter;
        else if (vowel == 'i')   ++iCounter;
        else if (vowel == 'o')   ++oCounter;
        else if (vowel == 'u')   ++uCounter;
        else   break;
    }

    cout << "numbers of 'a' vowel: " << aCounter << endl;
    cout << "numbers of 'o' vowel: " << oCounter << endl;
    cout << "numbers of 'i' vowel: " << iCounter << endl;
    cout << "numbers of 'u' vowel: " << uCounter << endl;
    cout << "numbers of 'e' vowel: " << eCounter << endl;

    return 0;
}
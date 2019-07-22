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
        if (vowel == 'a'  ||  vowel == 'A')   ++aCounter;
        else if (vowel == 'e'  ||  vowel == 'E')   ++eCounter;
        else if (vowel == 'i'  ||  vowel == 'I')   ++iCounter;
        else if (vowel == 'o'  ||  vowel == 'O')   ++oCounter;
        else if (vowel == 'u'  ||  vowel == 'U')   ++uCounter;
        else   break;
    }

    cout << "numbers of 'a' vowel: " << aCounter << endl;
    cout << "numbers of 'o' vowel: " << oCounter << endl;
    cout << "numbers of 'i' vowel: " << iCounter << endl;
    cout << "numbers of 'u' vowel: " << uCounter << endl;
    cout << "numbers of 'e' vowel: " << eCounter << endl;

    return 0;
}
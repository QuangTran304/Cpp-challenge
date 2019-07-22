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
    unsigned spaceCnt = 0;
    unsigned tabCnt = 0;
    unsigned newLineCnt = 0;

    cout << "Please enter some vowels, enter '#' to finish:" << endl;
    while (cin >> std::noskipws >> vowel) {     // 'no-skip-ws' == No Skip White Space
        if (vowel == 'a'  ||  vowel == 'A')   ++aCounter;
        else if (vowel == 'e'  ||  vowel == 'E')   ++eCounter;
        else if (vowel == 'i'  ||  vowel == 'I')   ++iCounter;
        else if (vowel == 'o'  ||  vowel == 'O')   ++oCounter;
        else if (vowel == 'u'  ||  vowel == 'U')   ++uCounter;
        else if (vowel == ' ')   ++spaceCnt;
        else if (vowel == '\n')  ++newLineCnt;
        else if (vowel == '\t')  ++tabCnt;
        else   break;
    }

    cout << "numbers of 'a' vowel: " << aCounter << endl;
    cout << "numbers of 'o' vowel: " << oCounter << endl;
    cout << "numbers of 'i' vowel: " << iCounter << endl;
    cout << "numbers of 'u' vowel: " << uCounter << endl;
    cout << "numbers of 'e' vowel: " << eCounter << endl;
    cout << "numbers of 'tabs': " << tabCnt << endl;
    cout << "numbers of 'spaces': " << spaceCnt << endl;
    cout << "numbers of 'new lines': " << newLineCnt << endl;
    return 0;
}
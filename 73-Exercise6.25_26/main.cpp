/*
 *      Author: Quang Tran
 *      Date: August 1, 2019
 */

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {      // or main(int argc, char** argv)
    std::string str;
    for (int i = 1; i != argc; ++i) {   // 'argv[]' start with index 1 this case, index 0 is for program's name
        str += std::string(argv[i]) + " ";
    }
    std::cout << "These are the options: [Printed]" << std::endl;
    std::cout << str << std::endl;
    return 0;
}
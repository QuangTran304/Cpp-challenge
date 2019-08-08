
#ifndef INC_95_EXERCISE7_23_SCREEN_H
#define INC_95_EXERCISE7_23_SCREEN_H

#include <iostream>
#include <string>

class Screen {
public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos height, pos width, char c) : height(height), width(width), contents(height * width, c) { }
    char get() const { return contents[cursor]; }
    char get(pos height, pos width) const;
    Screen& move(pos r, pos c);

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif //INC_95_EXERCISE7_23_SCREEN_H

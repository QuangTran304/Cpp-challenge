//
// Created by Quang Tran on 2019-08-13.
//

#ifndef INC_99_EXERCISE7_32_WINDOW_MGR_H
#define INC_99_EXERCISE7_32_WINDOW_MGR_H

#include <iostream>
#include <vector>
#include <string>

class Screen;    // Forward declaration, indicate that 'Screen' refers to a class name.

// FIRST STEP
class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex i);

private:
    std::vector<Screen> screens;
};

// SECOND STEP
class Screen {
    friend void Window_mgr::clear(ScreenIndex i);

public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos height, pos width) : height(height), width(width), contents(height*width, ' ') { }
    Screen(pos height, pos width, char c) : height(height), width(width), contents(height * width, c) { }
    char get() const { return contents[cursor]; }
    char get(pos row, pos col) const { return contents[row*width+col]; }
    Screen& move(pos r, pos c);
    Screen& set(char c);
    Screen& set(pos row, pos col, char ch);
    Screen& display(std::ostream& os);
    const Screen& display(std::ostream& os) const;

private:
    void do_display(std::ostream& os) const {
        os << contents;
    }

    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline Screen& Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}
inline Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}
inline Screen& Screen::set(pos row, pos col, char ch) {
    contents[row*width + col] = ch;
    return *this;
}
Screen& Screen::display(std::ostream& os) {
    do_display(os);
    return *this;
}
const Screen& Screen::display(std::ostream& os) const {
    do_display(os);
    return *this;
}


// THIRD STEP
void Window_mgr::clear(ScreenIndex i) {
    Screen& s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

#endif //INC_99_EXERCISE7_32_WINDOW_MGR_H

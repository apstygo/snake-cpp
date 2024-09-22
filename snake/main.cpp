#include "cpp-terminal/color.hpp"
#include "cpp-terminal/terminal.hpp"

#include <iostream>

int main() {
    std::cout << "Hello, world 🐍" << std::endl;
    std::cout << Term::color_fg(Term::Color::Name::Red) << "Hello world!"
              << color_fg(Term::Color::Name::Default) << std::endl;
}

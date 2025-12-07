// CppSimplifyLibrary - Beginner-friendly C++ I/O library
// Licensed under the Apache License, Version 2.0
// You may obtain a copy of the License at:
// http://www.apache.org/licenses/LICENSE-2.0
#ifndef CPPSL_H
#define CPPSL_H

#include <iostream>
#include <string>
#include <limits>

namespace csl {

inline std::string_view InputStringNumError =
    "Invalid input! Please check your numeric input!";

// Newline print, printnl instead of println due to C++23 syntax conflicts.
template<typename T>
inline void printnl(const T& x) {
    std::cout << x << std::endl;
}

// Print (no NL), printc instead of print due to C++23 syntax conflicts.
template<typename T>
inline void printc(const T& x) {
    std::cout << x;
}

// Overload for strings (full line input)
inline void input(const std::string& prompt, std::string& var) {
    std::cout << prompt;
    std::getline(std::cin, var);
}

// Template for numeric types (int, double, float, long, etc) and other operator>> types
template <typename T>
inline void input(const std::string& prompt, T& var) {
    std::cout << prompt;
    while (!(std::cin >> var)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << InputStringNumError;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Remove leftover NL
}

}


#endif


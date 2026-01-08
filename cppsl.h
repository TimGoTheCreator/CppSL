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

inline std::string InputStringOnNumError =
    "Invalid input! Please check your numeric input!";

// Newline print
template<typename T>
inline void outln(const T& x) {
    std::cout << x << std::endl;
}

// Print (no NL)
template<typename T>
inline void out(const T& x) {
    std::cout << x;
}

// Overload for strings (full line input)
inline void input(const std::string& prompt, std::string& var) {
    std::cout << prompt;
    std::getline(std::cin, var);
}

// Template for numeric types (int, double, float, long, etc) and other operator>> types, use an overload to accomplish same name in num + str.
template <typename T>
inline void input(const std::string& prompt, T& var) {
    std::cout << prompt;
    while (!(std::cin >> var)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << InputStringOnNumError;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Remove leftover NL
}

}


#endif





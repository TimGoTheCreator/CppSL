# CppSL: C++ Simplify Library
![Language](https://img.shields.io/badge/language-C++-blue.svg)
![License](https://img.shields.io/badge/license-Apache%202.0-green.svg)
![Header-only](https://img.shields.io/badge/design-header--only-lightgrey.svg)

CppSL is a small, beginner-friendly, **single-header** C++ library that simplifies
basic console input and output, with built-in validation for numeric input.

Example:

```cpp
#include "cppsl.h"
using namespace csl;

int main() {
    std::string name;
    input("Enter your name: ", name);

    int age;
    input("Enter your age: ", age);

    out("Hello, ");
    outln(name);
    out("You are ");
    outln(age);
}
```

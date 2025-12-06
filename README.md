# CppSL: C++ Simplify Library
![Language](https://img.shields.io/badge/language-C++-blue.svg)
![License](https://img.shields.io/badge/license-Apache%202.0-green.svg)
![Header-only](https://img.shields.io/badge/design-header--only-lightgrey.svg)

Single-header library (`cppsl.h`) to simplify C++ console I/O.

Example:

```cpp
#include "cppsl.h"
using namespace csl;

int main() {
    std::string name;
    input("Enter your name: ", name);

    int age;
    input("Enter your age: ", age);

    print("Hello, ");
    printnl(name);
    print("You are ");
    printnl(age);
}
```

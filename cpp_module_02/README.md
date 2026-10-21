# C++ Module 02 — Ad-hoc Polymorphism, Operator Overloading and Orthodox Canonical Form

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++" />
  <img src="https://img.shields.io/badge/Standard-C++98-00599C?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/42%20Yerevan-Module%2002-black?style=for-the-badge" alt="42 Yerevan Module 02" />
</p>

## Overview

**C++ Module 02** introduces ad-hoc polymorphism through operator overloading and explores the Orthodox Canonical Form (OCF), a conventional structure for C++ classes.

The module focuses on creating user-defined types that behave naturally with operators, implementing fixed-point numbers, and managing object construction, copying, assignment, and destruction.

All exercises follow the **C++98 standard** and build on the object-oriented programming concepts introduced in previous modules.

## Learning Objectives

- Understand ad-hoc polymorphism.
- Overload operators to define custom type behavior.
- Implement the Orthodox Canonical Form.
- Understand constructors, copy constructors, assignment operators, and destructors.
- Implement and manipulate fixed-point numbers.
- Work with integer and floating-point conversions.
- Understand prefix and postfix increment and decrement operators.
- Compare objects using overloaded comparison operators.
- Use static member functions and attributes.
- Design classes with predictable and consistent behavior.

## Exercises

| Exercise | Topic | Description |
|:---:|---|---|
| [ex00](./ex00/) | My First Class in Orthodox Canonical Form | Implement a basic fixed-point number class following OCF. |
| [ex01](./ex01/) | Towards a more useful fixed-point number class | Add constructors, conversions, and stream insertion. |
| [ex02](./ex02/) | Now we're talking | Implement arithmetic, comparison, and increment/decrement operators. |
| [ex03](./ex03/) | BSP | Determine whether a point lies inside a triangle using the Binary Space Partitioning exercise requirements. |

### Exercise 00 — My First Class in Orthodox Canonical Form

**Directory:** `ex00/`

The goal is to implement a `Fixed` class that stores a fixed-point value using an integer representation and a specified number of fractional bits.

The class follows the Orthodox Canonical Form, establishing a consistent pattern for object construction, copying, assignment, and destruction.

**Concepts practiced:**
- Class design
- Default constructor
- Copy constructor
- Copy assignment operator
- Destructor
- Private data members
- Static constants
- Orthodox Canonical Form

### Exercise 01 — Towards a more useful fixed-point number class

**Directory:** `ex01/`

The goal is to extend the `Fixed` class with constructors that accept integers and floating-point values, along with conversion methods that return integer or floating-point representations.

The exercise also introduces stream insertion to display fixed-point values conveniently.

**Concepts practiced:**
- Constructor overloading
- Integer-to-fixed-point conversion
- Floating-point-to-fixed-point conversion
- Fixed-point-to-integer conversion
- Fixed-point-to-floating-point conversion
- Stream insertion operator (`<<`)
- Bit shifting and rounding

### Exercise 02 — Now we're talking

**Directory:** `ex02/`

The goal is to make the `Fixed` class behave more like a numeric type by implementing comparison, arithmetic, and increment/decrement operators.

The class also provides functions to identify the minimum and maximum of two fixed-point values.

**Concepts practiced:**
- Operator overloading
- Comparison operators (`<`, `>`, `<=`, `>=`, `==`, `!=`)
- Arithmetic operators (`+`, `-`, `*`, `/`)
- Prefix and postfix increment and decrement
- Static and non-static member functions
- Const correctness
- Returning references and values appropriately

### Exercise 03 — BSP

**Directory:** `ex03/`

The goal is to implement a function that determines whether a point lies inside a triangle using the provided `Point` and `Fixed` classes.

The solution uses geometric calculations to determine whether the point is inside the triangle, rather than on its edges or vertices.

**Concepts practiced:**
- Fixed-point arithmetic
- Operator overloading in practical use
- Geometry and triangle calculations
- Function parameters and return values
- Const correctness
- Handling boundary cases

*Note: Follow the official subject for the exact function signatures, constraints, and expected behavior.*

## Compilation and Execution

Each exercise is an independent C++ program. Navigate to its directory and use its Makefile.

For example:

```bash
cd ex00
make
./fixed
```

The executable name may vary depending on your Makefile.

For exercises with a test program, compile and run the provided `main.cpp` together with the required implementation files.

### Common Makefile Commands

| Command | Purpose |
|---|---|
| `make` | Compile the program |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and executable |
| `make re` | Clean and rebuild |

## Technical Requirements

- **Language:** C++
- **Standard:** C++98
- **Compiler flags:** `-Wall -Wextra -Werror`
- **Build system:** Makefile
- **Main topics:** Operator overloading, fixed-point arithmetic, and Orthodox Canonical Form

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use the provided Makefile whenever available, as individual exercises may have specific source files and build requirements.

## Key Takeaways

Through this module, I have practiced:

- Designing classes that follow Orthodox Canonical Form.
- Overloading operators to give custom classes intuitive behavior.
- Managing copy construction and copy assignment.
- Converting between integer, floating-point, and fixed-point representations.
- Implementing numeric comparisons and arithmetic.
- Understanding prefix and postfix operator behavior.
- Applying fixed-point numbers to a practical geometry problem.
- Writing clear, reusable, and standards-compliant C++ code.

## Repository Structure

```text
cpp_module_02/
├── README.md
├── ex00/
├── ex01/
├── ex02/
└── ex03/
```

Each exercise directory contains its implementation and, where applicable, a Makefile and test program.

## Author

**42 Yerevan Student: etamazya**

Part of my C++ learning journey at 42 Yerevan.

GitHub: [@ETamazyan](https://github.com/ETamazyan)

---

*Module 02 — Making custom types behave like native C++ types.*

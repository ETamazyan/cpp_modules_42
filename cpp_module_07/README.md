# C++ Module 07 — C++ Templates

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++" />
  <img src="https://img.shields.io/badge/Standard-C++98-00599C?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/42%20Yerevan-Module%2007-black?style=for-the-badge" alt="42 Yerevan Module 07" />
</p>

## Overview

**C++ Module 07** introduces templates, a powerful C++ feature that allows functions and classes to work with different data types without duplicating implementations.

The module focuses on generic programming through function templates, reusable iteration logic, and a dynamically allocated array class.

Through three exercises, I implement generic utility functions, create a function that applies an operation to every element of an array, and design a type-safe array class with bounds checking and proper resource management.

All exercises follow the **C++98 standard**.

## Learning Objectives

- Understand generic programming and template syntax.
- Implement function templates.
- Create reusable functions that support different data types.
- Understand template argument deduction.
- Apply functions to array elements using a generic iteration function.
- Implement class templates.
- Manage dynamically allocated arrays.
- Apply the Orthodox Canonical Form where required.
- Implement copy constructors and copy assignment operators.
- Perform deep copies of dynamically allocated resources.
- Overload the subscript operator.
- Handle out-of-bounds access using exceptions.
- Write reusable and type-safe C++ code.

## Exercises

| Exercise | Name | Description |
|:---:|---|---|
| [ex00](./ex00/) | Start with a few functions | Implement generic `swap()`, `min()`, and `max()` function templates. |
| [ex01](./ex01/) | Iter | Implement a function template that applies a given function to each element of an array. |
| [ex02](./ex02/) | Array | Implement a generic `Array` class with dynamic allocation, copying, size tracking, and bounds checking. |

### Exercise 00 — Start with a few functions

**Directory:** `ex00/`

The goal is to implement three function templates: `swap()`, `min()`, and `max()`.

These functions operate on two values of the same type. They should work with any type that supports the required operations.

- `swap()` exchanges the values of two variables.
- `min()` returns the smaller value.
- `max()` returns the greater value.

When the values are equal, `min()` and `max()` return the second argument, as specified by the subject.

**Concepts practiced:**
- Function templates
- Generic programming
- Template argument deduction
- References and value manipulation
- Comparison operators
- Reusable utility functions
- Defining template functions in header files

### Exercise 01 — Iter

**Directory:** `ex01/`

The goal is to implement a function template named `iter()` that receives an array, its length, and a function to apply to its elements.

The function calls the provided operation for each element, allowing the same iteration logic to work with different data types and operations.

**Concepts practiced:**
- Function templates
- Generic array processing
- Function pointers and callbacks
- Array pointers and sizes
- Applying operations to individual elements
- Reusable iteration logic
- Const correctness where appropriate

### Exercise 02 — Array

**Directory:** `ex02/`

The goal is to implement a class template named `Array` that behaves like a simplified array container.

The class must support creating an empty array or an array of a specified size, accessing elements through `operator[]`, reporting the array size, and copying arrays safely.

Access outside the valid index range must throw an exception. Copying an array must create an independent copy of its elements rather than sharing the same dynamically allocated memory.

**Concepts practiced:**
- Class templates
- Dynamic memory allocation with `new[]`
- Resource management with `delete[]`
- Default and parameterized constructors
- Copy constructors
- Copy assignment operators
- Deep copying
- Operator overloading
- Const and non-const element access
- Bounds checking
- Exception handling
- Orthodox Canonical Form

*Note: Follow the official subject for the exact function signatures, required files, exception behavior, and implementation constraints.*

## Function Templates vs. Class Templates

Templates allow the same implementation to be reused with different data types.

| Feature | Function Template | Class Template |
|---|---|---|
| Purpose | Create generic functions | Create generic types |
| Example | `min<int>(a, b)` | `Array<int>` |
| Reuse | Applies an operation to different types | Manages objects of different types |
| Module exercise | `ex00`, `ex01` | `ex02` |

## Example — Function Template

A generic function can compare values of different supported types without requiring a separate implementation for each type.

```cpp
template <typename T>
T min(T const& a, T const& b)
{
    return (a < b) ? a : b;
}
```

This simplified example illustrates the syntax of a function template. The actual exercise implementation must also follow the subject's required behavior when both values are equal.

## Example — Class Template

A class template can provide the same container functionality for different element types.

```cpp
Array<int> numbers(5);
Array<std::string> words(3);
```

Both objects use the same `Array` implementation while storing different types of elements.

For the exercise, the class must also manage memory safely, support independent copies, and validate element access.

## Compilation and Execution

Each exercise is an independent C++ program. Navigate to the relevant directory and use the provided Makefile.

For Exercise 00:

```bash
cd ex00
make
```

For Exercise 01:

```bash
cd ../ex01
make
```

For Exercise 02:

```bash
cd ../ex02
make
```

Run the executable generated by each Makefile. Executable names and test cases depend on your implementation.

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
- **Main topics:** Function templates, class templates, generic programming, and memory management

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use the provided Makefile whenever available.

Template definitions generally need to be available where the compiler instantiates them, so the exercises commonly define their templates in header files.

## Key Takeaways

Through this module, I have practiced:

- Writing reusable functions with templates.
- Applying generic operations to different data types.
- Implementing generic array iteration.
- Designing class templates.
- Managing dynamically allocated memory safely.
- Implementing copy construction and assignment for template classes.
- Understanding deep copying and resource ownership.
- Overloading operators to create intuitive interfaces.
- Protecting containers against invalid element access.
- Using exceptions to report out-of-bounds access.
- Writing reusable, type-safe, and maintainable C++98 code.

## Repository Structure

```text
cpp_module_07/
├── README.md
├── ex00/
├── ex01/
└── ex02/
```

Each exercise directory contains its implementation, Makefile, and any required test files.

## Author

**42 Yerevan Student: etamazya**

Part of my C++ learning journey at 42 Yerevan.

GitHub: [@ETamazyan](https://github.com/ETamazyan)

---

*Module 07 — Writing reusable and type-safe code with C++ templates.*

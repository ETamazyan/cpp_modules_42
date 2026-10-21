# C++ Module 08 — Templated Containers, Iterators and Algorithms

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++" />
  <img src="https://img.shields.io/badge/Standard-C++98-00599C?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/42%20Yerevan-Module%2008-black?style=for-the-badge" alt="42 Yerevan Module 08" />
</p>

## Overview

**C++ Module 08** introduces the Standard Template Library (STL), focusing on containers, iterators, and algorithms.

The module builds on the template concepts from Module 07 and explores how to work with existing C++ data structures, search for values efficiently, calculate distances between numbers, and extend container functionality using inheritance.

Through three exercises, I implement a generic search function, a `Span` class that calculates the shortest and longest distances between stored numbers, and a `MutantStack` class that provides iterator support for a stack.

All exercises follow the **C++98 standard**.

## Learning Objectives

- Understand the Standard Template Library (STL).
- Work with standard containers such as `vector`, `list`, and `deque`.
- Understand iterators and their role in container traversal.
- Use STL algorithms to search for elements.
- Implement generic functions that work with compatible containers.
- Design classes that store and process collections of data.
- Calculate minimum and maximum distances between numeric values.
- Handle capacity limits and invalid operations.
- Use iterator ranges to insert or process multiple elements.
- Extend standard container adapters through inheritance.
- Implement iterator access for a custom container class.
- Write reusable and maintainable C++98 code.

## Exercises

| Exercise | Name | Description |
|:---:|---|---|
| [ex00](./ex00/) | Easy find | Implement a function template that searches for an integer in an STL container. |
| [ex01](./ex01/) | Span | Store up to a fixed number of integers and calculate the shortest and longest spans between them. |
| [ex02](./ex02/) | Mutated abomination | Extend `std::stack` with iterator support so its elements can be traversed. |

### Exercise 00 — Easy find

**Directory:** `ex00/`

The goal is to implement a function template named `easyfind()` that searches for the first occurrence of an integer in a container.

The function accepts a container of integers and the value to search for. It uses an STL algorithm to find the element and handles the situation when the value is not present.

**Concepts practiced:**
- Function templates
- STL containers
- STL algorithms, including `std::find`
- Iterators
- Generic programming
- Container traversal
- Exception handling or error reporting
- Working with different container types

### Exercise 01 — Span

**Directory:** `ex01/`

The goal is to implement a `Span` class that stores a maximum of `N` integers.

The class provides two main operations:

- `shortestSpan()` — calculates the smallest distance between two stored numbers.
- `longestSpan()` — calculates the largest distance between two stored numbers.

The class must handle insufficient data and prevent more elements from being added than its capacity allows. It also supports adding multiple numbers efficiently using an iterator range.

**Concepts practiced:**
- Class design and encapsulation
- STL containers, such as `std::vector`
- Sorting and STL algorithms
- Iterators and iterator ranges
- Numeric distance calculations
- Capacity management
- Exception handling
- Handling duplicate values and boundary cases
- Efficient bulk insertion

### Exercise 02 — Mutated abomination

**Directory:** `ex02/`

The goal is to implement a `MutantStack` class that inherits from `std::stack` and provides iterator access to its underlying elements.

A standard stack is a container adapter designed around last-in, first-out (LIFO) access. It does not expose the usual `begin()` and `end()` interface directly.

The custom `MutantStack` makes it possible to traverse its contents using iterators while preserving the standard stack operations, such as `push()`, `pop()`, and `top()`.

**Concepts practiced:**
- STL container adapters
- Inheritance
- Template classes
- Iterators
- Container access through the underlying container
- `begin()` and `end()`
- Forward and reverse traversal where supported
- Code reuse and generic programming
- Understanding stack behavior and LIFO ordering

*Note: Follow the official subject for exact function signatures, required exceptions, iterator types, and implementation constraints.*

## STL Containers, Iterators and Algorithms

The Standard Template Library provides reusable data structures and algorithms that make C++ programs easier to maintain.

| Component | Purpose | Example |
|---|---|---|
| Containers | Store collections of elements | `std::vector<int>` |
| Iterators | Traverse elements in a container | `container.begin()` |
| Algorithms | Process or search collections | `std::find()` |
| Container adapters | Provide specialized interfaces over containers | `std::stack<int>` |
| Templates | Allow reusable code for different types | `easyfind<T>()` |

## Example — Searching with an Iterator

The following example illustrates the use of `std::find` to search a container.

```cpp
#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    std::vector<int>::iterator it =
        std::find(numbers.begin(), numbers.end(), 20);

    if (it != numbers.end())
        std::cout << "Found: " << *it << std::endl;

    return 0;
}
```

The returned iterator points to the first matching element, or to `end()` if no matching element exists.

## Example — Calculating a Span

Consider a collection containing the following values:

```text
Numbers:  6,  3,  17,  9,  11
```

The sorted values are:

```text
3, 6, 9, 11, 17
```

The shortest span is `2`, between `9` and `11`. The longest span is `14`, between `3` and `17`.

This exercise demonstrates how container operations and algorithms can be combined to solve numeric problems.

## Compilation and Execution

Each exercise is an independent C++ program. Navigate to its directory and use the provided Makefile.

For Exercise 00:

```bash
cd ex00
make
./easyfind
```

For Exercise 01:

```bash
cd ../ex01
make
./span
```

For Exercise 02:

```bash
cd ../ex02
make
./mutantstack
```

These executable names are examples; use the actual executable names defined in your Makefiles.

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
- **Main topics:** STL containers, iterators, algorithms, templates, and container adapters

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use the provided Makefile whenever available, as each exercise may have specific source files and build requirements.

## Key Takeaways

Through this module, I have practiced:

- Working with STL containers and their interfaces.
- Using iterators to access and traverse elements.
- Applying standard algorithms to container data.
- Implementing generic functions using templates.
- Building a collection class with capacity restrictions.
- Calculating shortest and longest numeric spans.
- Handling invalid operations and insufficient data.
- Extending standard container adapters through inheritance.
- Adding iterator functionality to a stack-like structure.
- Writing reusable and maintainable C++98 code.

## Repository Structure

```text
CPP_Module_08/
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

*Module 08 — Working with containers, iterators, and algorithms in C++.*

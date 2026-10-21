# C++ Module 00 — Introduction to C++

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-C++98-blue?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/42%20Yerevan-Module%2000-black?style=for-the-badge" alt="42 Yerevan Module 00" />
</p>

## Overview

**C++ Module 00** introduces the fundamental concepts of C++ programming. It focuses on understanding the differences between C and C++, learning how to design classes, and becoming familiar with object-oriented programming.

The module introduces namespaces, classes, member functions, standard input/output streams, initialization lists, static members, and basic class design.

All exercises are designed around the **C++98 standard** and encourage clean, readable, and maintainable code.

## Learning Objectives

- Understand the fundamentals of C++ syntax.
- Learn how to define and implement classes.
- Understand public and private access specifiers.
- Work with member functions and object instances.
- Use constructors and initialization lists.
- Understand namespaces and static members.
- Use standard input/output streams.
- Practice encapsulation and basic object-oriented design.
- Compile programs using the required C++98 standard.

## Exercises

| Exercise | Topic | Description |
|:---:|---|---|
| [ex00](./ex00/) | Megaphone | Introduction to C++ compilation, command-line arguments, and character manipulation. |
| [ex01](./ex01/) | My Awesome PhoneBook | Introduction to classes, objects, encapsulation, and basic contact management. |
| [ex02](./ex02/) | The Job Of Your Dreams | Introduction to classes, member functions, timestamps, and working with existing code. |

### Exercise 00 — Megaphone

**Directory:** `ex00/`

The goal is to create a program that converts its command-line arguments to uppercase and prints the result.

If no arguments are provided, the program displays a predefined fallback message.

**Concepts practiced:**
- Command-line arguments (`argc` and `argv`)
- Standard output with `std::cout`
- String and character manipulation
- Basic C++ compilation

### Exercise 01 — My Awesome PhoneBook

**Directory:** `ex01/`

The goal is to implement a simple command-line phonebook that allows users to add contacts, search for existing contacts, and exit the program.

The phonebook stores a limited number of contacts and provides a basic interface for interacting with them.

**Concepts practiced:**
- Classes and objects
- Constructors and data members
- Encapsulation with `private` and `public`
- Member functions
- Standard input/output
- String handling and input validation
- Separating class declarations from implementations

### Exercise 02 — The Job Of Your Dreams

**Directory:** `ex02/`

The goal is to recreate a missing `Account` class implementation using the provided source files, header, and expected behavior.

The exercise emphasizes reading existing code and understanding how class methods interact with object state.

**Concepts practiced:**
- Class declarations and implementations
- Member functions
- Static data members and static member functions
- Constructors and destructors
- Object state management
- Timestamps and formatted output
- Working with an existing codebase

*Note: Check your official subject for the precise requirements and expected output of each exercise.*

## Compilation and Execution

The exercises are independent programs. Navigate to the corresponding exercise directory before compiling.

For example, for Exercise 00:

```bash
cd ex00
make
./megaphone "hello from 42"
```

Expected output:

```text
HELLO FROM 42
```

For Exercise 01, compile and run the program using its Makefile:

```bash
cd ../ex01
make
./phonebook
```

For Exercise 02, use the executable name and compilation instructions defined by its Makefile or subject.

### Common Makefile Commands

If the exercise's Makefile provides the standard targets, you can use:

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
- **Programming paradigm:** Object-oriented programming

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use the provided Makefile whenever available, as each exercise may have its own source files, executable name, and build requirements.

## Key Takeaways

After completing this module, I have practiced:

- Writing and compiling basic C++ programs.
- Designing classes and creating objects.
- Encapsulating data and behavior.
- Handling user input and command-line arguments.
- Implementing member functions and constructors.
- Understanding static members and object lifecycles.
- Organizing source code into header and implementation files.
- Following the constraints of the C++98 standard.

## Repository Structure

```text
cpp_module_00/
├── README.md
├── ex00/
│   ├── Makefile
│   └── ...
├── ex01/
│   ├── Makefile
│   └── ...
└── ex02/
    ├── Makefile
    └── ...
```

The exact files may vary depending on your implementation.

## Author

**42 Yerevan Student**

Part of my C++ learning journey at 42 Yerevan.

GitHub: [@ETamazyan](https://github.com/ETamazyan)

---

*Module 00 — Building a foundation in C++.*

# C++ Module 01 — Memory Allocation, Pointers and References

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-C++98-blue?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/42%20Yerevan-Module%2001-black?style=for-the-badge" alt="42 Yerevan Module 01" />
</p>

## Overview

**C++ Module 01** builds on the foundations introduced in Module 00 and explores memory management, pointers, references, and object lifecycles.

The module introduces dynamic memory allocation, the differences between stack and heap allocation, references, pointers to members, and file input/output. It also encourages a deeper understanding of how objects are created, accessed, copied, and destroyed.

All exercises follow the **C++98 standard** and emphasize memory safety, resource management, and object-oriented programming.

## Learning Objectives

- Understand stack and heap memory allocation.
- Work with pointers and references.
- Use `new` and `delete` for dynamic memory management.
- Understand object construction and destruction.
- Pass objects and values through functions.
- Work with references to existing objects.
- Use pointers to member functions.
- Read from and write to files.
- Manipulate strings and process input.
- Understand basic resource ownership and memory safety.

## Exercises

|    Exercise     | Topic                | Description                                                                   |
| :-------------: | -------------------- | ----------------------------------------------------------------------------- |
| [ex00](./ex00/) | BraiiiiiiinnnzzzZ    | Create and manage objects using dynamic memory allocation.                    |
| [ex01](./ex01/) | Moar brainz!         | Allocate and initialize an array of objects dynamically.                      |
| [ex02](./ex02/) | HI THIS IS BRAIN     | Explore pointers, references, and memory addresses.                           |
| [ex03](./ex03/) | Unnecessary violence | Model characters and weapons using references and pointers.                   |
| [ex04](./ex04/) | Sed is for losers    | Replace occurrences of a string in a file and write the result to a new file. |
| [ex05](./ex05/) | Harl 2.0             | Use pointers to member functions to select behavior.                          |
| [ex06](./ex06/) | Harl filter          | Filter messages according to their severity level using a switch statement.   |

### Exercise 00 — BraiiiiiiinnnzzzZ

**Directory:** `ex00/`

The goal is to create a `Zombie` class and implement a function that allocates a zombie dynamically.

The exercise demonstrates the difference between objects allocated on the stack and objects allocated on the heap.

**Concepts practiced:**

- Class construction
- Stack versus heap allocation
- Dynamic memory allocation with `new`
- Memory deallocation with `delete`
- Object lifecycles

### Exercise 01 — Moar brainz!

**Directory:** `ex01/`

The goal is to create multiple zombie objects in a dynamically allocated array and initialize their names.

This exercise reinforces dynamic allocation and introduces the management of arrays of objects.

**Concepts practiced:**

- Dynamic array allocation
- Array initialization
- Constructors and destructors
- `new[]` and `delete[]`
- Resource management

### Exercise 02 — HI THIS IS BRAIN

**Directory:** `ex02/`

The goal is to demonstrate the relationship between a variable, a pointer to that variable, and a reference to that variable.

The program displays the memory address and value accessed through each representation.

**Concepts practiced:**

- Pointers and references
- Address-of operator (`&`)
- Dereference operator (`*`)
- Memory addresses
- References as aliases

### Exercise 03 — Unnecessary violence

**Directory:** `ex03/`

The goal is to model a `HumanA`, a `HumanB`, and a `Weapon` class, demonstrating different ways for objects to access another object's state.

One human stores a reference to a weapon, while the other stores a pointer that can be changed or left uninitialized.

**Concepts practiced:**

- Object composition
- References versus pointers
- Member initialization lists
- Object relationships
- Resource lifetime considerations

### Exercise 04 — Sed is for losers

**Directory:** `ex04/`

The goal is to implement a program that reads a file, replaces every occurrence of a specified string with another string, and writes the result to a new file.

The original file must remain unchanged.

**Concepts practiced:**

- File input and output streams
- `std::ifstream` and `std::ofstream`
- String searching and replacement
- File error handling
- Command-line argument validation

### Exercise 05 — Harl 2.0

**Directory:** `ex05/`

The goal is to implement a `Harl` class that produces messages at different logging levels.

The exercise uses pointers to member functions to call the appropriate method for a selected level.

**Concepts practiced:**

- Pointers to member functions
- Classes and member methods
- Function dispatch
- Encapsulation
- Logging levels

### Exercise 06 — Harl filter

**Directory:** `ex06/`

The goal is to filter Harl's messages according to a specified minimum logging level.

A switch statement is used to select the appropriate starting level and display messages at that level and above.

**Concepts practiced:**

- `switch` statements
- Control flow
- Logging and severity levels
- Conditional message output
- Program argument handling

## Compilation and Execution

Each exercise is an independent program with its own source files and Makefile.

For example:

```bash
cd ex00
make
./zombie
```

For exercises that require command-line arguments, provide them according to the subject. For example:

```bash
cd ../ex04
make
./replace input.txt "old" "new"
```

For Exercise 06, the program typically accepts a logging level:

```bash
cd ../ex06
make
./harlFilter WARNING
```

The exact executable names and required arguments depend on the implementation and the official subject.

### Common Makefile Commands

| Command       | Purpose                            |
| ------------- | ---------------------------------- |
| `make`        | Compile the program                |
| `make clean`  | Remove object files                |
| `make fclean` | Remove object files and executable |
| `make re`     | Clean and rebuild                  |

## Technical Requirements

- **Language:** C++
- **Standard:** C++98
- **Compiler flags:** `-Wall -Wextra -Werror`
- **Build system:** Makefile
- **Main topics:** Memory management, pointers, references, and file I/O

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use each exercise's Makefile whenever available.

## Key Takeaways

Through this module, I have practiced:

- Managing dynamically allocated memory.
- Understanding the differences between pointers and references.
- Working with arrays of objects.
- Considering object lifetimes and resource ownership.
- Implementing file processing and string replacement.
- Using pointers to member functions.
- Designing small programs with clear responsibilities.
- Handling input errors and invalid arguments.

## Repository Structure

```text
cpp_module_01/
├── README.md
├── ex00/
├── ex01/
├── ex02/
├── ex03/
├── ex04/
├── ex05/
└── ex06/
```

Each exercise directory contains its implementation and, where applicable, a Makefile.

## Author

**42 Yerevan Student: etamazya**

Part of my C++ learning journey at 42 Yerevan.

GitHub: [@ETamazyan](https://github.com/YOUR_GITHUB_USERNAME)

---

_Module 01 — Understanding memory, pointers, and object lifecycles._

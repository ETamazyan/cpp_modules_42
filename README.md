# C++ Modules — 42 Yerevan

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++" />
  <img src="https://img.shields.io/badge/Standard-C%2B%2B98-00599C?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/School-42%20Yerevan-black?style=for-the-badge" alt="42 Yerevan" />
</p>

## About

This repository contains my implementations of the **C++ Modules 00–09** from the 42 School curriculum at 42 Yerevan.

The modules introduce C++ programming progressively, starting with fundamental language features and object-oriented programming and advancing to inheritance, polymorphism, exception handling, templates, and the Standard Template Library (STL).

Each module consists of a series of exercises designed to strengthen my understanding of C++ through practical programming challenges.

The projects follow the **C++98 standard**, with an emphasis on writing clear, maintainable, and standards-compliant code.

## Learning Objectives

Throughout these modules, I work with:

- C++ syntax and fundamental programming concepts
- Classes, objects, constructors, and destructors
- Encapsulation and object-oriented design
- Memory allocation and resource management
- Pointers, references, and file streams
- Operator overloading and Orthodox Canonical Form
- Inheritance, polymorphism, and abstract classes
- Exception handling and custom exceptions
- C++ type casting
- Function and class templates
- STL containers, iterators, and algorithms
- Code organization, compilation, and debugging

## Modules Overview

|              Module               | Main Topics                                                                                  |  Status   |
| :-------------------------------: | -------------------------------------------------------------------------------------------- | :-------: |
| [CPP Module 00](./cpp_odule_00/) | Namespaces, classes, member functions, I/O streams, initialization lists, and static members | Completed |
| [CPP Module 01](./cpp_odule_01/) | Memory allocation, pointers, references, switch statements, and file streams                 | Completed |
| [CPP Module 02](./cpp_odule_02/) | Ad-hoc polymorphism, operator overloading, and Orthodox Canonical Form                       | Completed |
| [CPP Module 03](./cpp_odule_03/) | Inheritance and class hierarchies                                                            | Completed |
| [CPP Module 04](./cpp_odule_04/) | Subtype polymorphism, abstract classes, interfaces, and deep copying                         | Completed |
| [CPP Module 05](./cpp_odule_05/) | Repetition, exceptions, and error handling                                                   | Completed |
| [CPP Module 06](./cpp_odule_06/) | C++ type conversions and casts                                                               | Completed |
| [CPP Module 07](./cpp_odule_07/) | Function templates, class templates, and template specialization                             | Completed |
| [CPP Module 08](./cpp_odule_08/) | Templated containers, iterators, and algorithms                                              | Completed |
| [CPP Module 09](./cpp_odule_09/) | STL containers, data processing, and algorithmic problem-solving                             | Completed |

## Repository Structure

Each module is organized into its own directory. Individual exercises are stored inside their respective module directories.

```text
CPP_modules/
├── README.md
├── cpp_odule_00/
├── cpp_odule_01/
├── cpp_odule_02/
├── cpp_odule_03/
├── cpp_odule_04/
├── cpp_odule_05/
├── cpp_odule_06/
├── cpp_odule_07/
├── cpp_odule_08/
└── cpp_odule_09/
```

Each module's README provides an overview of its objectives, covered concepts, and exercises.

## Compilation and Execution

Most exercises include a `Makefile` to simplify compilation.

Navigate to the module and exercise you want to run, then use the available Makefile targets.

```bash
# Navigate to a module
cd cpp_module_00

# Navigate to an exercise
cd ex00

# Compile
make

# Remove object files
make clean

# Remove object files and executable
make fclean

# Clean and rebuild
make re
```

The exact executable name and available commands depend on the exercise. Check its README or Makefile before running it.

### Compiler Requirements

The projects are designed for a C++98-compatible compiler.

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use the exercise's own Makefile when available, as some exercises require specific source files or additional compilation settings.

## Skills Developed

By completing these modules, I have gained practical experience with:

- **Object-oriented programming:** designing classes, managing object lifecycles, and applying encapsulation.
- **Memory management:** working with dynamic allocation, pointers, references, and object ownership.
- **C++ language features:** implementing overloaded operators, inheritance, polymorphism, and type conversions.
- **Error handling:** designing exception-safe behavior and handling exceptional situations.
- **Generic programming:** creating reusable functions and classes using templates.
- **STL:** using containers, iterators, and algorithms to solve programming problems.
- **Problem-solving:** breaking down specifications into manageable exercises and implementing solutions within defined constraints.
- **Build tools:** compiling and organizing projects with Makefiles and compiler flags.

## Development Environment

- **Language:** C++
- **Standard:** C++98
- **Compiler:** `c++` / `g++` / `clang++`
- **Build system:** Makefiles
- **Platform:** Linux / Unix-like environment
- **Version control:** Git and GitHub

## Academic Context

These projects are part of my learning journey at **42 Yerevan**, where practical assignments, independent learning, and peer evaluation are central to the educational experience.

The repository documents my implementations and progress through the C++ curriculum.

## Notes

- Each exercise should be reviewed alongside its corresponding subject.
- Compilation requirements and exercise-specific restrictions take precedence over generic examples in this README.
- The code is intended for educational purposes and as a demonstration of my C++ development skills.
- If you are a 42 student, use these implementations as a learning reference rather than copying solutions without understanding them.

## Author

**42 Yerevan Student: etamazya**

GitHub: [@ETamazyan](https://github.com/ETamazyan)

---

_Learning C++ one module at a time._

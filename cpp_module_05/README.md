# C++ Module 05 — Repetition and Exceptions

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++" />
  <img src="https://img.shields.io/badge/Standard-C++98-00599C?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/42%20Yerevan-Module%2005-black?style=for-the-badge" alt="42 Yerevan Module 05" />
</p>

## Overview

**C++ Module 05** focuses on exception handling and strengthens object-oriented programming skills through a simulated bureaucratic system.

The module introduces custom exceptions, grade-based permissions, form validation, abstract classes, and polymorphic execution. Each exercise builds on the previous one, progressively expanding the system's functionality.

Through these exercises, I work with `Bureaucrat`, `Form`, `AForm`, several specialized form classes, and an `Intern` capable of creating forms dynamically.

All exercises follow the **C++98 standard**.

## Learning Objectives

- Understand exception handling using `try`, `catch`, and `throw`.
- Create and handle custom exceptions.
- Validate object states and enforce constraints.
- Understand the relationship between exception handling and class design.
- Implement the Orthodox Canonical Form where required.
- Use constructors, destructors, and assignment operators correctly.
- Design abstract classes and concrete derived classes.
- Apply inheritance and polymorphism to execute different behaviors.
- Manage form signing and execution permissions.
- Create objects dynamically based on runtime input.
- Improve error handling and program reliability.

## Exercises

| Exercise | Name | Description |
|:---:|---|---|
| [ex00](./ex00/) | Mommy, when I grow up, I want to be a bureaucrat! | Implement a `Bureaucrat` class with grade restrictions and custom exceptions. |
| [ex01](./ex01/) | Form up, maggots! | Introduce a `Form` class with signing requirements and bureaucrat interactions. |
| [ex02](./ex02/) | No, you need form 28B, not 28C... | Create an abstract `AForm` class and implement three specialized forms with different execution behaviors. |
| [ex03](./ex03/) | At least this beats coffee-making | Implement an `Intern` that creates forms dynamically based on their names. |

### Exercise 00 — Mommy, when I grow up, I want to be a bureaucrat!

**Directory:** `ex00/`

The goal is to implement a `Bureaucrat` class with a constant name and a grade ranging from 1 to 150. Grade 1 represents the highest rank, while grade 150 represents the lowest.

Operations that would move a bureaucrat outside the permitted grade range must throw the appropriate exception.

**Concepts practiced:**
- Class design and encapsulation
- Constant data members
- Constructors and destructors
- Orthodox Canonical Form
- Custom exception classes
- `std::exception`
- `throw`, `try`, and `catch`
- Prefixing and decrementing grades
- Operator overloading for stream output
- Input validation and boundary conditions

### Exercise 01 — Form up, maggots!

**Directory:** `ex01/`

The goal is to introduce a `Form` class that represents a document requiring authorization.

Each form has a name, a signed state, a required grade to sign it, and a required grade to execute it. A `Bureaucrat` can sign a form only when their grade is sufficiently high.

The `Bureaucrat` class is extended with functionality for attempting to sign forms and reporting success or failure.

**Concepts practiced:**
- Interaction between classes
- Object references
- Encapsulation and accessors
- Constant attributes
- Custom exceptions
- Validation of signing permissions
- Error reporting
- Overloading the stream insertion operator
- Separation of responsibilities between classes

### Exercise 02 — No, you need form 28B, not 28C...

**Directory:** `ex02/`

The goal is to transform `Form` into an abstract base class named `AForm` and implement three concrete forms.

Each concrete form has its own signing and execution requirements and performs a different action when executed successfully.

The forms are:

- **`ShrubberyCreationForm`** — creates a file containing ASCII trees.
- **`RobotomyRequestForm`** — simulates the robotization of a target, with a randomized chance of success.
- **`PresidentialPardonForm`** — announces that a target has been pardoned.

A form must be signed and executed by a bureaucrat with a sufficiently high grade. Invalid attempts are handled through exceptions.

**Concepts practiced:**
- Abstract classes
- Pure virtual functions
- Inheritance and polymorphism
- Form signing and execution
- Custom exceptions
- Permission checks
- File output
- Randomized behavior
- Separation of validation from execution
- Error handling in derived classes

### Exercise 03 — At least this beats coffee-making

**Directory:** `ex03/`

The goal is to implement an `Intern` class that creates forms dynamically based on a supplied form name and target.

The intern supports the three concrete form types introduced in Exercise 02. The form-creation logic must identify the requested type and return the appropriate form object, while handling unknown form names safely.

This exercise brings together exception handling, polymorphism, and dynamic object creation.

**Concepts practiced:**
- Dynamic memory allocation
- Abstract base classes
- Polymorphism
- Factory-style object creation
- Runtime selection of object types
- Returning base-class pointers
- Error handling for invalid input
- Reusable and maintainable creation logic

*Note: Follow the official subject for the exact method signatures, required form names, grade requirements, exception behavior, and output format.*

## Bureaucracy System Overview

The module progressively builds a small system in which bureaucrats can sign and execute forms.

```text
Bureaucrat
    |
    | signs / executes
    v
   AForm (abstract)
    |
    +-- ShrubberyCreationForm
    |
    +-- RobotomyRequestForm
    |
    +-- PresidentialPardonForm

Intern
    |
    +-- Creates concrete forms dynamically
```

The `Bureaucrat` class manages permissions, `AForm` defines common form behavior, concrete forms implement specialized actions, and `Intern` handles form creation.

## Exception Handling

Exceptions allow the program to report and handle exceptional situations without mixing every error check into the normal execution flow.

For example:

```cpp
try
{
    Bureaucrat bureaucrat("Alice", 0);
}
catch (const std::exception& e)
{
    std::cerr << e.what() << std::endl;
}
```

In this example, constructing a bureaucrat with grade `0` violates the permitted grade range and should raise an appropriate exception.

## Compilation and Execution

Each exercise is an independent C++ program. Navigate to its directory and use the provided Makefile.

For example:

```bash
cd ex00
make
```

Run the executable generated by your Makefile.

The same process applies to the other exercises:

```bash
cd ../ex01
make

cd ../ex02
make

cd ../ex03
make
```

Executable names depend on your Makefile and implementation. Check each exercise's files for the correct executable name and test arguments.

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
- **Main topics:** Exception handling, abstract classes, polymorphism, and dynamic form creation

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use the provided Makefile whenever available because the source files and compilation requirements differ between exercises.

## Key Takeaways

Through this module, I have practiced:

- Handling exceptional situations with custom exceptions.
- Validating data and enforcing class invariants.
- Designing classes that interact through well-defined interfaces.
- Implementing grade-based permission systems.
- Using abstract classes to define common behavior.
- Applying polymorphism to execute different actions.
- Managing dynamically created objects.
- Handling file operations and randomized behavior.
- Building maintainable systems with clear separation of responsibilities.
- Writing robust C++98 code with explicit error handling.

## Repository Structure

```text
cpp_module_05/
├── README.md
├── ex00/
├── ex01/
├── ex02/
└── ex03/
```

Each exercise directory contains its implementation, Makefile, and any required test files.

## Author

**42 Yerevan Student: etamazya**

Part of my C++ learning journey at 42 Yerevan.

GitHub: [@ETamazyan](https://github.com/ETamazyan)

---

*Module 05 — Handling exceptions and building a structured bureaucratic system in C++.*

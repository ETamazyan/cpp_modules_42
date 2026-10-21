# C++ Module 06 — C++ Casts

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++" />
  <img src="https://img.shields.io/badge/Standard-C++98-00599C?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/42%20Yerevan-Module%2006-black?style=for-the-badge" alt="42 Yerevan Module 06" />
</p>

## Overview

**C++ Module 06** focuses on type conversions and casting operators in C++.

The module explores how to convert scalar values between different types, reinterpret pointers as integer values and back, and identify the actual type of an object at runtime.

Through three exercises, I practice `static_cast`, `reinterpret_cast`, and `dynamic_cast`, learning when each cast is appropriate and how to handle conversions safely.

All exercises follow the **C++98 standard**.

## Learning Objectives

- Understand explicit type conversions in C++.
- Use `static_cast` for scalar type conversions.
- Convert string representations of literals into different scalar types.
- Handle special floating-point values and conversion limits.
- Understand pointer serialization and deserialization.
- Use `reinterpret_cast` to convert between pointer and integer representations.
- Work with `uintptr_t`.
- Understand runtime type information (RTTI).
- Use `dynamic_cast` to identify derived object types.
- Distinguish pointer-based and reference-based casts.
- Handle failed conversions and exceptions.
- Choose an appropriate cast for a specific programming situation.

## Exercises

| Exercise | Name | Description |
|:---:|---|---|
| [ex00](./ex00/) | Conversion of scalar types | Convert a string representation of a C++ literal into `char`, `int`, `float`, and `double`. |
| [ex01](./ex01/) | Serialization | Convert a pointer to an integer representation and reconstruct the original pointer. |
| [ex02](./ex02/) | Identify real type | Identify the actual derived type of an object using `dynamic_cast`. |

### Exercise 00 — Conversion of scalar types

**Directory:** `ex00/`

The goal is to implement a non-instantiable `ScalarConverter` class with a static `convert()` method.

The method accepts a string representing a C++ literal and displays its conversion into four scalar types: `char`, `int`, `float`, and `double`.

The implementation must handle different literal formats, non-displayable characters, impossible conversions, and floating-point pseudo-literals according to the official subject.

**Concepts practiced:**
- `static_cast`
- Scalar type conversion
- Character and numeric representations
- Parsing string input
- Integer and floating-point values
- Floating-point special values such as infinity and NaN
- Numeric limits and overflow checks
- Output formatting and precision
- Handling impossible conversions

### Exercise 01 — Serialization

**Directory:** `ex01/`

The goal is to implement a non-instantiable `Serializer` class with two static methods:

- `serialize()` converts a pointer to a `Data` structure into an unsigned integer representation using `uintptr_t`.
- `deserialize()` converts that integer representation back into a `Data` pointer.

The exercise demonstrates how a pointer's representation can be preserved through a round trip without changing the underlying object.

**Concepts practiced:**
- `reinterpret_cast`
- Pointer and integer representations
- `uintptr_t`
- Static utility methods
- Structures and pointers
- Serialization and deserialization
- Preserving pointer identity
- Testing pointer round trips

### Exercise 02 — Identify real type

**Directory:** `ex02/`

The goal is to identify the actual type of an object through a pointer or reference to a polymorphic base class.

The implementation includes a `Base` class and three derived classes: `A`, `B`, and `C`. A `generate()` function creates an instance of one of these derived classes, and two `identify()` overloads determine its actual type.

One overload accepts a base-class pointer, while the other accepts a base-class reference.

**Concepts practiced:**
- `dynamic_cast`
- Runtime type information (RTTI)
- Polymorphism
- Inheritance and base-class pointers
- Pointer-based runtime type identification
- Reference-based runtime type identification
- Handling failed pointer casts
- Exception handling for failed reference casts
- Virtual destructors

*Note: Follow the official subject for exact method signatures, permitted functions, pseudo-literals, and error-output requirements.*

## C++ Casting Overview

C++ provides different casting operators for different purposes.

| Cast | Purpose | Used in |
|---|---|---|
| `static_cast` | Performs supported compile-time conversions between compatible types. | Exercise 00 |
| `reinterpret_cast` | Reinterprets a value's representation as another type, such as a pointer and an integer type capable of holding it. | Exercise 01 |
| `dynamic_cast` | Performs runtime-checked casts within polymorphic class hierarchies. | Exercise 02 |

The casts are not interchangeable. Choosing the appropriate one depends on the types involved and the intended operation.

## Serialization Workflow

The serialization exercise demonstrates a pointer round trip:

```text
        Data*
          |
          | serialize()
          v
      uintptr_t
          |
          | deserialize()
          v
        Data*
```

The reconstructed pointer should identify the same object as the original pointer. This process does not serialize the contents of the object into a portable file or network format; it preserves and reconstructs the pointer representation for the exercise.

## Runtime Type Identification

The final exercise demonstrates how polymorphism allows the program to identify a derived object through its base class.

```text
             Base
            / | \
           A  B  C
```

The `generate()` function creates an object of type `A`, `B`, or `C`. The `identify()` functions determine which derived class the object actually belongs to without relying on the object's name or an external label.

## Compilation and Execution

Each exercise is an independent C++ program. Navigate to its directory and use the provided Makefile.

For example:

```bash
cd ex00
make
```

Run the executable generated by your Makefile with a suitable literal:

```bash
./convert 42
./convert 42.0f
./convert 'a'
```

For Exercise 01:

```bash
cd ../ex01
make
```

Run the executable to test serialization and deserialization.

For Exercise 02:

```bash
cd ../ex02
make
```

Run the executable to test generating and identifying different object types.

Executable names and test cases depend on the Makefile and implementation.

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
- **Main topics:** Type conversions, pointer serialization, and runtime type identification

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use each exercise's Makefile whenever available, as the source files and compilation requirements may differ.

## Key Takeaways

Through this module, I have practiced:

- Converting scalar values between different types.
- Handling special floating-point values and conversion limits.
- Choosing the correct C++ casting operator.
- Reinterpreting pointer representations with `reinterpret_cast`.
- Serializing and deserializing pointers using `uintptr_t`.
- Identifying runtime object types with `dynamic_cast`.
- Understanding the relationship between inheritance and RTTI.
- Handling failed casts and invalid conversions.
- Writing clear, reliable, and standards-compliant C++98 code.

## Repository Structure

```text
cpp_module_06/
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

*Module 06 — Understanding type conversions and casts in C++.*

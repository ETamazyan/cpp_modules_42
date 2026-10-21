# C++ Module 04 — Subtype Polymorphism, Abstract Classes and Interfaces

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++" />
  <img src="https://img.shields.io/badge/Standard-C++98-00599C?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/42%20Yerevan-Module%2004-black?style=for-the-badge" alt="42 Yerevan Module 04" />
</p>

## Overview

**C++ Module 04** explores subtype polymorphism, abstract classes, and interfaces — essential concepts for designing flexible and reusable object-oriented programs.

The module builds on inheritance and introduces virtual functions, dynamic dispatch, deep copying, pure virtual functions, and interface-based design.

Through a series of exercises, I implement an animal class hierarchy, manage dynamically allocated resources, create abstract classes, and build a system of characters and magical materials using interfaces.

All exercises follow the **C++98 standard**.

## Learning Objectives

- Understand subtype polymorphism and dynamic dispatch.
- Use virtual functions and method overriding.
- Understand the purpose of virtual destructors.
- Distinguish shallow copying from deep copying.
- Manage dynamically allocated resources safely.
- Implement copy constructors and copy assignment operators.
- Create abstract classes using pure virtual functions.
- Design interfaces using abstract base classes.
- Work with inheritance and dynamic object behavior.
- Implement cloning and object creation mechanisms.
- Understand ownership and resource management.
- Write reusable and maintainable object-oriented C++ code.

## Exercises

| Exercise | Name | Description |
|:---:|---|---|
| [ex00](./ex00/) | Polymorphism | Implement an animal hierarchy to demonstrate virtual functions and dynamic dispatch. |
| [ex01](./ex01/) | I don't want to set the world on fire | Add a `Brain` class to animals and implement proper deep copying. |
| [ex02](./ex02/) | Abstract class | Prevent direct instantiation of the base animal class using a pure virtual function. |
| [ex03](./ex03/) | Interface & recap | Build a Materia system using abstract classes, interfaces, cloning, and inventory management. |

### Exercise 00 — Polymorphism

**Directory:** `ex00/`

The goal is to implement an `Animal` base class and derived `Dog` and `Cat` classes.

Each derived class has its own implementation of `makeSound()`. Virtual functions ensure that the appropriate method is called when an object is accessed through a base-class pointer or reference.

The exercise also introduces `WrongAnimal` and `WrongCat` to demonstrate the behavior of member functions without proper virtual dispatch.

**Concepts practiced:**
- Inheritance
- Subtype polymorphism
- Virtual functions
- Function overriding
- Base-class pointers and references
- Virtual destructors
- Constructor and destructor execution order
- Static versus dynamic dispatch

### Exercise 01 — I don't want to set the world on fire

**Directory:** `ex01/`

The goal is to introduce a `Brain` class containing an array of ideas and give each `Dog` and `Cat` its own dynamically allocated `Brain`.

Copying an animal must create an independent copy of its brain rather than copying only the pointer to the existing object.

This exercise focuses on deep copying and correct resource management.

**Concepts practiced:**
- Dynamic memory allocation
- Object composition
- Shallow copy versus deep copy
- Copy constructors
- Copy assignment operators
- Destructors and resource cleanup
- Ownership of dynamically allocated objects
- Avoiding memory leaks and double deletion

### Exercise 02 — Abstract class

**Directory:** `ex02/`

The goal is to modify the animal hierarchy so that the base class cannot be instantiated directly.

The class becomes `AAnimal`, and its `makeSound()` function is declared as a pure virtual function. Derived classes such as `Dog` and `Cat` provide their own concrete implementations.

This exercise demonstrates how abstract classes define a common interface while leaving specific behavior to derived classes.

**Concepts practiced:**
- Abstract classes
- Pure virtual functions
- Concrete versus abstract types
- Polymorphic behavior
- Inheritance and overriding
- Virtual destructors
- Interface enforcement

### Exercise 03 — Interface & recap

**Directory:** `ex03/`

The goal is to implement a magical material system using abstract classes and interfaces.

The system includes `AMateria` as an abstract base class, concrete `Ice` and `Cure` material types, a `Character` class, and a `MateriaSource` class that can learn and create materials.

The interfaces `ICharacter` and `IMateriaSource` define the behavior that implementing classes must provide.

The exercise also requires careful management of the character's inventory and dynamically allocated objects.

**Concepts practiced:**
- Interfaces through pure abstract classes
- Abstract base classes
- Polymorphism and virtual functions
- Cloning objects
- Dynamic memory management
- Inventory management
- Copy construction and assignment
- Factory-style object creation
- Resource ownership and cleanup
- Avoiding memory leaks and invalid pointers

*Note: Follow the official subject for the exact interfaces, function signatures, inventory rules, and required behavior.*

## Polymorphism Overview

Polymorphism allows different derived classes to respond differently to the same virtual function call.

For example:

```cpp
Animal* animal = new Dog();

animal->makeSound();

delete animal;
```

When `makeSound()` is virtual, the call dispatches to `Dog::makeSound()`. A virtual destructor ensures that deleting an object through a base-class pointer correctly destroys the derived object as well.

## Interface and Materia System

The final exercise brings together the module's core concepts:

```text
             AMateria
             /      \
           Ice      Cure

         ICharacter
              |
          Character

       IMateriaSource
              |
        MateriaSource
```

`AMateria` provides the common base for concrete materials, while `ICharacter` and `IMateriaSource` specify behaviors for characters and material sources.

The concrete implementations use polymorphism to let the system work with different material types through common interfaces.

## Compilation and Execution

Each exercise is an independent C++ program. Navigate to its directory and use the provided Makefile.

For example:

```bash
cd ex00
make
```

Run the executable generated by the Makefile.

The same process applies to the remaining exercises:

```bash
cd ../ex01
make

cd ../ex02
make

cd ../ex03
make
```

Executable names and test scenarios depend on the individual exercise's Makefile and implementation.

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
- **Main topics:** Virtual functions, subtype polymorphism, abstract classes, interfaces, and deep copying

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use the provided Makefile whenever available, as each exercise may require specific source files and compilation settings.

## Key Takeaways

Through this module, I have practiced:

- Implementing polymorphic class hierarchies.
- Using virtual functions for dynamic dispatch.
- Managing object lifecycles through virtual destructors.
- Implementing deep copies of dynamically allocated resources.
- Designing abstract classes and interfaces.
- Building systems around common abstractions.
- Creating and cloning objects through polymorphic interfaces.
- Managing inventories and dynamically allocated objects.
- Improving resource ownership and memory safety.
- Writing maintainable C++ code using object-oriented principles.

## Repository Structure

```text
cpp_module_04/
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

*Module 04 — Designing flexible systems with polymorphism and abstraction.*

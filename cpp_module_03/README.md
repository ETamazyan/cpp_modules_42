# C++ Module 03 — Inheritance

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++" />
  <img src="https://img.shields.io/badge/Standard-C++98-00599C?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/42%20Yerevan-Module%2003-black?style=for-the-badge" alt="42 Yerevan Module 03" />
</p>

## Overview

**C++ Module 03** introduces inheritance, one of the fundamental concepts of object-oriented programming.

The module explores how classes can inherit attributes and behaviors from other classes, allowing code to be reused and extended without unnecessary duplication.

Through a series of exercises, I implement a hierarchy of robot classes, starting with `ClapTrap` and progressing to `ScavTrap`, `FragTrap`, and `DiamondTrap`.

The exercises demonstrate inheritance, constructor and destructor chaining, method overriding, multiple inheritance, and the diamond inheritance problem.

All exercises follow the **C++98 standard**.

## Learning Objectives

- Understand inheritance and its role in object-oriented programming.
- Create base classes and derived classes.
- Reuse and extend existing class functionality.
- Understand `public`, `protected`, and `private` access specifiers.
- Implement constructors and destructors in class hierarchies.
- Understand constructor and destructor execution order.
- Override inherited member functions.
- Work with multiple inheritance.
- Understand the diamond inheritance problem.
- Resolve inherited member ambiguity.
- Practice class design, code reuse, and maintainability.

## Exercises

|    Exercise     | Name             | Description                                                                           |
| :-------------: | ---------------- | ------------------------------------------------------------------------------------- |
| [ex00](./ex00/) | Aaaaand... OPEN! | Implement the foundational `ClapTrap` class with health, energy, and attack behavior. |
| [ex01](./ex01/) | Serena, my love! | Create `ScavTrap`, a derived class with different attributes and a special ability.   |
| [ex02](./ex02/) | Repetitive work  | Create `FragTrap`, another derived class with its own attributes and ability.         |
| [ex03](./ex03/) | Now it's weird!  | Implement `DiamondTrap` using multiple inheritance from `ScavTrap` and `FragTrap`.    |

### Exercise 00 — Aaaaand... OPEN!

**Directory:** `ex00/`

The goal is to implement a `ClapTrap` class that represents a basic robot with a name, hit points, energy points, and attack damage.

The class supports attacking another target, taking damage, and repairing itself. Each action must respect the robot's available health and energy.

**Concepts practiced:**

- Class design and encapsulation
- Private data members
- Constructors and destructors
- Member functions
- Resource and state management
- Conditional behavior
- Object initialization

### Exercise 01 — Serena, my love!

**Directory:** `ex01/`

The goal is to create a `ScavTrap` class that inherits from `ClapTrap`.

`ScavTrap` has different initial statistics and its own special ability, `guardGate()`. Its constructors, destructor, and attack behavior provide an opportunity to explore how derived classes extend base classes.

**Concepts practiced:**

- Single inheritance
- Base and derived classes
- Inherited member functions
- Method overriding
- Constructor chaining
- Destructor execution order
- Specialized class behavior

### Exercise 02 — Repetitive work

**Directory:** `ex02/`

The goal is to implement a `FragTrap` class that inherits from `ClapTrap`.

`FragTrap` has its own initial statistics and a special ability called `highFivesGuys()`, which displays a high-five request.

This exercise reinforces inheritance and demonstrates how several classes can extend the same base class in different ways.

**Concepts practiced:**

- Reusing a base class
- Creating multiple derived classes
- Constructor and destructor chaining
- Inherited functionality
- Class specialization
- Adding unique member functions

### Exercise 03 — Now it's weird!

**Directory:** `ex03/`

The goal is to implement `DiamondTrap`, a class that inherits from both `ScavTrap` and `FragTrap`.

This creates a diamond-shaped inheritance hierarchy because both parent classes derive from `ClapTrap`. The exercise explores how to manage inherited members, avoid ambiguity, and ensure the class hierarchy behaves as intended.

`DiamondTrap` also has its own name and a `whoAmI()` function that displays the relevant identities.

**Concepts practiced:**

- Multiple inheritance
- The diamond inheritance problem
- Inherited member ambiguity
- Constructor initialization in complex hierarchies
- Explicit member selection with scope resolution
- Combining behavior from multiple parent classes
- Class identity and member access

_Note: Follow the official subject for the exact inheritance declarations, initialization requirements, and expected behavior._

## Inheritance Overview

The class hierarchy developed throughout this module can be represented as follows:

```text
             ClapTrap
             /      \
       ScavTrap    FragTrap
             \      /
           DiamondTrap
```

`ScavTrap` and `FragTrap` extend `ClapTrap` independently. `DiamondTrap` combines both classes, making it necessary to understand multiple inheritance and the diamond problem.

## Compilation and Execution

Each exercise is an independent C++ program. Navigate to the exercise directory and compile it with the provided Makefile.

For example:

```bash
cd ex00
make
```

Run the executable produced by the Makefile. Its name depends on your implementation.

The same process applies to the other exercises:

```bash
cd ../ex01
make

cd ../ex02
make

cd ../ex03
make
```

Run each program using its configured executable name. Check the exercise's Makefile and test program for the appropriate commands.

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
- **Main topics:** Inheritance, method overriding, and multiple inheritance

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use the provided Makefile whenever available, as each exercise may require specific source files and compilation settings.

## Key Takeaways

Through this module, I have practiced:

- Designing class hierarchies using inheritance.
- Extending existing classes without duplicating functionality.
- Understanding the relationship between base and derived classes.
- Managing constructors and destructors in inherited classes.
- Overriding inherited member functions.
- Implementing different behaviors across related classes.
- Understanding multiple inheritance and inherited member ambiguity.
- Exploring the diamond inheritance problem.
- Writing reusable and maintainable object-oriented C++ code.

## Repository Structure

```text
cpp_module_03/
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

_Module 03 — Reusing and extending code through inheritance._

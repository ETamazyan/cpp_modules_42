# C++ Module 09 — STL and Algorithms

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++" />
  <img src="https://img.shields.io/badge/Standard-C++98-00599C?style=for-the-badge&logo=cplusplus" alt="C++98" />
  <img src="https://img.shields.io/badge/42%20Yerevan-Module%2009-black?style=for-the-badge" alt="42 Yerevan Module 09" />
</p>

## Overview

**C++ Module 09** applies the Standard Template Library (STL) to practical programming problems involving historical data, mathematical expressions, and sorting algorithms.

The module brings together concepts from the previous C++ modules, with a focus on selecting appropriate containers, processing input, validating data, handling errors, and evaluating algorithm performance.

Through three exercises, I implement a Bitcoin exchange calculator, a Reverse Polish Notation calculator, and a sorting program based on the Ford–Johnson merge-insertion algorithm.

All exercises follow the **C++98 standard** and emphasize efficient use of STL containers and algorithms.

## Learning Objectives

- Understand the practical use of STL containers.
- Select appropriate containers for different problems.
- Parse and validate structured input.
- Process files and historical data.
- Use associative containers for ordered key-value storage.
- Evaluate mathematical expressions using a stack.
- Implement arithmetic operations and handle invalid expressions.
- Understand the Ford–Johnson merge-insertion sorting algorithm.
- Work with different sequence containers.
- Measure and compare algorithm execution times.
- Handle invalid input and exceptional conditions.
- Write efficient, reusable, and maintainable C++ code.

## Exercises

| Exercise | Name | Description |
|:---:|---|---|
| [ex00](./ex00/) | Bitcoin Exchange | Calculate the value of a Bitcoin amount using historical exchange rates for a given date. |
| [ex01](./ex01/) | Reverse Polish Notation | Evaluate mathematical expressions written in postfix notation. |
| [ex02](./ex02/) | PmergeMe | Sort a sequence of positive integers using the Ford–Johnson merge-insertion algorithm and compare container performance. |

### Exercise 00 — Bitcoin Exchange

**Directory:** `ex00/`

The goal is to create a program named `btc` that calculates the monetary value of a specified amount of Bitcoin using a historical exchange-rate database.

The program reads historical rates from a CSV file and processes an input file containing dates and values. For each valid entry, it finds the applicable exchange rate and calculates the resulting value.

If an exact date is unavailable, the program uses the closest available date preceding the requested date, as required by the subject.

**Concepts practiced:**
- File input and output
- CSV parsing
- Date and numeric validation
- Associative containers, such as `std::map`
- Ordered key-value storage
- Searching for the nearest preceding key
- Arithmetic calculations
- Exception handling and error reporting
- Handling missing or invalid input
- Working with historical datasets

**Example usage:**

```bash
cd ex00
make
./btc input.txt
```

The input file contains date-value pairs in the format required by the subject.

### Exercise 01 — Reverse Polish Notation

**Directory:** `ex01/`

The goal is to implement a calculator that evaluates mathematical expressions written in Reverse Polish Notation (RPN), also known as postfix notation.

In this notation, operators appear after their operands. For example, the expression `3 4 +` means `3 + 4` and evaluates to `7`.

The program processes tokens in sequence, uses a stack to store operands, and applies arithmetic operators when they are encountered. Invalid expressions, unsupported tokens, and invalid arithmetic operations must be handled according to the subject.

**Concepts practiced:**
- Reverse Polish Notation
- Stack-based expression evaluation
- STL containers, such as `std::stack`
- Tokenization and input parsing
- Arithmetic operators
- Operand ordering
- Expression validation
- Division-by-zero handling
- Exception handling
- Detecting malformed expressions

**Example usage:**

```bash
cd ex01
make
./RPN "3 4 +"
```

Expected result:

```text
7
```

The standard exercise restricts the accepted expression format, including its permitted numbers and operators. Follow the official subject when implementing input validation.

### Exercise 02 — PmergeMe

**Directory:** `ex02/`

The goal is to implement a program named `PmergeMe` that sorts a sequence of positive integers using the **Ford–Johnson merge-insertion sorting algorithm**.

The program accepts integers as command-line arguments, validates the input, displays the original and sorted sequences, and measures the time required to process the sequence using two different STL containers.

This exercise focuses on implementing the required algorithm and comparing how different container choices affect execution performance.

**Concepts practiced:**
- STL sequence containers
- Ford–Johnson merge-insertion sorting
- Comparison-based sorting
- Recursive and structured algorithm design
- Pairing and ordering elements
- Iterator-based processing
- Container-specific operations
- Command-line argument parsing
- Positive integer validation
- High-resolution performance measurement
- Comparing execution times
- Algorithmic complexity and comparison efficiency

**Example usage:**

```bash
cd ex02
make
./PmergeMe 3 5 9 7 4
```

Example sorted sequence:

```text
Before: 3 5 9 7 4
After: 3 4 5 7 9
```

The program should also report the processing time for each of the two containers, following the output requirements of the official subject.

*Note: Executable names, exact output formatting, permitted operations, and error messages should match your actual implementation and the official 42 Yerevan subject.*

## STL Containers Overview

Choosing the right container is an important part of this module. Different containers offer different lookup, insertion, access, and traversal characteristics.

| Container | Main Characteristics | Relevant Exercise |
|---|---|---|
| `std::map` | Ordered key-value storage and efficient key lookup | Bitcoin Exchange |
| `std::stack` | Last-in, first-out access | Reverse Polish Notation |
| `std::vector` | Contiguous storage and efficient indexed access | PmergeMe |
| `std::deque` | Sequence storage with efficient operations at both ends | PmergeMe |

The container choices above are common approaches. Your implementation must satisfy the official container restrictions, including the requirement to use two different containers in Exercise 02.

## Reverse Polish Notation Workflow

RPN evaluation uses a stack to process operands and operators.

```text
Expression: 3 4 +

1. Push 3
2. Push 4
3. Read +
4. Pop 4 and 3
5. Calculate 3 + 4
6. Push 7

Result: 7
```

This approach avoids the need for parentheses and conventional operator-precedence parsing in the expression format supported by the exercise.

## Ford–Johnson Sorting Overview

The Ford–Johnson algorithm, also known as merge-insertion sort, organizes elements into pairs, orders those pairs, and inserts remaining elements through a carefully planned sequence of comparisons.

Its goal is to minimize the number of element comparisons while producing a sorted sequence.

In Exercise 02, the sorting logic is applied using two different STL containers. Their processing times are measured separately so their performance can be compared under the same input conditions.

The timing results depend on the compiler, hardware, input size, and implementation.

## Compilation and Execution

Each exercise is an independent C++ program. Navigate to its directory and compile it using the provided Makefile.

### Exercise 00

```bash
cd ex00
make
./btc input.txt
```

### Exercise 01

```bash
cd ex01
make
./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
```

### Exercise 02

```bash
cd ex02
make
./PmergeMe 3 5 9 7 4
```

The executable names shown above follow a common naming convention. Use the actual executable names defined by your Makefiles.

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
- **Main topics:** STL containers, file processing, stack-based evaluation, sorting algorithms, and performance measurement

A typical compilation command is:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Use each exercise's Makefile whenever available. Module 09 has specific STL requirements, so verify that your implementation uses permitted containers and follows the restrictions in the official subject.

## Key Takeaways

Through this module, I have practiced:

- Applying STL containers to practical programming problems.
- Processing and validating structured files.
- Searching ordered historical data.
- Evaluating mathematical expressions with a stack.
- Handling malformed input and invalid operations.
- Understanding and implementing the Ford–Johnson sorting algorithm.
- Working with different sequence containers.
- Comparing execution times across container implementations.
- Considering algorithmic complexity and comparison efficiency.
- Writing efficient and maintainable C++98 code.

## Repository Structure

```text
cpp_module_09/
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

Each exercise directory contains its implementation, Makefile, and any required data or test files.

## Author

**42 Yerevan Student: etamazya**

Part of my C++ learning journey at 42 Yerevan.

GitHub: [@ETamazyan](https://github.com/ETamazyan)

---

*Module 09 — Applying STL containers and algorithms to real-world programming challenges.*

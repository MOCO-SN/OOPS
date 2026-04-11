# 📚 Object-Oriented Programming (OOP) - B.Tech ECE

A structured collection of C++ programs covering core concepts of Object-Oriented Programming, organized unit-wise as part of the B.Tech ECE curriculum.

---

## 📂 Project Structure

```
OOPS/
├── Unit_1/          # Operators & Type Casting
├── Unit_2/          # Control Flow & Pattern Programs
├── Unit_3/          # OOP Concepts, Functions, Recursion & More
│   ├── Encapsulation/
│   ├── Inheritance/
│   │   └── labs-11-03-2026/
│   └── polymorphism/
├── Unit_4/          # Abstraction & Polymorphism (Advanced)
│   ├── Abstraction/
│   └── polymorphism/
├── Unit_5/          # Advanced Pointers & OOP Concepts
├── Unit_6/          # Exception Handling
├── midsem_patterns/ # Mid-semester pattern programs
└── Extra/          # Additional Programs & Resources
```

---

## 🏷️ Unit 1 - Operators & Basics

Covers fundamental C++ operators and type casting concepts.

| File | Description |
|------|-------------|
| [`inputoutput.cpp`](Unit_1/inputoutput.cpp) | Basic input and output using `cin` and `cout` |
| [`arthimeticoperators.cpp`](Unit_1/arthimeticoperators.cpp) | Addition, Subtraction, Multiplication, Division, Modulus |
| [`retionaloperators.cpp`](Unit_1/retionaloperators.cpp) | Relational / Comparison operators (`==`, `!=`, `<`, `>`, `<=`, `>=`) |
| [`logicaloperators.cpp`](Unit_1/logicaloperators.cpp) | Logical operators (`&&`, `||`, `!`) |
| [`assignmentoperators.cpp`](Unit_1/assignmentoperators.cpp) | Assignment operators (`=`, `+=`, `-=`, `*=`, `/=`, `%=`) |
| [`bitwiseoperators.cpp`](Unit_1/bitwiseoperators.cpp) | Bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`) |
| [`termarroperatos.cpp`](Unit_1/termarroperatos.cpp) | Ternary operator (`? :`) |
| [`miscllionusoperators.cpp`](Unit_1/miscllionusoperators.cpp) | Miscellaneous operators (`sizeof`, comma, etc.) |
| [`typecasting.cpp`](Unit_1/typecasting.cpp) | Implicit and explicit type casting |

---

## 🏷️ Unit 2 - Control Flow & Pattern Programs

Covers loops, conditional statements, and mathematical programs.

| File | Description |
|------|-------------|
| [`loops.cpp`](Unit_2/loops.cpp) | `for`, `while`, and `do-while` loop demonstrations |
| [`factorial.cpp`](Unit_2/factorial.cpp) | Factorial using loops |
| [`sumofnnatnum.cpp`](Unit_2/sumofnnatnum.cpp) | Sum of N natural numbers |
| [`Palindrome.cpp`](Unit_2/Palindrome.cpp) | Palindrome number/string check |
| [`reverse.cpp`](Unit_2/reverse.cpp) | Reversing a number or string |
| [`vowelorconso.cpp`](Unit_2/vowelorconso.cpp) | Vowel or consonant checker |
| [`weekdaycount.cpp`](Unit_2/weekdaycount.cpp) | Count weekdays in a given range |
| [`SwapbyFuntion.cpp`](Unit_2/SwapbyFuntion.cpp) | Swap two values using a function |
| [`pattern.cpp`](Unit_2/pattern.cpp) | Various number/star patterns |
| [`pyramid.cpp`](Unit_2/pyramid.cpp) | Pyramid pattern programs |
| [`traigle.cpp`](Unit_2/traigle.cpp) | Triangle pattern programs |
| [`charnewpattern.cpp`](Unit_2/charnewpattern.cpp) | Character-based pattern programs |

---

## 🏷️ Unit 3 - OOP Concepts in C++

Core Object-Oriented Programming topics: classes, objects, functions, pointers, recursion, and more.

### 🔷 Core Topics

| File | Description |
|------|-------------|
| [`funtwhret.cpp`](Unit_3/funtwhret.cpp) | Function with return value |
| [`funtwhnonret.cpp`](Unit_3/funtwhnonret.cpp) | Function with no return value (void) |
| [`funtwhpara.cpp`](Unit_3/funtwhpara.cpp) | Function with parameters |
| [`funtwhnonpara.cpp`](Unit_3/funtwhnonpara.cpp) | Function with no parameters |
| [`recursionFact.cpp`](Unit_3/recursionFact.cpp) | Factorial using recursion |
| [`recursionFab.cpp`](Unit_3/recursionFab.cpp) | Fibonacci using recursion |
| [`recursionSumOfNatural.cpp`](Unit_3/recursionSumOfNatural.cpp) | Sum of natural numbers using recursion |
| [`pointerBasic.cpp`](Unit_3/pointerBasic.cpp) | Pointer basics - address and value access |
| [`arrays.cpp`](Unit_3/arrays.cpp) | Array declaration, traversal and operations |
| [`String.cpp`](Unit_3/String.cpp) | String manipulation in C++ |
| [`structure.cpp`](Unit_3/structure.cpp) | Structures - declaration and usage |
| [`constructor.cpp`](Unit_3/constructor.cpp) | Constructor concept in C++ |
| [`Teachearclass.cpp`](Unit_3/Teachearclass.cpp) | Class and object concept using a Teacher example |
| [`friendFuntion.cpp`](Unit_3/friendFuntion.cpp) | Friend function basics |
| [`friendFuntion2.cpp`](Unit_3/friendFuntion2.cpp) | Friend function advanced example |
| [`homework21-02-26.cpp`](Unit_3/homework21-02-26.cpp) | Homework assignment (dated 21-02-26) |

---

### 🔒 Encapsulation

> Bundling data (variables) and methods into a single unit (class), restricting direct access using access specifiers.

| File | Description |
|------|-------------|
| [`encapsulation.cpp`](Unit_3/Encapsulation/encapsulation.cpp) | Getter and Setter methods, private salary field in `Teacher` class |

---

### 🧬 Inheritance

> The process by which a derived class acquires properties and behaviors from a base class.

| Type | File | Description |
|------|------|-------------|
| **Basic** | [`Inheritence.cpp`](Unit_3/Inheritance/Inheritence.cpp) | Introduction to inheritance in C++ |
| **Done** | [`inheritanceDone.cpp`](Unit_3/Inheritance/inheritanceDone.cpp) | `Person -> Student` and `Person -> Teacher` (hierarchical demo) |
| **Single** | [`singleInheritance.cpp`](Unit_3/Inheritance/singleInheritance.cpp) | One base class, one derived class |
| **Multiple** | [`multipleInheritance.cpp`](Unit_3/Inheritance/multipleInheritance.cpp) | One derived class inheriting from multiple base classes |
| **Multilevel** | [`multilevelInheritance.cpp`](Unit_3/Inheritance/multilevelInheritance.cpp) | Chain of inheritance: A -> B -> C |
| **Hierarchical** | [`hierarchicalInheritance.cpp`](Unit_3/Inheritance/hierarchicalInheritance.cpp) | Multiple derived classes from a single base class |
| **Hybrid** | [`hybridInheritance.cpp`](Unit_3/Inheritance/hybridInheritance.cpp) | Combination of two or more types of inheritance |
| **Practice** | [`nonatanned.cpp`](Unit_3/Inheritance/nonatanned.cpp) | Inheritance practice program 1 |
| **Practice** | [`nonatanned1.cpp`](Unit_3/Inheritance/nonatanned1.cpp) | Inheritance practice program 2 |
| **Practice** | [`nonatanned2.cpp`](Unit_3/Inheritance/nonatanned2.cpp) | Inheritance practice program 3 |

#### 🧪 Lab Programs (11-03-2026)

| File | Description |
|------|-------------|
| [`singleInheritance.cpp`](Unit_3/Inheritance/labs-11-03-2026/singleInheritance.cpp) | Lab: Single inheritance implementation |
| [`multipleinheritance.cpp`](Unit_3/Inheritance/labs-11-03-2026/multipleinheritance.cpp) | Lab: Multiple inheritance implementation |
| [`multilevelInheritance.cpp`](Unit_3/Inheritance/labs-11-03-2026/multilevelInheritance.cpp) | Lab: Multilevel inheritance implementation |
| [`hierachialinheritance.cpp`](Unit_3/Inheritance/labs-11-03-2026/hierachialinheritance.cpp) | Lab: Hierarchical inheritance implementation |
| [`Encapsulation.cpp`](Unit_3/Inheritance/labs-11-03-2026/Encapsulation.cpp) | Lab: Encapsulation demonstration |
| [`FUNTIONoVERLOADING.CPP`](Unit_3/Inheritance/labs-11-03-2026/FUNTIONoVERLOADING.CPP) | Lab: Function overloading examples |
| [`operatorOverloading.cpp`](Unit_3/Inheritance/labs-11-03-2026/operatorOverloading.cpp) | Lab: Operator overloading examples |
| [`constuctor_overloading.cpp`](Unit_3/Inheritance/labs-11-03-2026/constuctor_overloading.cpp) | Lab: Constructor overloading examples |

---

### 🔄 Polymorphism (Basic)

> The ability of a function or operator to behave differently based on different inputs or contexts. See Unit 4 for detailed implementation.

---

## 🏷️ Unit 4 - Abstraction & Polymorphism (Advanced)

### 🔷 Abstraction

> Hiding complex implementation details and showing only the necessary features to the user.

| File | Description |
|------|-------------|
| [`abstraction.cpp`](Unit_4/Absctration/abstraction.cpp) | Introduction to abstraction in C++ |

### 🔄 Polymorphism (Advanced)

> The ability of a function or operator to behave differently based on different inputs or contexts.

| File | Description |
|------|-------------|
| [`polymorphism.cpp`](Unit_4/polymorphism/polymorphism.cpp) | Advanced polymorphism concepts |
| [`funOverloading.cpp`](Unit_4/polymorphism/funOverloading.cpp) | **Function Overloading** - multiple function signatures |
| [`operatorOverloading.cpp`](Unit_4/polymorphism/operatorOverloading.cpp) | **Operator Overloading** - redefining operators |

---

## 🏷️ Unit 5 - Advanced Pointers & OOP Concepts

Advanced C++ pointer concepts and OOP features.

| File | Description |
|------|-------------|
| [`pointerBasic.cpp`](Unit_5/pointerBasic.cpp) | Pointer basics - declaration and usage |
| [`voidPointer.cpp`](Unit_5/voidPointer.cpp) | Void pointer (`void*`) |
| [`thispointer.cpp`](Unit_5/thispointer.cpp) | `this` pointer usage in classes |
| [`staticVariable.cpp`](Unit_5/staticVariable.cpp) | Static variables in classes |
| [`arrays.cpp`](Unit_5/arrays.cpp) | Array manipulation |
| [`Early_late_binding.cpp`](Unit_5/Early_late_binding.cpp) | Early binding vs Late binding (virtual functions) |

---

## 📋 Midsem Patterns

Pattern programs for mid-semester exam preparation.

| File | Description |
|------|-------------|
| [`pattern1.cpp`](midsem_patterns/pattern1.cpp) | Pattern program for mid-sem exam |

---

## 🏷️ Unit 6 - Exception Handling

### ⚠️ Exception Handling

> A mechanism to handle runtime errors and maintain normal program flow.

| File | Description |
|------|-------------|
| [`ExceptionHandling.cpp`](Unit_6/ExceptionHandling.cpp) | Exception handling using try, catch, and throw |

---

## 📁 Extra - Additional Programs & Resources

Additional programs and supplementary materials.

| File | Description |
|------|-------------|
| [`FileHandling.cpp`](Extra/FileHandling.cpp) | File I/O operations in C++ |
| [`data.json`](Extra/data.json) | Sample JSON data file |
| [`hello.txt`](Extra/hello.txt) | Sample text file |

---

## 💡 Key Concepts Covered

### Functions
- Function with / without return value
- Function with / without parameters
- **Recursion Types:**
  - Direct Recursion
  - Indirect Recursion
  - Tail Recursion
  - Non-Tail Recursion

### Pointers
- `*` - dereference (get value)
- `&` - address-of operator

### OOP Pillars
| Concept | Status |
|---------|--------|
| **Encapsulation** | ✅ Covered |
| **Inheritance** | ✅ Covered (all 5 types) |
| **Polymorphism** | ✅ Covered (Function & Operator Overloading) |
| **Abstraction** | ✅ Covered |

---

## 🛠️ How to Compile & Run

Make sure you have a C++ compiler like **g++** installed.

```bash
# Compile
g++ filename.cpp -o output

# Run (Windows)
output.exe

# Run (Linux/Mac)
./output
```

**Example:**
```bash
g++ Unit_1/arthimeticoperators.cpp -o arith
arith.exe
```

---

## 📚 Course Info

- **Subject:** Object-Oriented Programming (OOP)
- **Branch:** B.Tech - Electronics Engineering (VLSI)
- **Language:** C++

---

> 💡 *Programs are organized unit-wise to align with the semester syllabus and progressively build OOP concepts from basics to advanced.*

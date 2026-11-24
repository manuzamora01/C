# 📘 C Programming Fundamentals

> 🌐 **Language:** [Español](./README.md) | English

Structured study notes from the introductory **C Programming** course, covering basic program structure, data types, operators, control flow statements, arrays, functions, strings, structures/unions, and pointers.

---

## 📑 Table of Contents

1. [Basic Structure of a C Program](#1-basic-structure-of-a-c-program)
2. [Comments](#2-comments)
3. [Variables and Scope](#3-variables-and-scope)
4. [Data Types and Typecasting](#4-data-types-and-typecasting)
5. [Input and Output (I/O)](#5-input-and-output-io)
6. [Operators](#6-operators)
7. [Control Statements](#7-control-statements)
8. [Arrays](#8-arrays)
9. [Functions](#9-functions)
10. [Strings](#10-strings)
11. [Structures and Unions](#11-structures-and-unions)
12. [Pointers](#12-pointers)

---

### 1. Basic Structure of a C Program

Every C program follows a standard hierarchical layout:

```c
// 1. Preprocessor directives
#include <stdio.h>

// 2. Global declarations
int global_var;

// 3. Main function (entry point)
void main()
{
    // Local declarations
    int local_var;

    // Statements
    // statement 1;
    // statement 2;
}

// 4. User-defined functions
```

---

### 2. Comments

Comments are used to document code and are ignored by the compiler:

```c
/* This is my First C Program
   Author name: Manuel */

#include <stdio.h>
#include <conio.h>

void main()
{
    printf("C Programming"); // Single-line comment

    getch();
}
```

---

### 3. Variables and Scope

A **variable** is a name given to a memory location where the value is not fixed and can change over time (e.g., `int num;`).

* **Syntax:** `datatype variable_name;`
* **Assignment:** `variable_name = value;`

#### Scope of a Variable (Local vs. Global)
Scope defines the visibility and lifetime of variables within a program:

<table>
  <thead>
    <tr>
      <th>Local Variable</th>
      <th>Global Variable</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>

```c
void main()
{
    int rollno = 10; // Local variable
}
```

      </td>
      <td>

```c
int y = 50; // Global variable

void main()
{
    int x = 100; // Local variable
}
```

      </td>
    </tr>
    <tr>
      <td>Declared <strong>inside</strong> a function or block and is only accessible within that scope.</td>
      <td>Declared <strong>outside</strong> all functions and is accessible throughout the entire file.</td>
    </tr>
  </tbody>
</table>

---

### 4. Data Types and Typecasting

#### Primitive Data Types

| Data Type | Description | Format Specifier |
| :--- | :--- | :--- |
| `char` | Single character | `%c` |
| `int` | Integer number | `%d` |
| `float` | Single-precision floating-point number | `%f` |
| `double` | Double-precision floating-point number | `%lf` |

#### Typecasting
C allows conversions between basic data types in two ways:

* **Implicit conversion:** Performed automatically by the compiler.
  ```c
  int num = 5 + 13.75; // num = 18
  ```
* **Explicit conversion:** Manually forced by specifying the target type in parentheses.
  ```c
  float a = 5.25;
  int b = (int) a; // b = 5
  ```

---

### 5. Input and Output (I/O)

#### Standard I/O Functions (`<stdio.h>`)

| Functions | Purpose |
| :--- | :--- |
| `printf()` / `scanf()` | Formatted output and input. |
| `gets()` / `puts()` | Reading and writing full strings. |
| `getchar()` / `putchar()` | Reading and writing a single character. |

#### Format Specifiers
Format specifiers inform `scanf()` what kind of input is being fed and tell `printf()` what type of data must be printed:

* `%d` → Integer (`int`)
* `%c` → Character (`char`)
* `%s` → String
* `%f` → Float (`float`)
* `%lf` → Double (`double`)

---

### 6. Operators

C primarily supports **5 types** of operators:

| Category | Description | Operators |
| :--- | :--- | :--- |
| **Arithmetic** | Used for mathematical operations (unary and binary). | **Unary:** `++`, `--`<br>**Binary:** `+`, `-`, `*`, `/`, `%` |
| **Relational** | Used to compare the values of two operands. | `<`, `<=`, `>`, `>=`, `==`, `!=` |
| **Bitwise** | Performs bit-level operations on operands. | `&` (bitwise AND), `\|` (bitwise OR) |
| **Logical** | Combines one or multiple conditions, returning a boolean result (`true`/`false`). | `&&` (AND), `\|\|` (OR), `!` (NOT) |
| **Assignment** | Assigns the right-hand value to the left-hand operand (including shorthand operators). | `=`, `+=`, `-=`, `*=`, `/=` |

---

### 7. Control Statements

#### Conditional (Selection) Statements
Used to make decisions by executing different code blocks depending on whether a condition evaluates to true or false.

* **`if - else` statement:**
  ```c
  if (condition)
  {
      statement 1; // if block
      statement 2;
  }
  else
  {
      statement 3; // else block
  }
  ```

* **Nested `if - else` statement:**
  ```c
  if (condition1)
  {
      statement 1;
      if (condition2)
          statement 2;
      else
          statement 3;
  }
  else
  {
      statement 4;
  }
  ```

* **`switch - case` statement:** A multiway branch alternative to `if-else`. The `default` block executes when no case matches.
  ```c
  switch (n)
  {
      case 1:
          statement 1;
          break;
      case 2:
          statement 2;
          break;
      default:
          statement;
  }
  ```

#### Loops
Used to repeatedly execute a block of code as long as a specified condition holds true.

* **`for` loop:**
  ```c
  for (int i = 0; i < n; i++)
  {
      // do something
  }
  ```

* **`while` loop:**
  ```c
  while (condition_is_true)
  {
      // do something
  }
  ```

---

### 8. Arrays

* An **array** is a collection of elements of the **same data type** stored in contiguous memory locations.
* Every element is accessed via a specific index (starting at `0`).
* Array size in C is fixed at definition time and must always be an integer.

#### Definition & Examples
```c
data_type array_name[size_of_array];

int a[10];      // Single-dimensional array
float b[3][3];  // Multi-dimensional (2D) float array
```

#### Initialization Methods
1. **Static Initialization:**
   ```c
   int a[10] = {0, 1, 2, 3, 4, 5, 6};
   char c[5] = {'h', 'e', 'l', 'l', 'o'};
   ```

2. **Dynamic Initialization:**
   ```c
   int a[10]; // Created initially with garbage values
   for (int i = 0; i < 10; i++)
   {
       scanf("%d", &a[i]);
   }
   ```

---

### 9. Functions

* Functions are reusable blocks of code used to perform specific tasks.
* In C, a function must be declared before it is called.
* Functions consist of a **return type**, **function definition**, and **function body**.
* Any function with a return type other than `void` must return a value at the end.
* A **recursive function** can call itself during program execution.

```c
int sum(int a, int b)
{
    return a + b;
}

void main()
{
    printf("%d", sum(5, 10));
}
```

---

### 10. Strings

Strings store sequences of characters terminated by the null character (`'\0'`).

```c
char a[5] = {'H', 'o', 'l', 'a', '\0'};
char b[] = "Hola";
```

#### Built-in Functions (`<string.h>`)

| Function | Description |
| :--- | :--- |
| `strlen()` | Finds the length of a string. |
| `strcpy()` | Copies one string to another. |
| `strcat()` | Joins (concatenates) two strings. |
| `strcmp()` | Compares two strings. |
| `strlwr()` | Converts a string to lowercase. |
| `strupr()` | Converts a string to uppercase. |

---

### 11. Structures and Unions

Both allow creating **user-defined data types**, differing in how they allocate memory:

* **Structures (`struct`):** Group variables of different data types under a single name, allocating separate memory for each member.

  <img width="778" height="174" alt="C Structure Example" src="https://github.com/user-attachments/assets/0597b23b-3839-491a-a76e-79448e6e9af2" />

* **Unions (`union`):** Group variables of different data types where **all members share the same memory location** collectively.

  <img width="757" height="163" alt="C Union Example" src="https://github.com/user-attachments/assets/933bb5b7-952e-4482-93d0-7844675e535c" />

---

### 12. Pointers

* **Pointers** are variables that store the **memory address** of another variable.
* They have an associated data type matching the target variable (e.g., an `int *` holds the address of an `int`, while a `char *` holds the address of a `char`).

<img width="656" height="166" alt="C Pointers Diagram" src="https://github.com/user-attachments/assets/2e8036d1-a36d-49e7-8db2-5567e0624b36" />

```c
#include <stdio.h>

void main()
{
    int y = 5;
    int *p;
    p = &y;

    printf("Address of y: %x\n", &y);
    printf("Content of p: %x\n", p);
    printf("Content of *p: %d\n", *p);
}
```

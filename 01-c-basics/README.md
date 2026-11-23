### Basic block of a C Program

```
Preproccesor directives

Global declarations;

void main()
{
local declarations;
statement 1;
statement 2;
    .
    .
statement n;
}

Use defined functions;
```
### Comments

```
/* This is my First C Program
Author name:    */

#include<stdio.h>
#include<conio.h>

void main()
{
printf("C Programming");    //Single line Comment

getch();
}
```

### Variables in C
**What is a Variable?**
- It's a name given to a memory location where the value is not fixed, it can change with the course of timw. Ex: int num;

**Syntax:**
  ```
  datatype variable_name;
  ```
  **Asignment:**
  ```
  variable_name=value
  ```
**Scope of a Variable**
- Scope generally speaks about thw visibility of variables.
- 
**Local**
  ```
  void main()
  {
    int rollno=10;
  }
  ```
**Global**
  ```
  int y=50

  void main()
  {
    int x=100;
  }
  ```

### Data Types in C
**Types**
char (%c), int(%d), float(%f), double(%lf)

**Typecasting**
- C allows for conversions between the basic data types
- - Implicit and Explicit
**Implicit conversion**
- int num = 5 + 13.75; // num = 18
**Explicit conversion**
- float a = 5.25;
- int b = (int) a; // b = 5

### Input/Output in C
Input and Output functions in C are:
- printf() and scanf()
- gets() and puts()
- getchar() and putchar()

**Format Specifiers:**
The format specifiers will inform the scanf() function, what kind of input is being fed through input device. It also tells printf() function what type of data has to be printed on the output device.
- %d - Integer
- %c - Character
- %s - String
- %f - Float

### Operators in C
C primarily supports 5 types of operators
-  Arithmetic
    - Used for mathematical operations
    - We have unary and binary operations
    - Unary - (++, --)
    - Binary - (+, -, *, /, %)
-  Relational
    - Used to compare the values of two operands
    - Some of them are (<, <=, >=, ==)
    - We can aslo check for equality of operands, whether an operand is greater than other
-  Bitwise
    - We can perform bit-level operations on the operands.
    - Some of them are (& - bitwise AND, | - bitwise OR)
-  Logical
    - To combine one or multiple conditions we can ue Logical operators.
    - Logical operators always give us a Boolean value. i.e. true or false.
    - Some of then are (&& - AND, || - OR, ! - NOT
-  Assignment
    - It is used to assign a value to a given variable.
    - The value on the right side of the assignment operator is assigned to operand at left side-
    - We also have some short hand assignment operators (+=, -=, /=)
  

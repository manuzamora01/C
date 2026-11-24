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

### C Control Statements
**Conditional Statements:**
- Also known as selection statements.
- Bases on the conditions specified we can make some decisions.
- Anytime we execute conditional statements we get a boolean value in return.
- If the condition executed returns a true value, a ser of statements are executed else another set of statements are executed.

**The If statement:**
- Selection and execution of statements based on a given condition is done by the if statement.
- Depending on the result of the condition, the if - else executes one of the two potential statements.
**Syntax:**
```
if (condition)
{
    statement 1; //if block
    statement 2;
}
else
{
    statement 3; //else block
}
```
**The Nested if-else statement:**
- A nested if-else contains one or more if-else statements.
```
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
    statement 3;
}
```


**Loops:**
- Loops are used to re-execute a part of a code a given number of times, depending upon thw condition specified
1) For loop
**Syntax:**
```
for (i=0; i<n; i++){
//do something
}
```
2) While loop
**Syntax:**
```
while (condition is True){
//do something
}
```
**Switch case:**
- The switch statement work as a multiway branch statement.
- It's a modified form of if-else.
- It's a common alternative to the if statement when you want to get multiple results.
- Default condition gets executed when no conditions are met.
**Syntax:**
```
switch(n)
{
    case 1: Statement 1;
        break;
    case 1: Statemenet 2;
        break;
    default: Statemenet;
}
```

### Arrays in C
- An array is a colecction of elements where the data types of all the elements are same.
- An array stores all the elements in contiguous memory locations.
- Every element in an array has a specified index.
- Size of an array in C is fixed at the time of definition.

**Definition:**
- An array can be defined in the following manner in C:
- Data_type name_of_array>[<size_of_array>]
- Note: Size of an array should always be an integer it cannot be a real value.
**Example:**
```
int a[10]; //single dimensional array
float b[3][3]; //float-dimensional array
```
1) Static Initialization
```
int a[10]={0,1,2,3,4,5,6}
char c[5]={'h','e','I','l','o'}
```

2) Dynamic Initialization
```
int a[10]; //array is created with garbage value
for (int i=0; i<10; i++)
scanf("%d",&a[i]);
```

### Functions in C
- Functions are blocks of code which are used to perform specific tasks.
- In C a function needs to be declared before it's used.
- Functions have function definition, function body and a return type.
- Functions with return type except void needs to return a value at the end.
- Functions with return type void do not return any value.
- A recursive function can call itself during the course of execution of a program.

**A Function example:**
```
int sum(int a, int b)
{
    return a+b;
}

void main()
{
    printf("%d", sum(5,10));
}
```

### Strings in C
- Strings are used to store sequence of characters as information.
- string.h header file provides some built-in string manipulation functions.
**Strings can be initialized in following ways:**
```
char a[5] = {'H','o','I','a'};
char a[] = "Hola";
```

Strings functions are accessible by importing <string.h>.
- strlen() Find length of string.
- strcpy() Copy one string to other.
- strcat() Join two strings.
- strcmp() Compare two strings.
- strlwr() Conerts string to lowercase.
- strupr() Converts string to uppercase.

### Structure and Union
**Structures:**
- Structures provides a way for us to create our own data type called "user-defined data type"
- Assume that we have to store the details of a student, so we can use structure to store it as below:
<img width="778" height="174" alt="image" src="https://github.com/user-attachments/assets/0597b23b-3839-491a-a76e-79448e6e9af2" />

**Union:**
- Union also provides a way for us to create our own data type called "user-defined data type".
- Here each variable shares the memory collectively.
<img width="757" height="163" alt="image" src="https://github.com/user-attachments/assets/933bb5b7-952e-4482-93d0-7844675e535c" />

### Pointers in C
- Pointers are variables which store the address of a variable.
- They have data type just like variables, for example an integer type pointer can hold the address of an integer variable and an character type pointer can hold the address of char variable.
<img width="656" height="166" alt="image" src="https://github.com/user-attachments/assets/2e8036d1-a36d-49e7-8db2-5567e0624b36" />

**Example:**
```
#include<stdio.h>
void main()
{
int y = 5;
int *p;
p = &y;
printf("Address of y: %x\n", &y);
printf("Content of p: %x\n, p);
printf("Content of *p:%d\n", *p);
```










































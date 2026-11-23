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




  

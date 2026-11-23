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
### Variables Locales vs. Globales

<table>
  <thead>
    <tr>
      <th>Local</th>
      <th>Global</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>

```c
void main()
{
    int rollno = 10; // Variable local
}
```

      </td>
      <td>

```c
int y = 50; // Variable global

void main()
{
    int x = 100; // Variable local
}
```

      </td>
    </tr>
    <tr>
      <td>Se declara <strong>dentro</strong> de una función o bloque y solo es accesible dentro de ese ámbito.</td>
      <td>Se declara <strong>fuera</strong> de cualquier función y es accesible desde todo el programa.</td>
    </tr>
  </tbody>
</table>


  

# 📘 Fundamentos de Programación en C

> 🌐 **Idioma:** Español | [English](./readmeEN.md)

Apuntes estructurados del primer bloque de aprendizaje del lenguaje **C**, cubriendo la estructura base de un programa, tipos de datos, operadores, estructuras de control, arrays, funciones, cadenas de texto, estructuras/uniones y punteros.

---

## 📑 Índice de Contenidos

1. [Estructura Básica de un Programa en C](#1-estructura-básica-de-un-programa-en-c)
2. [Comentarios](#2-comentarios)
3. [Variables y Ámbito (Scope)](#3-variables-y-ámbito-scope)
4. [Tipos de Datos y Conversión (Typecasting)](#4-tipos-de-datos-y-conversión-typecasting)
5. [Entrada y Salida (I/O)](#5-entrada-y-salida-io)
6. [Operadores](#6-operadores)
7. [Estructuras de Control](#7-estructuras-de-control)
8. [Arrays (Arreglos)](#8-arrays-arreglos)
9. [Funciones](#9-funciones)
10. [Cadenas de Texto (Strings)](#10-cadenas-de-texto-strings)
11. [Estructuras y Uniones (struct y union)](#11-estructuras-y-uniones-struct-y-union)
12. [Punteros](#12-punteros)

---

### 1. Estructura Básica de un Programa en C

Todo programa en C sigue una organización jerárquica definida:

```c
// 1. Directivas del preprocesador
#include <stdio.h>

// 2. Declaraciones globales
int global_var;

// 3. Función principal (punto de entrada)
void main()
{
    // Declaraciones locales
    int local_var;

    // Sentencias / Instrucciones
    // sentencia 1;
    // sentencia 2;
}

// 4. Funciones definidas por el usuario
```

---

### 2. Comentarios

Sirven para documentar el código y son ignorados por el compilador. Existen dos formatos:

```c
/* Este es un comentario de varias líneas
   Autor: Manuel */

#include <stdio.h>
#include <conio.h>

void main()
{
    printf("C Programming"); // Comentario de una sola línea

    getch();
}
```

---

### 3. Variables y Ámbito (Scope)

Una **variable** es un nombre asignado a una ubicación en memoria cuyo valor no es fijo y puede cambiar durante la ejecución del programa (por ejemplo: `int num;`).

* **Declaración:** `tipo_dato nombre_variable;`
* **Asignación:** `nombre_variable = valor;`

#### Ámbito de una variable (Local vs. Global)
El ámbito determina desde qué partes del programa es visible y accesible una variable:

<table>
  <thead>
    <tr>
      <th>Variable Local</th>
      <th>Variable Global</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>

```c
void main()
{
    int rollno = 10; // Solo existe aquí dentro
}
```

      </td>
      <td>

```c
int y = 50; // Accesible en todo el archivo

void main()
{
    int x = 100; // Variable local
}
```

      </td>
    </tr>
    <tr>
      <td>Se declara <strong>dentro</strong> de una función o bloque y solo puede utilizarse dentro de ese ámbito.</td>
      <td>Se declara <strong>fuera</strong> de cualquier función y es accesible desde todo el programa.</td>
    </tr>
  </tbody>
</table>

---

### 4. Tipos de Datos y Conversión (Typecasting)

#### Tipos de datos primitivos

| Tipo de dato | Descripción | Especificador de formato |
| :--- | :--- | :--- |
| `char` | Carácter individual | `%c` |
| `int` | Número entero | `%d` |
| `float` | Número decimal de precisión simple | `%f` |
| `double` | Número decimal de doble precisión | `%lf` |

#### Conversión de tipos (Typecasting)
C permite convertir valores entre tipos de datos básicos de dos maneras:

* **Conversión implícita (automática):** El compilador realiza la conversión automáticamente.
  ```c
  int num = 5 + 13.75; // num almacena 18 (se trunca la parte decimal)
  ```
* **Conversión explícita (manual):** El programador fuerza el cambio de tipo indicando el tipo destino entre paréntesis.
  ```c
  float a = 5.25;
  int b = (int) a; // b almacena 5
  ```

---

### 5. Entrada y Salida (I/O)

#### Funciones estándar de E/S (`<stdio.h>`)

| Funciones | Propósito |
| :--- | :--- |
| `printf()` / `scanf()` | Salida y entrada con formato (enteros, decimales, texto, etc.). |
| `gets()` / `puts()` | Lectura y escritura de cadenas de texto completas. |
| `getchar()` / `putchar()` | Lectura y escritura de un único carácter. |

#### Especificadores de formato
Indican a `scanf()` qué tipo de dato va a recibir por teclado y a `printf()` cómo debe formatear la salida:

* `%d` → Entero (`int`)
* `%c` → Carácter (`char`)
* `%s` → Cadena de texto (*string*)
* `%f` → Decimal (`float`)
* `%lf` → Decimal largo (`double`)

---

### 6. Operadores

C soporta principalmente **5 categorías** de operadores:

| Categoría | Descripción | Operadores |
| :--- | :--- | :--- |
| **Aritméticos** | Realizan operaciones matemáticas. Pueden ser unarios o binarios. | **Unarios:** `++`, `--`<br>**Binarios:** `+`, `-`, `*`, `/`, `%` |
| **Relacionales** | Comparan dos operandos (igualdad, desigualdad, mayor/menor). | `<`, `<=`, `>`, `>=`, `==`, `!=` |
| **Nivel de bits (*Bitwise*)** | Operan directamente sobre los bits individuales de los operandos. | `&` (AND bit a bit), `\|` (OR bit a bit) |
| **Lógicos** | Combinan una o varias condiciones devolviendo un resultado booleano (verdadero/falso). | `&&` (AND), `\|\|` (OR), `!` (NOT) |
| **Asignación** | Asignan el valor de la derecha a la variable de la izquierda (incluye formas abreviadas). | `=`, `+=`, `-=`, `*=`, `/=` |

---

### 7. Estructuras de Control

#### Sentencias condicionales (de selección)
Permiten tomar decisiones ejecutando distintos bloques de código según si una condición se evalúa como verdadera o falsa.

* **Sentencia `if - else`:**
  ```c
  if (condicion)
  {
      // Bloque si la condición es verdadera
      sentencia 1;
      sentencia 2;
  }
  else
  {
      // Bloque si la condición es falsa
      sentencia 3;
  }
  ```

* **Sentencia `if - else` anidada:**
  ```c
  if (condicion1)
  {
      sentencia 1;
      if (condicion2)
          sentencia 2;
      else
          sentencia 3;
  }
  else
  {
      sentencia 4;
  }
  ```

* **Sentencia `switch - case`:** Alternativa limpia a múltiples `if-else` cuando se evalúa una misma variable frente a distintos valores posibles. `default` se ejecuta si ningún caso coincide.
  ```c
  switch (n)
  {
      case 1:
          sentencia 1;
          break;
      case 2:
          sentencia 2;
          break;
      default:
          sentencia_por_defecto;
  }
  ```

#### Bucles (Loops)
Permiten repetir un bloque de código mientras se cumpla una condición determinada.

* **Bucle `for`:**
  ```c
  for (int i = 0; i < n; i++)
  {
      // Código a repetir
  }
  ```

* **Bucle `while`:**
  ```c
  while (condicion_es_verdadera)
  {
      // Código a repetir
  }
  ```

---

### 8. Arrays (Arreglos)

* Un **array** es una colección de elementos del **mismo tipo de dato** almacenados en posiciones de memoria contiguas.
* Cada elemento se identifica mediante un índice numérico (empezando en `0`).
* Su tamaño es fijo en el momento de la declaración y debe ser siempre un número entero.

#### Sintaxis y ejemplos
```c
tipo_dato nombre_array[tamaño];

int a[10];      // Array unidimensional de 10 enteros
float b[3][3];  // Array bidimensional (matriz de 3x3)
```

#### Formas de inicialización
1. **Inicialización estática:**
   ```c
   int a[10] = {0, 1, 2, 3, 4, 5, 6};
   char c[5] = {'h', 'e', 'l', 'l', 'o'};
   ```

2. **Inicialización dinámica (en tiempo de ejecución):**
   ```c
   int a[10]; // Se crea inicialmente con valores basura en memoria
   for (int i = 0; i < 10; i++)
   {
       scanf("%d", &a[i]);
   }
   ```

---

### 9. Funciones

* Son bloques de código reutilizables diseñados para realizar una tarea específica.
* En C, una función debe declararse antes de ser utilizada.
* Toda función consta de: **tipo de retorno**, **definición (nombre y parámetros)** y **cuerpo**.
* Si el tipo de retorno no es `void`, la función debe devolver un valor mediante `return`.
* Una **función recursiva** es aquella que se llama a sí misma durante su ejecución.

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

### 10. Cadenas de Texto (Strings)

Las cadenas de texto almacenan secuencias de caracteres terminadas en el carácter nulo (`'\0'`).

```c
char a[5] = {'H', 'o', 'l', 'a', '\0'};
char b[] = "Hola";
```

#### Funciones principales de `<string.h>`

| Función | Descripción |
| :--- | :--- |
| `strlen()` | Devuelve la longitud de una cadena (sin contar `'\0'`). |
| `strcpy()` | Copia el contenido de una cadena en otra. |
| `strcat()` | Concatena (une) dos cadenas de texto. |
| `strcmp()` | Compara dos cadenas lexicográficamente. |
| `strlwr()` | Convierte una cadena a minúsculas. |
| `strupr()` | Convierte una cadena a mayúsculas. |

---

### 11. Estructuras y Uniones (`struct` y `union`)

Ambas permiten crear **tipos de datos definidos por el usuario** (*user-defined data types*), pero gestionan la memoria de forma diferente:

* **Estructuras (`struct`):** Permiten agrupar variables de distintos tipos bajo un mismo nombre. Cada miembro ocupa su propio espacio en memoria.

  <img width="778" height="174" alt="Ejemplo de Structure en C" src="https://github.com/user-attachments/assets/0597b23b-3839-491a-a76e-79448e6e9af2" />

* **Uniones (`union`):** También agrupan distintos tipos de datos, pero **todos sus miembros comparten la misma ubicación de memoria** (el tamaño de la unión equivale al de su miembro más grande).

  <img width="757" height="163" alt="Ejemplo de Union en C" src="https://github.com/user-attachments/assets/933bb5b7-952e-4482-93d0-7844675e535c" />

---

### 12. Punteros

* Un **puntero** es una variable que almacena la **dirección de memoria** de otra variable.
* Tiene un tipo de dato asociado que debe coincidir con el de la variable a la que apunta (por ejemplo, un `int *` guarda la dirección de un `int`, y un `char *` la de un `char`).

<img width="656" height="166" alt="Esquema de Punteros en C" src="https://github.com/user-attachments/assets/2e8036d1-a36d-49e7-8db2-5567e0624b36" />

```c
#include <stdio.h>

void main()
{
    int y = 5;
    int *p;
    p = &y; // 'p' guarda la dirección de memoria de 'y'

    printf("Address of y: %x\n", &y);
    printf("Content of p: %x\n", p);
    printf("Content of *p: %d\n", *p); // Desreferencia: imprime 5
}
```

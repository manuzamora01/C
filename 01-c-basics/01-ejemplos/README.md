# 💻 Ejemplos Prácticos — Fundamentos de C

> ⬅️ **Volver a los apuntes:** [Español](../README.md) | [English](../readmeEN.md)

Colección de **18 ejercicios prácticos** desarrollados durante el primer bloque de aprendizaje del lenguaje **C**, organizados por bloques temáticos desde la declaración de variables hasta el manejo de estructuras y punteros.

---

## 📂 Índice de Ejercicios por Tema

### 1. Variables, Tipos de Datos y Entrada/Salida

| Archivo | Concepto practicado |
| :--- | :--- |
| [`variables.c`](./variables.c) | Declaración, asignación y alcance de variables. |
| [`datatypes.c`](./datatypes.c) | Uso de tipos de datos primitivos (`int`, `float`, `char`, `double`) y especificadores de formato. |
| [`inputOutput.c`](./inputOutput.c) | Entrada y salida estándar por consola mediante `printf()` y `scanf()`. |

### 2. Operadores

| Archivo | Concepto practicado |
| :--- | :--- |
| [`operators.c`](./operators.c) | Operadores aritméticos (`+`, `-`, `*`, `/`, `%`, `++`, `--`) y relacionales. |
| [`assignmentOperators.c`](./assignmentOperators.c) | Operadores de asignación simple (`=`) y compuesta (`+=`, `-=`, `*=`, `/=`). |
| [`logicalOperators.c`](./logicalOperators.c) | Evaluación de condiciones compuestas con operadores lógicos (`&&`, `\|\|`, `!`). |

### 3. Estructuras de Control y Bucles

| Archivo | Concepto practicado |
| :--- | :--- |
| [`if.c`](./if.c) | Toma de decisiones condicionales mediante bloques `if` e `if - else`. |
| [`switch.c`](./switch.c) | Selección múltiple por casos con `switch`, `case`, `break` y `default`. |
| [`for.c`](./for.c) | Iteraciones controladas por contador mediante el bucle `for`. |
| [`while.c`](./while.c) | Repetición de bloques condicionada mediante el bucle `while`. |

### 4. Arrays y Cadenas de Texto (*Strings*)

| Archivo | Concepto practicado |
| :--- | :--- |
| [`array.c`](./array.c) | Declaración, inicialización y recorrido de arreglos numéricos unidimensionales. |
| [`arrayChar.c`](./arrayChar.c) | Manejo de arreglos de caracteres (`char[]`). |
| [`strings.c`](./strings.c) | Operaciones con cadenas de texto y funciones estándar de `<string.h>`. |
| [`stringsCopy.c`](./stringsCopy.c) | Copia y manipulación de cadenas mediante `strcpy()`. |

### 5. Funciones, Estructuras y Punteros

| Archivo | Concepto practicado |
| :--- | :--- |
| [`function.c`](./function.c) | Definición, llamada y paso de parámetros en funciones definidas por el usuario. |
| [`function2.c`](./function2.c) | Modularización de código y retorno de valores desde funciones. |
| [`structure.c`](./structure.c) | Creación y acceso a miembros de tipos de datos compuestos con `struct`. |
| [`pointers.c`](./pointers.c) | Uso de punteros (`*`), direcciones de memoria (`&`) y desreferenciación. |

---

## ⚙️ Cómo compilar y ejecutar cualquiera de estos ejemplos

Desde la terminal integrada de Visual Studio Code, sitúate dentro de esta carpeta y ejecuta:

```bash
gcc nombre_del_archivo.c -o programa
./programa
```

# 💻 Ruta de Aprendizaje y Certificaciones en C (Enfoque Microcontroladores)

Repositorio dedicado al estudio progresivo del lenguaje de programación **C** orientado al desarrollo de **firmware y sistemas embebidos**, abarcando desde los fundamentos de sintaxis hasta la manipulación de registros a nivel de bits, gestión estricta de memoria, preprocesador, interrupciones y protocolos de comunicación sobre microcontroladores.

---

## 📋 Progreso del Roadmap

- [ ] **Nivel 1 (Iniciación):** C for Beginners / C Programming Basics
- [ ] **Nivel 2 (Básico – Intermedio):** C Certification (3 bloques prácticos en Coddy Tech)
- [ ] **Nivel 3 (Básico - Ruta Oficial CLE):** C Essentials 1
- [ ] **Nivel 4 (Universitario / Algoritmia):** Harvard CS50x *(Semanas 1 a 5: memoria y estructuras en C)*
- [ ] **Nivel 5 (Intermedio - Ruta Oficial CLA):** C Essentials 2 *(Enfoque en preprocesador y estructuras)*
- [ ] **Nivel 6 (Avanzado - Ruta Oficial CLP):** C Advanced *(Enfoque en `volatile`, precisión de bits y sistemas)*
- [ ] **Nivel 7 (Especialización Embebidos):** Embedded C, Periféricos y Simulación en Wokwi

---

## 🗺️ Detalle de Certificaciones y Enlaces Directos

| Nivel | Certificación / Recurso | Plataforma y Acceso | Enfoque para Microcontroladores | Evaluación |
| :--- | :--- | :--- | :--- | :--- |
| **1. Iniciación** | **C for Beginners / C Programming Basics** | [Great Learning Academy](https://www.mygreatlearning.com/academy/learn-for-free/courses/c-for-beginners) / [Simplilearn SkillUp](https://www.simplilearn.com/free-c-programming-course-skillup) | Sintaxis básica, tipos de datos primitivos, operadores, bucles y funciones. | Cuestionarios teóricos cortos. |
| **2. Básico – Intermedio** | **C Certification (3 certificados)** | [Coddy Tech](https://coddy.tech/) | Control de flujo, punteros, `struct` y manejo de memoria. | Retos de código real en navegador. |
| **3. Básico (Ruta Oficial)** | **C Essentials 1** *(alineado con CLE)* | [Edube Interactive](https://edube.org/) / [Cisco NetAcad](https://www.netacad.com/) | Arrays, cadenas, aritmética de punteros y funcionamiento de la memoria (40 h). | Exámenes por módulo y examen final. |
| **4. Universitario / Algoritmia** | **CS50x (Semanas 1–5)** | [Harvard CS50x](https://cs50.harvard.edu/x/) | Algoritmia, punteros y estructuras de datos en C *(se omite el bloque web/Python)*. | Entregas prácticas (*problem sets* 1–5). |
| **5. Intermedio (Ruta Oficial)** | **C Essentials 2** *(alineado con CLA)* | [Edube Interactive](https://edube.org/) / [Cisco NetAcad](https://www.netacad.com/) | Directivas del preprocesador (`#define`, macros, `#ifdef`) y estructuras complejas (30 h). | Exámenes por módulo y examen final. |
| **6. Avanzado (Ruta Oficial)** | **C Advanced** *(alineado con CLP)* | [Edube Interactive](https://edube.org/) / [Cisco NetAcad](https://www.netacad.com/) | Uso de `volatile`, precisión de bits, *undefined behavior* y llamadas de sistema (42 h). | Evaluaciones técnicas avanzadas. |
| **7. C Embebido y Hardware** | **Embedded C & Simulación** | [Microchip University](https://mu.microchip.com/) / [ST MOOCs](https://www.st.com/content/st_com/en/support/learning/stm32-education/stm32-moocs.html) / [Wokwi](https://wokwi.com/) | GPIO, *timers*, interrupciones, registros y buses serie (**UART, SPI, I2C, CAN**). | Laboratorios simulados en placa virtual. |

---

## 🔧 Pilares Técnicos Prioritarios en Firmware

Durante el avance por los distintos cursos, se pone especial énfasis en las herramientas del estándar C críticas para microcontroladores:

1. **Manipulación a nivel de bits (*Bitwise*):** Uso de `&`, `|`, `^`, `~`, `<<` y `>>` para leer, activar o limpiar bits individuales en registros de configuración de periféricos.
2. **Enteros de ancho fijo (`<stdint.h>`):** Uso sistemático de `uint8_t`, `uint16_t`, `uint32_t` e `int16_t` para garantizar el tamaño exacto de cada variable independientemente de la arquitectura del microcontrolador.
3. **Calificadores `volatile` y `static`:** Protección de variables compartidas con rutinas de interrupción (ISR) o registros mapeados en memoria frente a optimizaciones del compilador.
4. **Empaquetado de datos (`struct`, `union` y *bit-fields*):** Diseño de tramas para protocolos de comunicación industrial y serie (**UART, SPI, I2C, CAN, Modbus**) sin desperdiciar memoria RAM.

---

## 📂 Estructura del Repositorio

```text
.
├── 01-c-basics/               # Sintaxis, tipos de datos, bucles y funciones
├── 02-coddy-challenges/       # Retos prácticos de punteros, structs y memoria
├── 03-c-essentials-1/         # Prácticas y laboratorios de C Essentials 1 (CLE)
├── 04-cs50x-c-algorithms/     # Apuntes propios de memoria y estructuras de datos (semanas 1–5)
├── 05-c-essentials-2/         # Preprocesador (#define, macros), structs y streams (CLA)
├── 06-c-advanced/             # volatile, precisión de bits, undefined behavior y sistemas (CLP)
├── 07-embedded-c-wokwi/       # Prácticas de C embebido, registros y simulación de periféricos
├── .gitignore                 # Exclusión de binarios compilados (*.exe)
└── README.md
```

> **Nota sobre Harvard CS50x:** De acuerdo con el código de honor del curso, las soluciones de los *problem sets* se mantienen en un repositorio privado. En este repositorio público solo se alojan apuntes y esquemas propios.

---

## ⚙️ Estándar de Compilación y Depuración

Todos los programas en C estándar de este repositorio se compilan activando advertencias estrictas para detectar errores antes de llevar código a hardware real:

```bash
# Compilación estricta con GCC
gcc -Wall -Wextra -std=c11 archivo.c -o programa

# Verificación de fugas de memoria con Valgrind (entorno Linux)
valgrind --leak-check=full ./programa
```

---

## 🏆 Certificados Obtenidos

*(Espacio reservado para añadir los enlaces de verificación e IDs de cada diploma al finalizarlo)*

- **C for Beginners:** *En curso*
- **Coddy Tech C Certification:** *Pendiente*
- **C Essentials 1 (Cisco / OpenEDG):** *Pendiente*
- **C Essentials 2 (Cisco / OpenEDG):** *Pendiente*
- **C Advanced (Cisco / OpenEDG):** *Pendiente*
- **Embedded C (Microchip / ST):** *Pendiente*

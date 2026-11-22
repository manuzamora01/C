# 💻 Ruta de Aprendizaje y Certificaciones en C

Repositorio dedicado al estudio progresivo del lenguaje de programación **C**, desde los fundamentos de sintaxis hasta la gestión manual de memoria, estructuras de datos, concurrencia y programación de sistemas. Aquí iré recopilando prácticas, laboratorios y proyectos organizados según cada certificación completada.

---

## 📋 Progreso del Roadmap

- [ ] **Nivel 1 (Iniciación):** C for Beginners / C Programming Basics
- [ ] **Nivel 2 (Básico – Intermedio):** C Certification (3 bloques prácticos)
- [ ] **Nivel 3 (Básico - Ruta Oficial CLE):** C Essentials 1
- [ ] **Nivel 4 (Universitario / Algoritmia):** Harvard CS50x
- [ ] **Nivel 5 (Intermedio - Ruta Oficial CLA):** C Essentials 2
- [ ] **Nivel 6 (Avanzado - Ruta Oficial CLP):** C Advanced

---

## 🗺️ Detalle de Certificaciones y Enlaces Directos

| Nivel | Certificación | Plataforma y Acceso | Temario Principal | Formato de Evaluación |
| :--- | :--- | :--- | :--- | :--- |
| **1. Iniciación** | **C for Beginners / C Programming Basics** | [Great Learning Academy](https://www.mygreatlearning.com/academy/learn-for-free/courses/c-for-beginners) / [Simplilearn SkillUp](https://www.simplilearn.com/free-c-programming-course-skillup) | Sintaxis básica, tipos de datos, operadores, condicionales, bucles y funciones. | Cuestionarios teóricos cortos. |
| **2. Básico – Intermedio** | **C Certification (3 certificados)** | [Coddy Tech](https://coddy.tech/) | Fundamentos, control de flujo, punteros, `struct` y gestión manual (`malloc`/`free`). | Retos de código real en navegador. |
| **3. Básico (Ruta Oficial)** | **C Essentials 1** *(alineado con CLE)* | [Edube Interactive](https://edube.org/) / [Cisco NetAcad](https://www.netacad.com/) | Arrays, cadenas, aritmética de punteros y memoria dinámica (40 h). | Exámenes por módulo y examen final. |
| **4. Universitario / Algoritmia** | **CS50x (vía Harvard OCW)** | [Harvard CS50x](https://cs50.harvard.edu/x/) | Memoria a bajo nivel, punteros, estructuras de datos y algoritmos en C. | 10 entregas prácticas (*problem sets*) + proyecto final. |
| **5. Intermedio (Ruta Oficial)** | **C Essentials 2** *(alineado con CLA)* | [Edube Interactive](https://edube.org/) / [Cisco NetAcad](https://www.netacad.com/) | Estructuras complejas, ficheros, flujos (*streams*) y preprocesador (30 h). | Exámenes por módulo y examen final. |
| **6. Avanzado (Ruta Oficial)** | **C Advanced** *(alineado con CLP)* | [Edube Interactive](https://edube.org/) / [Cisco NetAcad](https://www.netacad.com/) | Llamadas al sistema POSIX, concurrencia e hilos, *sockets*, IEEE-754 y *undefined behavior* (42 h). | Evaluaciones técnicas avanzadas. |

---

## 📂 Estructura del Repositorio *(en construcción)*

A medida que avance en cada certificación, iré añadiendo los ejercicios y laboratorios organizados en las siguientes carpetas:

```text
.
├── 01-c-basics/               # Ejercicios iniciales de sintaxis, bucles y funciones
├── 02-coddy-challenges/       # Retos prácticos de punteros, structs y memoria
├── 03-c-essentials-1/         # Prácticas y laboratorios de C Essentials 1 (CLE)
├── 04-cs50x-final-project/    # Apuntes propios y proyecto final de Harvard CS50x
├── 05-c-essentials-2/         # Manejo de ficheros, streams y preprocesador (CLA)
├── 06-c-advanced/             # Hilos, sockets, POSIX y bajo nivel (CLP)
└── README.md
```

> **Nota sobre Harvard CS50x:** De acuerdo con el código de honor del curso, las soluciones de los *problem sets* semanales se mantienen en un repositorio privado. En este repositorio público solo se subirán apuntes propios y el proyecto final.

---

## ⚙️ Estándar de Compilación y Depuración

Todos los programas de este repositorio se compilan activando advertencias estrictas y verificando la ausencia de fugas de memoria:

```bash
# Compilación con GCC
gcc -Wall -Wextra -std=c11 main.c -o programa

# Verificación de memoria dinámica con Valgrind
valgrind --leak-check=full ./programa
```

---

## 🏆 Certificados Obtenidos

*(Espacio reservado para añadir los enlaces de verificación e IDs de cada diploma al finalizarlo)*

- **C for Beginners:** *Pendiente*
- **Coddy Tech C Certification:** *Pendiente*
- **C Essentials 1 (Cisco / OpenEDG):** *Pendiente*
- **Harvard CS50x:** *Pendiente*
- **C Essentials 2 (Cisco / OpenEDG):** *Pendiente*
- **C Advanced (Cisco / OpenEDG):** *Pendiente*

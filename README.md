# 🏊‍♂️ Piscine Reloaded - 42

Este repositorio contiene la resolución de todos los ejercicios del módulo **Piscine Reloaded** de 42. El objetivo de este proyecto es recordar, repasar y afianzar las bases sintácticas y semánticas del lenguaje C y el manejo básico de comandos Shell aprendidos durante la Piscine.

---

## 📂 Índice de Ejercicios

### 🐚 Shell y Utilidades
* **[ex00](ex00/)** - `Oh, sí, másss...`: Creación de archivos y directorios con permisos específicos y empaquetado `tar`.
* **[ex01](ex01/)** - `Z`: Archivo que devuelve la letra `Z` seguida de un salto de línea al ejecutar `cat`.
* **[ex02](ex02/)** - `clean`: Línea de comandos para buscar y eliminar archivos acabados en `~` o que empiezan y acaban con `#`.
* **[ex03](ex03/)** - `find_sh.sh`: Script para buscar archivos acabados en `.sh` mostrando solo sus nombres sin la extensión.
* **[ex04](ex04/)** - `MAC.sh`: Script para mostrar las direcciones MAC del ordenador.
* **[ex05](ex05/)** - `\?*\'MaRViN\'*$?\"`: Creación de un archivo con un nombre complejo que contenga únicamente el texto `42`.

---

### 💻 Fundamentos de C
* **[ex06](ex06/)** - `ft_print_alphabet`: Función que muestra el alfabeto en minúsculas en orden ascendente usando `ft_putchar`.
* **[ex07](ex07/)** - `ft_print_numbers`: Función que muestra todos los dígitos en orden ascendente.
* **[ex08](ex08/)** - `ft_is_negative`: Función que muestra `'N'` o `'P'` según el signo del entero recibido por parámetro.
* **[ex09](ex09/)** - `ft_ft`: Función que toma un puntero a entero y le asigna el valor `42`.
* **[ex10](ex10/)** - `ft_swap`: Función que intercambia el valor de dos enteros mediante punteros.
* **[ex11](ex11/)** - `ft_div_mod`: Función que calcula la división y el módulo de dos números almacenándolos en punteros.
* **[ex12](ex12/)** - `ft_iterative_factorial`: Función iterativa para calcular el factorial de un número.
* **[ex13](ex13/)** - `ft_recursive_factorial`: Función recursiva para calcular el factorial de un número.
* **[ex14](ex14/)** - `ft_sqrt`: Función que devuelve la raíz cuadrada entera de un número o `0` si es irracional.
* **[ex15](ex15/)** - `ft_putstr`: Función que muestra una cadena de caracteres por la salida estándar.
* **[ex16](ex16/)** - `ft_strlen`: Reproducción del comportamiento de la función `strlen`.
* **[ex17](ex17/)** - `ft_strcmp`: Reproducción del comportamiento de la función `strcmp`.

---

### 🚀 Programas y Funciones Avanzadas
* **[ex18](ex18/)** - `ft_print_params`: Programa que muestra por pantalla los argumentos recibidos por línea de comandos.
* **[ex19](ex19/)** - `ft_sort_params`: Programa que muestra los argumentos recibidos ordenados alfabéticamente en formato ASCII.
* **[ex20](ex20/)** - `ft_strdup`: Reproducción de la función `strdup` utilizando asignación dinámica de memoria (`malloc`).
* **[ex21](ex21/)** - `ft_range`: Función que crea un array de enteros con todos los valores comprendidos entre `min` (incluido) y `max` (excluido).
* **[ex22](ex22/)** - `ft_abs.h`: Creación de la macro `ABS(Value)` para obtener el valor absoluto.
* **[ex23](ex23/)** - `ft_point.h`: Creación de un archivo de cabecera con una estructura de puntos para compilar un `main` específico.
* **[ex24](ex24/)** - `Makefile`: Creación del archivo de automatización para compilar la librería estática `libft.a` con reglas `all`, `clean`, `fclean` y `re`.
* **[ex25](ex25/)** - `ft_foreach`: Función que aplica otra función a cada elemento de un array de enteros.
* **[ex26](ex26/)** - `ft_count_if`: Función que cuenta cuántos elementos de un array devuelven `1` al ser evaluados por una función dada.
* **[ex27](ex27/)** - `display_file`: Programa en C que muestra el contenido de un archivo pasado por argumento gestionando errores de lectura y argumentos mediante llamadas al sistema (`open`, `read`, `write`, `close`).

---

## ⚙️ Normas de Compilación
Todos los archivos de código en C de este repositorio han sido desarrollados cumpliendo estrictamente con la **Norma** de 42 y compilados con los flags de seguridad obligatorios de la Moulinette:
```bash
cc -Wall -Wextra -Werror
```

---
*Desarrollado como parte del CURSO de formación en 42.*
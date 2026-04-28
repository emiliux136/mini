# 🐚 Minishell - A beautiful little bash

![C](https://img.shields.io/badge/Language-C-blue.svg)
![Build](https://img.shields.io/badge/Build-Makefile-orange.svg)
![Standard](https://img.shields.io/badge/School-42-black.svg)

**Minishell** es una recreación funcional de una shell de Unix (estilo Bash). [cite_start]Es uno de los proyectos más exigentes del currículo de **42**, diseñado para profundizar en el manejo de procesos, descriptores de archivos, señales y gestión de memoria en C.

---

## 🚀 Funcionalidades Principales

Este proyecto implementa un ciclo completo de ejecución de comandos con las siguientes características:

* **Lexer & Parser:** División de la entrada en tokens y organización en estructuras de comandos.
* **Gestión de Comillas:** Soporte para comillas simples (`'`) y dobles (`"`) con expansión de variables.
* **Redirecciones y Pipes:** Manejo de entrada/salida (`<`, `>`, `>>`) y el operador pipe (`|`) para encadenar comandos.
* **Heredoc:** Implementación de `<<` para entradas multilínea.
* [cite_start]**Variables de Entorno:** Gestión dinámica mediante un diccionario (linked list) de `env`.

### Built-ins Implementados
* `echo` (con opción `-n`).
* `cd` (actualiza `PWD` y `OLDPWD`).
* `pwd`, `export`, `unset`, `env` y `exit`.

---

## 🛠️ Stack Tecnológico

| Componente | Herramienta/Lógica |
| :--- | :--- |
| **Lenguaje** | [cite_start]C (Estándar 42)  |
| **Librerías** | [cite_start]`readline`, `history`, `libft`  |
| **Arquitectura** | [cite_start]Listas enlazadas para tokens y comandos  |
| **Compilación** | [cite_start]Makefile con feedback visual y colores [cite: 2, 3] |

---

## 💻 Instalación y Uso

### Compilación
[cite_start]El proyecto utiliza un `Makefile` configurado con flags de error estrictos (`-Wall -Wextra -Werror`)[cite: 2].

```bash
# Clonar el repositorio
git clone [https://github.com/emiliux136/mini.git](https://github.com/emiliux136/mini)
cd minishell

# Compilar
make

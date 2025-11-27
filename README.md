# libft 📚

**libft** — Biblioteca personal en C con funciones propias (reimplementación de funciones estándar + utilidades extra) creada por Yasir.  
Este repositorio reúne funciones en C y un `Makefile` para compilar una librería estática (`libft.a`) utilizable en otros proyectos.

---

## 📌 ¿Qué es este proyecto?

- Una biblioteca en C que re‑implementa funciones comunes de la biblioteca estándar y añade utilidades extra, para usar en futuros proyectos en C.  
- Pensada para servir como base reutilizable en distintos programas, fomentando la comprensión profunda del funcionamiento interno de funciones comunes en C.

---

## 🧰 Tecnologías y entorno

- **Lenguaje principal:** C (compatible con estándares del proyecto)  
- **Compilador:** `cc` (u otro compilador C compatible)  
- **Makefile**: para compilar la biblioteca e incluir funciones “bonus” si así lo deseas.

---

## 🚀 Cómo usar / compilar

```bash
# Clonar el repositorio
git clone https://github.com/yasirrdev/libft.git
cd libft

# Compilar la biblioteca con funciones obligatorias
make

# (Opcional) Compilar con funciones bonus
make bonus

# Opciones de limpieza
make clean   # Borra objetos (*.o)
make fclean  # Borra objetos + biblioteca (*.a)
make re      # Limpia y recompila
```

Para usar la librería en tu código:

```c
#include "libft.h"

// Al compilar:
cc tu_programa.c -L<ruta_libft> -lft
```

---

## 📄 Contenido del repositorio

- Código fuente de funciones (memoria, cadenas, utilidades, listas, …)  
- `libft.h` — el header con declaraciones de funciones  
- `Makefile` — para compilar la biblioteca y limpiar objetos/binarios  
- `.gitignore`

---

## ✅ Qué incluye (parte obligatoria + bonus)

Funciones de manipulación de memoria y cadenas, utilidades y funciones de listas (bonus). Esto permite tener una librería propia robusta frente al uso directo de la librería estándar.

---

## 🎯 Uso ideal

- Como base reusable en proyectos propios en C  
- Para reforzar tu entendimiento de cómo funcionan internamente funciones de la librería estándar  
- Para mantener código más limpio, modular y reutilizable en futuros trabajos

---

## 📝 Contribuciones / Extensiones

Si quieres añadir funciones nuevas o mejoras:

1. Crea un fork del repositorio.  
2. Añade nuevas funciones en `.c` + declara en `libft.h`.  
3. Asegúrate que compilen sin errores y sigan el estilo establecido.  
4. Opcional: añade tests o ejemplos de uso.  
5. Haz un pull request explicando qué añadiste/por qué.

---

## 📩 Autor / Licencia

Repositorio mantenido por **Yasir** — perfecto para usar como base, como referencia o como herramienta educativa.

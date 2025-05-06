# Guía Completa de C++ para Principiantes

## 1. Introducción

En C++, la función `main()` se declara con un tipo de retorno `int` porque así lo establece el estándar del lenguaje. El valor entero que retorna `main` se utiliza para indicar el resultado del programa al sistema operativo o entorno que lo ejecuta.

### ¿Por qué `int`?

El valor de retorno de `main()` le dice al sistema operativo si el programa terminó correctamente o con errores. Esta es la convención:

- `return 0;` → El programa terminó correctamente.
- `return 1;` o cualquier otro valor distinto de 0 → Ocurrió algún error o finalización anormal.

## 2. El Espacio de Nombres `std`

Antes de sumergirnos en las profundidades de las funcionalidades del espacio de nombres `std`, es esencial comprender su definición.

`std` en C++ se refiere a "Standard," y este espacio de nombres encapsula una variedad de elementos fundamentales que forman parte del estándar del lenguaje.

Este componente esencial evita conflictos de nombres, facilitando la integración de diversas bibliotecas y el desarrollo de código limpio y organizado.

### `cout` y `cin`
- `cout` → Significa "Console Output" (salida en consola).
- `cin` → Significa "Console Input" (entrada desde consola).

## 3. Operador `<<`

### Operador de inserción en C++

En C++, el operador `<<` tiene dos usos principales dependiendo del contexto:

1. **Con `std::cout`** → Operador de salida (output), llamado operador de inserción, porque "inserta" datos en la consola.

   ```cpp
   std::cout << "Hola mundo" << std::endl;

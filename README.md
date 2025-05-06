# DOCUMENTACIÓN OFICIAL C++
🔗 [Documentación oficial de C++](https://learn.microsoft.com/es-es/cpp/cpp/?view=msvc-170)

## Función main()
- En C++, la función `main()` se declara con un tipo de retorno `int` porque así lo establece el estándar del lenguaje.
- El valor entero que retorna `main` se utiliza para indicar el resultado del programa al sistema operativo.

### ¿Por qué int?
El valor de retorno de `main()` indica al sistema operativo si el programa terminó correctamente:

- `return 0;` → El programa terminó correctamente.
- `return 1;` (o cualquier valor ≠ 0) → Ocurrió algún error.

## Espacio de nombres std
Antes de sumergirnos en las funcionalidades del espacio de nombres `std`, es esencial comprender su definición.

- **STD** en C++ se refiere a "Standard".
- Este espacio de nombres encapsula elementos fundamentales del estándar del lenguaje.
- Evita conflictos de nombres, facilitando la integración de bibliotecas.

### Componentes clave:
- `cout` = **Console Output** (salida en consola)
- `cin` = **Console Input** (entrada desde consola)

---

## Operadores básicos

### Operador `<<`
En C++, el operador `<<` tiene dos usos principales:

<< : Operador de inserción

✅ **1. Con std::cout** → Operador de salida (output)
Ejemplo:
```cpp
std::cout << "Hola mundo" << std::endl;

"Hola mundo" se inserta en la salida estándar (la consola).

<< conecta varias cosas. Podés escribir:

std::cout << "El resultado es: " << 42 << std::endl;

| Uso            | Significado                   | Contexto          |
| -------------- | ----------------------------- | ----------------- |
| `std::cout <<` | Mostrar datos en la consola   | Programas comunes |
| `x << y`       | Desplazar bits a la izquierda | Bajo nivel / bits |

--------------------------------------------------------------------------------------------------------------------------

✅ 2. Operador de desplazamiento de bits
Ejemplo:

int x = 5 << 2; // Desplaza bits de 5 a la izquierd

🧠 1. Tipos de datos primitivos

🔢 Enteros (sin decimales)

| Tipo           | Rango aproximado               | Ejemplo                       |
| -------------- | ------------------------------ | ----------------------------- |
| `int`          | -2.147.483.648 a 2.147.483.647 | `int edad = 22;`              |
| `short`        | -32.768 a 32.767               | `short x = 1000;`             |
| `long`         | -2 mil millones aprox.         | `long y = 1000000;`           |
| `long long`    | hasta 9 trillones aprox.       | `long long z = 123456789012;` |
| `unsigned int` | 0 a 4.294.967.295              | `unsigned int a = 100;`       |

💬 Caracteres

| Tipo   | Descripción            | Ejemplo             |
| ------ | ---------------------- | ------------------- |
| `char` | Un solo carácter ASCII | `char letra = 'A';` |

| Tipo   | Descripción       | Ejemplo             |
| ------ | ----------------- | ------------------- |
| `bool` | Verdadero o falso | `bool vivo = true;` |

🔣 Decimales (con punto flotante)

| Tipo          | Precisión           | Ejemplo                    |
| ------------- | ------------------- | -------------------------- |
| `float`       | 7 decimales aprox.  | `float pi = 3.14f;`        |
| `double`      | 15 decimales aprox. | `double e = 2.7182818;`    |
| `long double` | más precisión       | `long double z = 3.14159;` |

📦 2. Tipo cadena de texto

| Tipo          | Descripción    | Ejemplo                          |
| ------------- | -------------- | -------------------------------- |
| `std::string` | Texto completo | `std::string nombre = "Maximo";` |


🧱 3. Modificadores de tipo
Podés combinarlos con tipos primitivos para cambiar su tamaño o comportamiento:

signed (con signo)

unsigned (sin signo → solo positivos)

short (menos memoria)

long (más memoria)

const (valor constante → no puede cambiarse)

EJEMPLO:

const int diasEnLaSemana = 7;
unsigned int edad = 25;

### 🧰 4. Otros tipos útiles (más avanzados)

| Tipo        | Descripción                           |
| ----------- | ------------------------------------- |
| `auto`      | Detecta automáticamente el tipo       |
| `void`      | Tipo que no retorna nada (funciones)  |
| `enum`      | Lista de constantes numeradas         |
| `struct`    | Agrupa variables en una sola entidad  |
| `union`     | Como `struct`, pero comparten memoria |
| `nullptr_t` | Tipo del puntero nulo (`nullptr`)     |
| `wchar_t`   | Carácter ancho (Unicode)              |


✅ División
Divide dos números y devuelve el resultado completo (con decimales si usás float o double, o solo la parte entera si usás int).
int a = 10 / 3;       // Resultado: 3 (solo la parte entera)
float b = 10.0 / 3;   // Resultado: 3.33333 (con decimales)

✅ % → Módulo (resto de la división entera)
Devuelve el resto que queda luego de dividir un número entero por otro.

Solo se usa con números enteros (int), no con float o double.

Ejemplos:

int r = 10 % 3;  // Resultado: 1 (porque 10 = 3*3 + 1)
int s = 9 % 3;   // Resultado: 0 (porque 9 = 3*3 + 0)


std::cout << "Hola ";
std::cout << "Maximo";

imprimiria esto: Hola Maximo
std::cout << "Hola" << std::endl;
std::cout << "Maximo" << std::endl;

Hola
Maximo

-----------------------------------------------------------------------------------------------------------------------------

### BUCLES:

🔁 ¿Qué es un bucle?
Un bucle (o loop) permite repetir un bloque de código mientras se cumpla una condición.

| Tipo       | ¿Cuándo se usa?                                          |
| ---------- | -------------------------------------------------------- |
| `while`    | Cuando **no sabés cuántas veces** se va a repetir.       |
| `do while` | Igual que `while`, pero **se ejecuta al menos una vez**. |
| `for`      | Cuando **sabés cuántas veces** querés repetir.           |

1️⃣ Bucle while (mientras)
🔤 Sintaxis:

while (condición) {
    // Código que se repite
}

int i = 1;
while (i <= 5) {
    cout << i << endl;
    i++;
}

SALIDA:
1
2
3
4
5

---------------------------------------------------------------------------------------------------------

2️⃣ Bucle do while (hacer mientras)
🔤 Sintaxis:

do {
    // Código que se ejecuta al menos una vez
} while (condición);

✅ Ejemplo:

int i = 1;
do {
    cout << i << endl;
    i++;
} while (i <= 5);

Salida: 1
2
3
4
5

IMPORTANTE: Incluso si la condición al principio es falsa, el bloque se ejecuta una vez.

-----------------------------------------------------------------------------------------------------------------

3️⃣ Bucle for (para)
🔤 Sintaxis:

for (inicialización; condición; incremento) {
    // Código que se repite
}

✅ Ejemplo:

for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}

SALIDA:
1
2
3
4
5

--------------------------------------------------------------------------------------------------------------------

🧠 ¿Qué está pasando en un for?

for (int i = 0; i < 3; i++) {
    cout << "Hola" << endl;
}

Esto significa:

int i = 0 → empieza en 0

i < 3 → se repite mientras i sea menor que 3

i++ → después de cada vuelta, se suma 1 a i


🛠 Mini ejercicio para practicar:
Mostrá los números del 10 al 1 usando un bucle for.

------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    // Variable que indica si la masa tiene grumos
    bool masaConGrumos = true;

    // Contador de veces que se batió
    int vecesBatidas = 0;

    cout << "🥣 Preparando la masa para la torta..." << endl;
    cout << "--------------------------------------" << endl;

    // Bucle que se ejecuta al menos una vez
    do {
        cout << "🔄 Batiendo la masa (" << vecesBatidas + 1 << " vez)" << endl;
        vecesBatidas++;

        // Simulamos que después de 3 veces, ya no hay grumos
        if (vecesBatidas >= 3) {
            masaConGrumos = false; // Ya no tiene grumos
        }

    } while (masaConGrumos); // Mientras tenga grumos, seguimos batiendo

    cout << "✅ ¡Listo! La masa ya no tiene grumos. Ahora se puede hornear. 🍰" << endl;

    system("pause");
    return 0;
}

---------------------------------------------------------------------------------
🔁 while en C++
🧠 ¿Qué es?
Un bucle que se repite mientras una condición sea verdadera.
Primero evalúa la condición, y si es verdadera, ejecuta el bloque de código.

🔧 Sintaxis:

while (condición) {
    // Código que se repite mientras la condición sea verdadera
}

✅ Ejemplo: Contar del 1 al 5

int i = 1;

while (i <= 5) {
    cout << i << endl;
    i++; // ¡IMPORTANTE! Aumentar para evitar bucle infinito
}


🔁 for en C++
🧠 ¿Qué es?
Un bucle más estructurado para repetir algo un número definido de veces.
Tiene 3 partes:

Inicialización (por ejemplo int i = 0)

Condición (i < 5)

Incremento (i++)

🔧 Sintaxis:

for (inicialización; condición; incremento) {
    // Código que se repite
}

✅ Ejemplo: Contar del 1 al 5

for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}

📊 Diferencias clave

| Característica       | `while`                                   | `for`                                              |
| -------------------- | ----------------------------------------- | -------------------------------------------------- |
| ¿Cuándo usarlo?      | Cuando **no sabés cuántas veces** repetir | Cuando sabés **exactamente cuántas veces** repetir |
| Condición se evalúa  | **Antes** de ejecutar el bloque           | **Antes**, pero todo está en una sola línea        |
| Control de variables | Se declara afuera                         | Se declara y maneja **dentro del `for`**           |

🎓 Ejemplo comparativo visual
  Con while

  int i = 1;
  while (i <= 3) {
    cout << "Hola (while) - vuelta " << i << endl;
    i++;
}


Con for

for (int i = 1; i <= 3; i++) {
    cout << "Hola (for) - vuelta " << i << endl;
}


Ambos hacen lo mismo, pero el for es más compacto cuando ya sabés la cantidad de repeticiones.

----------------------------------------------------------------------------------

Vamos a hacer un ejemplo interactivo con while donde el usuario decide si seguir o no. Esto te ayuda a practicar:

Condiciones (while)

Entrada de datos (cin)

Operadores lógicos (!=)

Control del flujo con texto


✅ Ejemplo interactivo: “¿Querés seguir?”

#include <iostream>
using namespace std;

int main() {
    char respuesta; // para guardar 's' o 'n'
    int veces = 1;

    cout << "💬 ¿Querés seguir? (s = sí / n = no): ";
    cin >> respuesta;

    while (respuesta != 'n') {
        cout << "🔁 Repetición número " << veces << endl;
        veces++;

        cout << "💬 ¿Querés seguir? (s = sí / n = no): ";
        cin >> respuesta;
    }

    cout << "👋 Saliste del bucle. ¡Hasta luego!" << endl;

    system("pause");
    return 0;
}

🧠 Explicación paso a paso:
Se le pregunta al usuario si quiere seguir (s o n).

Mientras la respuesta NO sea 'n', se repite el mensaje.

Se cuenta cuántas veces se repitió.

Si el usuario pone 'n', sale del bucle.


CON DO WHILE

Acá tenés el mismo ejemplo, pero usando do while. La gran diferencia es que el do while ejecuta al menos una vez el código, sin importar la condición inicial.

✅ Versión con do while: “¿Querés seguir?”

#include <iostream>
using namespace std;

int main() {
    char respuesta;
    int veces = 1;

    do {
        cout << "🔁 Repetición número " << veces << endl;
        veces++;

        cout << "💬 ¿Querés seguir? (s = sí / n = no): ";
        cin >> respuesta;

    } while (respuesta != 'n');

    cout << "👋 Saliste del bucle. ¡Hasta luego!" << endl;

    system("pause");
    return 0;
}


| Característica              | `while`                               | `do while`                             |
| --------------------------- | ------------------------------------- | -------------------------------------- |
| ¿Evalúa antes o después?    | Antes de ejecutar el bloque           | Después de ejecutar el bloque una vez  |
| ¿Puede no ejecutarse nunca? | Sí (si la condición inicial es falsa) | No (siempre se ejecuta al menos 1 vez) |


Si el usuario escribe 'n' desde el principio, con do while igual verá una vuelta, mientras que con while no se ejecutaría nada.

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "📥 Ingresá un número para ver su tabla de multiplicar: ";
    cin >> numero;

    cout << "📊 Tabla del " << numero << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    system("pause");
    return 0;
}

🧠 ¿Qué se aprende con esto?
Cómo usar un bucle for para repetir algo un número fijo de veces.

Cómo usar una variable de control (i) en la multiplicación.

Entrada y salida de datos con cin y cout.


📤 Salida (si el usuario ingresa 5):

📊 Tabla del 5:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50

EXPLICACION EJERCICIO 3: QUE HACE EL FOR()?
https://chatgpt.com/share/68194647-0094-8003-875e-e0c20eaac857

#include <iostream>
using namespace std;

int main() {
  int numero;

  // 1. Solicitar al usuario que ingrese un número
  cout << "Ingresar un número: ";
  cin >> numero;

  // 2. Verificar si el número es impar
  if (numero % 2 != 0) {
    // Si el número es impar, se imprimen los números correlativos
    // desde el número ingresado hasta el doble de ese número.
    for (int i = numero; i <= numero * 2; i++) {
      cout << i << " ";  // Imprimir el valor de 'i' seguido de un espacio
    }
  }
  else {
    // Si el número es par, se imprimen solo los números pares
    // desde el número ingresado hasta el doble de ese número.
    for (int i = numero; i <= numero * 2; i += 2) {
      cout << i << " ";  // Imprimir el valor de 'i' seguido de un espacio
    }
  }

  // 3. Salto de línea para mejorar la salida
  cout << endl;

  // 4. Pausar el programa (solo en Windows)
  system("pause");

  return 0;  // Finaliza la ejecución del programa
}

----------------------------------------------------------


### 🔀 ¿Qué es switch en C++?
El switch es una estructura de control de flujo que permite ejecutar diferentes bloques de código según el valor de una variable. Es muy útil cuando tienes múltiples opciones fijas para evaluar, como menús o respuestas numéricas.


switch (expresión) {
    case valor1:
        // Código si la expresión == valor1
        break;
    case valor2:
        // Código si la expresión == valor2
        break;
    ...
    default:
        // Código si no coincide ningún valor
}


expresión: debe ser de tipo int, char o enum. No se puede usar string ni float.

break: detiene el flujo del switch. Si se omite, se ejecutan los siguientes case también (fallthrough).

default: es opcional. Se ejecuta si ningún case coincide.

💡 Ejemplo 1: Menú simple con switch

#include <iostream>
using namespace std;

int main() {
    int opcion;

    cout << "📋 Menú de opciones:\n";
    cout << "1. Saludar\n";
    cout << "2. Mostrar edad\n";
    cout << "3. Salir\n";
    cout << "Elige una opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "👋 ¡Hola, Maximo!" << endl;
            break;
        case 2:
            cout << "🧓 Tenés 22 años." << endl;
            break;
        case 3:
            cout << "🚪 Saliendo del programa..." << endl;
            break;
        default:
            cout << "❌ Opción inválida. Intentá de nuevo." << endl;
    }

    return 0;
}


🧪 Ejemplo 2: Usando char en un switch

#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Escribí una letra (a, b o c): ";
    cin >> letra;

    switch (letra) {
        case 'a':
            cout << "Letra A elegida." << endl;
            break;
        case 'b':
            cout << "Letra B elegida." << endl;
            break;
        case 'c':
            cout << "Letra C elegida." << endl;
            break;
        default:
            cout << "Letra no reconocida." << endl;
    }

    return 0;
}


⚠️ Importante: Qué pasa si no usás break


int numero = 2;

switch (numero) {
    case 1:
        cout << "Uno\n";
    case 2:
        cout << "Dos\n";
    case 3:
        cout << "Tres\n";
    default:
        cout << "Otra opción\n";
}

🔴 Esto imprime:

Dos
Tres
Otra opción

¿Por qué? Porque no hay break, así que una vez que entra en un case, sigue ejecutando los siguientes (fallthrough). Usá break para evitarlo.

----------------------------------------------------------

## Buenas prácticas

✅ Nombrar variables con significado
✅ Indentar correctamente
✅ Comentar tu código
✅ Escribir código limpio y modular
✅ No repetir código: usar funciones
✅ Evitar nombres como x, y si no es necesario

📘 ¿Cómo seguir practicando?
Escribir pequeños programas: calculadora, conversor de unidades, etc.

Hacer ejercicios de lógica con bucles y condiciones.

Leer código ajeno y tratar de entenderlo.

Usar plataformas como HackerRank o Codeforces (modo principiante).
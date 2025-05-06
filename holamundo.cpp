#include <iostream> //Incluye los flujos de trabajo de C++
using namespace std;

int numero; //Declarar la variable o nombrar la variable

int numero2 = 5; //Asignarle un valor a la variable

int main()

{

  cout << "Hola mundo";

  return 0;
}

// En C++, la función main() se declara con un tipo de retorno int porque así lo establece el estándar del lenguaje. El valor entero que retorna main se utiliza para indicar el resultado del programa al sistema operativo o entorno que lo ejecuta.

/*
¿Por qué int?
El valor de retorno de main() le dice al sistema operativo si el programa terminó correctamente o con errores. Esta es la convención:

return 0; → El programa terminó correctamente.

return 1; o cualquier otro valor distinto de 0 → Ocurrió algún error o finalización anormal.


Antes de sumergirnos en las profundidades de las funcionalidades del espacio de nombres std, es esencial comprender su definición.

STD en C++ se refiere a "Standard," y este espacio de nombres encapsula una variedad de elementos fundamentales que forman parte del estándar del lenguaje.

Este componente esencial evita conflictos de nombres, facilitando la integración de diversas bibliotecas y el desarrollo de código limpio y organizado.

cout = significa Console Output, C de console y out de output, seria como salida en consola
cin = significa Console Input, C de console y in de input.

--------------------------------------------------------------------

<< : Operador de inserción

En C++, el operador << tiene dos usos principales dependiendo del contexto:

✅ 1. Con std::cout → Operador de salida (output)
Este es el uso más común para principiantes. Se llama operador de inserción porque "inserta" datos en la consola.

Ejemplo:


std::cout << "Hola mundo" << std::endl;

"Hola mundo" se inserta en la salida estándar (la consola).

<< conecta varias cosas. Podés escribir:

std::cout << "El resultado es: " << 42 << std::endl;

| Uso            | Significado                   | Contexto          |
| -------------- | ----------------------------- | ----------------- |
| `std::cout <<` | Mostrar datos en la consola   | Programas comunes |
| `x << y`       | Desplazar bits a la izquierda | Bajo nivel / bits |

--------------------------------------------------------------------------------------------------------------------------

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

🧰 4. Otros tipos útiles (más avanzados)

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

BUCLES:

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

 */
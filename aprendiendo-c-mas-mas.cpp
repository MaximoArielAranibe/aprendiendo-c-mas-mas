#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Función principal del programa
int main() {

    // ------------------------------------------------------
    // Parte 1: Introducción a C++ y tipos de datos
    // ------------------------------------------------------

    // Tipos de datos primitivos
    cout << "1. Tipos de Datos Primitivos" << endl;
    cout << "----------------------------------" << endl;

    // Enteros
    int edad = 22; // Tipo int
    short x = 1000; // Tipo short
    long y = 1000000; // Tipo long
    long long z = 123456789012; // Tipo long long
    unsigned int a = 100; // Tipo unsigned int
    cout << "Edad: " << edad << endl;

    // Caracteres
    char letra = 'A'; // Tipo char
    cout << "Letra: " << letra << endl;

    // Booleanos
    bool vivo = true; // Tipo bool
    cout << "Vivo: " << vivo << endl;

    // Decimales
    float pi = 3.14f; // Tipo float
    double e = 2.7182818; // Tipo double
    long double z2 = 3.14159; // Tipo long double
    cout << "Pi: " << pi << ", e: " << e << ", Pi largo: " << z2 << endl;

    // Tipo cadena de texto
    string nombre = "Maximo"; // Tipo string
    cout << "Nombre: " << nombre << endl;

    // ------------------------------------------------------
    // Parte 2: Operadores y Modificadores de Tipo
    // ------------------------------------------------------

    // Operadores
    cout << "\n2. Operadores" << endl;
    cout << "----------------------------------" << endl;
    int division = 10 / 3;   // División
    cout << "División de 10 / 3: " << division << endl;

    int modulo = 10 % 3;     // Módulo
    cout << "Módulo de 10 % 3: " << modulo << endl;

    // Modificadores de tipo
    const int diasEnLaSemana = 7; // Constante
    unsigned int edad2 = 25; // sin signo
    cout << "Días en la semana: " << diasEnLaSemana << ", Edad: " << edad2 << endl;

    // ------------------------------------------------------
    // Parte 3: Bucle While
    // ------------------------------------------------------

    // Bucle while
    cout << "\n3. Bucle While" << endl;
    cout << "----------------------------------" << endl;
    int i = 1;
    while (i <= 5) {
        cout << "Número: " << i << endl;
        i++;
    }

    // ------------------------------------------------------
    // Parte 4: Bucle Do-While
    // ------------------------------------------------------

    // Bucle Do-While
    cout << "\n4. Bucle Do-While" << endl;
    cout << "----------------------------------" << endl;
    bool masaConGrumos = true;
    int vecesBatidas = 0;
    do {
        cout << "Batiendo la masa, " << vecesBatidas + 1 << " vez(s)." << endl;
        vecesBatidas++;
        if (vecesBatidas >= 3) {
            masaConGrumos = false;
        }
    } while (masaConGrumos);

    cout << "¡La masa está lista para hornear!" << endl;

    // ------------------------------------------------------
    // Parte 5: Bucle For
    // ------------------------------------------------------

    // Bucle for
    cout << "\n5. Bucle For" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Número (For): " << i << endl;
    }

    // ------------------------------------------------------
    // Parte 6: Ejemplo Interactivo con While
    // ------------------------------------------------------

    // Ejemplo interactivo con While
    cout << "\n6. Ejemplo Interactivo" << endl;
    cout << "----------------------------------" << endl;
    char respuesta;
    int veces = 1;

    cout << "¿Quieres continuar? (s = sí / n = no): ";
    cin >> respuesta;

    while (respuesta != 'n') {
        cout << "Repetición número " << veces << endl;
        veces++;
        cout << "¿Quieres continuar? (s = sí / n = no): ";
        cin >> respuesta;
    }

    cout << "Has salido del bucle. ¡Hasta luego!" << endl;

    // ------------------------------------------------------
    // Parte 7: Operaciones con Funciones Matemáticas
    // ------------------------------------------------------

    // Ejemplo de operaciones matemáticas con funciones
    cout << "\n7. Funciones Matemáticas" << endl;
    cout << "----------------------------------" << endl;
    double num1 = 16;
    double raizCuadrada = sqrt(num1); // Raíz cuadrada
    cout << "Raíz cuadrada de " << num1 << " es: " << raizCuadrada << endl;

    double potencia = pow(2, 3); // Potencia
    cout << "2 elevado a 3 es: " << potencia << endl;

    double absoluto = fabs(-7.3); // Valor absoluto
    cout << "Valor absoluto de -7.3 es: " << absoluto << endl;

    double seno = sin(M_PI / 2); // Seno
    cout << "Seno de 90° es: " << seno << endl;

    double coseno = cos(M_PI); // Coseno
    cout << "Coseno de 180° es: " << coseno << endl;

    // ------------------------------------------------------
    // Parte 8: Conclusión y Tips Finales
    // ------------------------------------------------------

    cout << "\n8. Conclusión y Consejos" << endl;
    cout << "----------------------------------" << endl;
    cout << "¡Felicitaciones! Has aprendido sobre tipos de datos, operadores, bucles y operaciones matemáticas en C++." << endl;
    cout << "Recuerda practicar mucho, ¡la práctica es la clave para dominar C++!" << endl;

    return 0;
}

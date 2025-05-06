#include <iostream>
using namespace std;

/*
📚 Estructura básica de switch en C++:

switch (expresión) {
    case valor1:
        // Código si expresión == valor1
        break;
    case valor2:
        // Código si expresión == valor2
        break;
    default:
        // Código si ningún case coincide
}

✅ Tips:
- La expresión debe ser int, char o enum.
- Usar 'break' evita que se ejecuten los siguientes case.
- 'default' es opcional, pero útil como "else".
*/

int main() {
    int opcion;

    // 📋 Mostrar menú de opciones
    cout << "📋 Menú de opciones:\n";
    cout << "1. Saludar\n";
    cout << "2. Mostrar edad\n";
    cout << "3. Salir\n";
    cout << "Elige una opción: ";
    cin >> opcion;

    // 🔀 Estructura switch para manejar la elección
    switch (opcion) {
        case 1:
            cout << "👋 ¡Hola, Maximo!" << endl;
            break;
        case 2:
            cout << "🧓 Tenés 23 años." << endl;
            break;
        case 3:
            cout << "🚪 Saliendo del programa..." << endl;
            break;
        default:
            cout << "❌ Opción inválida. Intentá de nuevo." << endl;
    }

    return 0;
}



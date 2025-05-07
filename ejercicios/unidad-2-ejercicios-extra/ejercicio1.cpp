#include <iostream>
using namespace std;

int main()
{
  char opcion;

  do
  {
    cout << "\nMenu de opciones:\n";
    cout << "a. Dada una cadena, imprimir las letras en las posiciones pares\n";
    cout << "b. Dado un número, imprimir la suma de sus digitos\n";
    cout << "c. Salir del programa\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;

    switch (opcion)
    {
      case 'a': {
        string cadena;
        cout << "Ingrese una cadena: ";
        cin >> cadena;

        cout << "Letras en posiciones pares: ";
        for (int i = 0; i < cadena.length(); i++) {
          if (i % 2 == 0) {
            cout << cadena[i];
          }
        }
        cout << endl;
        break;
      }

      case 'b': {
        int numero;
        cout << "Ingrese un número: ";
        cin >> numero;

        int suma = 0;
        while (numero != 0) {
          suma += numero % 10;
          numero /= 10;
        }
        cout << "Suma de los dígitos: " << suma << endl;
        break;
      }

      case 'c':
        cout << "Saliendo del programa..." << endl;
        break;

      default:
        cout << "Opción no válida. Intente de nuevo.\n";
        break;
    }

  } while (opcion != 'c');

  return 0;
}

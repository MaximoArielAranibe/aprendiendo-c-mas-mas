#include <iostream>
using namespace std;

int main()
{

  string color; // Declaramos nuestra variable llamada color, la cual despues le guardaremos el dato que nos de el usuario.

  cout << "Ingresa un color:\n"; //con \n hacemos un salto de linea
  cin >> color;

  if (color == "azul") // Este if dice, si el color es igual a "azul" entonces imprime "Tu color es azul"
  {
    cout << "Tu color es azul";
  }
  else
  {
    cout << "Tu color no es azul"; // Si la condicion no es igual a "azul" imprime "Tu color no es azul"
  };
};
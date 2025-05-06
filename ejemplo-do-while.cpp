#include <iostream>
using namespace std;

int main() {
    bool masaConGrumos = true;
    int vecesBatidas = 0;

    do {
        cout << "🔄 Batiendo la masa..." << endl;
        vecesBatidas++;

        // Simulamos que después de 3 veces, ya no hay grumos
        if (vecesBatidas >= 3) {
            masaConGrumos = false;
        }

    } while (masaConGrumos);

    cout << "✅ La masa ya no tiene grumos. ¡Lista para usar!" << endl;

    system("pause");

    return 0;
}

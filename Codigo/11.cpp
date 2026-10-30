#include <iostream>
using namespace std;

int main() {
    const int CLAVE_CORRECTA = 1234;
    int clave, intentos = 0;

    cout << "Ingrese la clave numerica: ";
    cin >> clave;
    intentos++;

    while (clave != CLAVE_CORRECTA) {
        cout << "Clave incorrecta. Intente nuevamente.\n";

        cout << "Ingrese la clave numerica: ";
        cin >> clave;

        intentos++;
    }

    cout << "Acceso permitido.\n";
    cout << "Numero de intentos: " << intentos << endl;

    return 0;
}
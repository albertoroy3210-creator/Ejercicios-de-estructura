#include <iostream>
using namespace std;

int main() {
    double valor;
    int validos = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la medicion " << i + 1
             << " (999 para terminar): ";
        cin >> valor;

        if (valor == 999) {
            break;
        }

        if (valor < 0) {
            cout << "Valor negativo: se omite.\n";
            continue;
        }

        validos++;
    }

    cout << "Valores validos procesados: "
         << validos << endl;

    return 0;
}
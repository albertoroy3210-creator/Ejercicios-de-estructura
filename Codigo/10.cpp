#include <iostream>
using namespace std;

int main() {
    double datos[10], suma = 0, media;
    int contador = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la medicion " << i + 1 << ": ";
        cin >> datos[i];

        suma += datos[i];
    }

    media = suma / 10;

    for (int i = 0; i < 10; i++) {
        if (datos[i] > media) {
            contador++;
        }
    }

    cout << "Media aritmetica: " << media << endl;
    cout << "Observaciones por encima de la media: "
         << contador << endl;

    return 0;
}
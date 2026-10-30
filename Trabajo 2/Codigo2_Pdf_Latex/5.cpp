#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> pila;
    int opcion;
    string accion;

    do {
        cout << "\n--- HISTORIAL DE ACCIONES ---\n";
        cout << "1. Registrar accion\n";
        cout << "2. Deshacer accion\n";
        cout << "3. Mostrar accion en el tope\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                cout << "Ingrese la accion: ";
                getline(cin, accion);
                pila.push(accion);
                cout << "Accion registrada.\n";
                break;

            case 2:
                if (!pila.empty()) {
                    cout << "Deshaciendo: "
                         << pila.top() << endl;
                    pila.pop();
                }
                else {
                    cout << "No hay acciones para deshacer.\n";
                }
                break;

            case 3:
                if (!pila.empty()) {
                    cout << "Accion en el tope: "
                         << pila.top() << endl;
                }
                else {
                    cout << "El historial esta vacio.\n";
                }
                break;

            case 4:
                cout << "Saliendo del programa.\n";
                break;

            default:
                cout << "Opcion no valida.\n";
        }

    } while (opcion != 4);

    return 0;
}
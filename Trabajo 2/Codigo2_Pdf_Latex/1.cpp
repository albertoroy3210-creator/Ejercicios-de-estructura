#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    int numero;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;
        pila.push(numero);
    }

    cout << "\nElementos desapilados: ";

    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }

    return 0;
}
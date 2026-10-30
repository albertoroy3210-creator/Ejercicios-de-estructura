#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> pila;
    string expresion;
    bool correcto = true;

    cout << "Ingrese una expresion: ";
    getline(cin, expresion);

    for (char caracter : expresion) {
        if (caracter == '(') {
            pila.push(caracter);
        }
        else if (caracter == ')') {
            if (pila.empty()) {
                correcto = false;
                break;
            }
            pila.pop();
        }
    }

    if (!pila.empty()) {
        correcto = false;
    }

    if (correcto) {
        cout << "Los parentesis estan balanceados.";
    }
    else {
        cout << "Los parentesis NO estan balanceados.";
    }

    return 0;
}
#include <stdio.h>

int main(void) {
    float medicion, perdida;
    int valorEntero;

    printf("Ingrese la medicion decimal: ");
    scanf("%f", &medicion);

    valorEntero = (int)medicion;
    perdida = medicion - valorEntero;

    printf("Valor original: %.2f\n", medicion);
    printf("Valor entero: %d\n", valorEntero);
    printf("Parte decimal perdida: %.2f\n", perdida);

    return 0;
}
#include <stdio.h>

int main(void) {
    int observaciones;
    float porcentaje;

    printf("Numero de observaciones validas: ");
    scanf("%d", &observaciones);

    printf("Porcentaje de datos completos: ");
    scanf("%f", &porcentaje);

    if (observaciones >= 100 &&
        porcentaje >= 70.0 &&
        porcentaje <= 100.0) {

        printf("El conjunto de datos puede ser analizado.\n");

    } else {
        printf("El conjunto de datos no cumple las condiciones.\n");
    }

    return 0;
}
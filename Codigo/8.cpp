#include <stdio.h>

int main(void) {
    int edad, validado;

    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    printf("Registro validado? (1=Si, 0=No): ");
    scanf("%d", &validado);

    if (edad >= 18 && validado == 1) {
        printf("La observacion puede incorporarse.\n");
    } else {
        printf("La observacion no puede incorporarse.\n");
    }

    return 0;
}
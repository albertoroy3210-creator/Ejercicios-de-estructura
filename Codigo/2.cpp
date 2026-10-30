#include <stdio.h>

int main(void) {
    int identificador, edad, valido;
    float promedio;
    char categoria;

    printf("Identificador: ");
    scanf("%d", &identificador);

    printf("Edad: ");
    scanf("%d", &edad);

    printf("Valor promedio: ");
    scanf("%f", &promedio);

    printf("Categoria (una letra): ");
    scanf(" %c", &categoria);

    printf("Registro valido? (1=Si, 0=No): ");
    scanf("%d", &valido);

    printf("\n--- DATOS DE LA OBSERVACION ---\n");
    printf("Identificador: %d\n", identificador);
    printf("Edad: %d\n", edad);
    printf("Promedio: %.2f\n", promedio);
    printf("Categoria: %c\n", categoria);
    printf("Estado: %s\n",
           valido == 1 ? "Valido" : "No valido");

    return 0;
}
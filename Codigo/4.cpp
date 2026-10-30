#include <stdio.h>

int main(void) {
    int a, b;

    printf("Ingrese el primer entero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo entero: ");
    scanf("%d", &b);

    printf("\nSuma: %d\n", a + b);
    printf("Diferencia: %d\n", a - b);
    printf("Producto: %d\n", a * b);

    if (b != 0) {
        printf("Division entera: %d\n", a / b);
        printf("Residuo: %d\n", a % b);
    } else {
        printf("No se puede dividir entre cero.\n");
    }

    return 0;
}
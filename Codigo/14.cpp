#include <stdio.h>

int main(void) {
    int n;
    long long operacionesLineales = 0;
    long long operacionesCuadraticas = 0;

    printf("Ingrese el numero de elementos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n debe ser un entero positivo.\n");
        return 1;
    }

    /* Procedimiento 1: un recorrido */
    for (int i = 0; i < n; i++) {
        operacionesLineales++;
    }

    /* Procedimiento 2: dos ciclos anidados */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            operacionesCuadraticas++;
        }
    }

    printf("Operaciones del primer procedimiento: %lld\n",
           operacionesLineales);
    printf("Complejidad aproximada: O(n)\n");

    printf("Operaciones del segundo procedimiento: %lld\n",
           operacionesCuadraticas);
    printf("Complejidad aproximada: O(n^2)\n");

    return 0;
}
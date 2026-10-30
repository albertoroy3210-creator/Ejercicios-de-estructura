#include <stdio.h>

int main(void) {
    int registros = 4;

    printf("Valor inicial: %d\n", registros);

    registros += 3;
    printf("Despues de incrementar en 3: %d\n",
           registros);

    registros *= 2;
    printf("Despues de duplicar: %d\n", registros);

    return 0;
}
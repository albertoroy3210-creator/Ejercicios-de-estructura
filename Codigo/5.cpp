#include <stdio.h>

int main(void) {
    int registros, nodos;

    printf("Numero total de registros: ");
    scanf("%d", &registros);

    printf("Numero de nodos: ");
    scanf("%d", &nodos);

    if (registros >= 0 && nodos > 0) {
        printf("Registros por nodo: %d\n",
               registros / nodos);

        printf("Registros sin distribuir: %d\n",
               registros % nodos);
    } else {
        printf("Ingrese registros no negativos y nodos mayores que cero.\n");
    }

    return 0;
}
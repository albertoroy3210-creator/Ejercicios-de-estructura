#include <stdio.h>

int main(void) {
    float horas, tarifa, costo;

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese el costo por hora: ");
    scanf("%f", &tarifa);

    costo = horas * tarifa;

    printf("\n--- RESUMEN ---\n");
    printf("Horas trabajadas: %.2f\n", horas);
    printf("Tarifa por hora: S/ %.2f\n", tarifa);
    printf("Costo total: S/ %.2f\n", costo);

    return 0;
}
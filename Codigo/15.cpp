#include <stdio.h>

float calcular_promedio(float a, float b, float c) {
    return (a + b + c) / 3.0f;
}

int contar_superiores(float a, float b, float c,
                      float promedio) {
    int contador = 0;

    if (a > promedio) contador++;
    if (b > promedio) contador++;
    if (c > promedio) contador++;

    return contador;
}

int main(void) {
    float m1, m2, m3, promedio;
    int cantidad;

    printf("Ingrese la primera medicion: ");
    scanf("%f", &m1);

    printf("Ingrese la segunda medicion: ");
    scanf("%f", &m2);

    printf("Ingrese la tercera medicion: ");
    scanf("%f", &m3);

    promedio = calcular_promedio(m1, m2, m3);

    cantidad = contar_superiores(m1, m2, m3, promedio);

    printf("Promedio: %.2f\n", promedio);
    printf("Mediciones por encima del promedio: %d\n",
           cantidad);

    return 0;
}
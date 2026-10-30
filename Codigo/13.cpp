#include <stdio.h>

int main(void) {
    int edades[10], suma = 0;
    int minima, maxima, superiores = 0;
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Edad del participante %d: ", i + 1);
        scanf("%d", &edades[i]);

        if (i == 0) {
            minima = maxima = edades[i];
        } else {
            if (edades[i] < minima) {
                minima = edades[i];
            }

            if (edades[i] > maxima) {
                maxima = edades[i];
            }
        }

        suma += edades[i];
    }

    media = (float)suma / 10;

    for (int i = 0; i < 10; i++) {
        if (edades[i] > media) {
            superiores++;
        }
    }

    printf("\nEdad minima: %d\n", minima);
    printf("Edad maxima: %d\n", maxima);
    printf("Media de edades: %.2f\n", media);
    printf("Participantes por encima de la media: %d\n",
           superiores);

    return 0;
}
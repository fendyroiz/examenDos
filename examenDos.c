#include <stdio.h>

// Función para encontrar las posiciones de dos componentes que sumen el número N
void Suma(int vector[], int longitud, int numero) {
    int encontradas = 0; // Variable para contar las combinaciones encontradas

    for (int i = 0; i < longitud - 1; i++) {
        for (int j = i + 1; j < longitud; j++) {
            if (vector[i] + vector[j] == numero) {
                printf("[%d] y [%d]\n", i, j);
                encontradas++;
            }
        }
    }

    if (encontradas == 0) {
        printf("No se encontraron combinaciones que sumen %d.\n", numero);
    }
}
int main() {
    int longitud;

    printf("Ingrese la longitud del vector: ");
    scanf("%d", &longitud);

    int vector[longitud];

    printf("Ingrese los %d digitos del vector:\n", longitud);
    for (int i = 0; i < longitud; i++) {
        scanf("%d", &vector[i]);
    }

    printf("Vector original: ");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    int numero;
    printf("Ingrese el numero que desea encontrar: ");
    scanf("%d", &numero);

    printf("Resultado:\n");
    Suma(vector, longitud, numero);

    return 0;
}


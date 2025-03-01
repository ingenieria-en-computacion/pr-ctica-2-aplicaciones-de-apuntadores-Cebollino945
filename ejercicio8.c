// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    int cambiar = *a;
    *a = *b;
    *b = cambiar;
    // Implementar intercambio aquí
}

int main() {
    int arr[] = {5, 10};
    printf("Antes del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    // Código para llamar a la función y mostrar los valores intercambiados
    intercambiar(&arr[0], &arr[1]);

    printf("Despues del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    return 0;
}

// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    for (int i = 0; i < tamaño; i++) {
        if (*(arr + i) == valor) {
            return (arr + i); 
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    int valorBuscado = 30;

    int *resultado = buscarElemento(arr, tamaño, valorBuscado);

    if (resultado != NULL) {
        printf("Elemento %d encontrado en la direccion de memoria: %p\n", valorBuscado, resultado);
    } else {
        printf("Elemento %d no encontrado en el arreglo.\n", valorBuscado);
    }
    return 0;
}

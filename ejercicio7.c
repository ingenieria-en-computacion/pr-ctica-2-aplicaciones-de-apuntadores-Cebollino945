// 7. Accediendo a la Memoria
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    for(int i=0; i<5; i++)
    printf("la direccion de memoria del areglo %d es: %p \n",arr[i],arr[i] );
    // Código para imprimir direcciones de memoria aquí
    return 0;
}

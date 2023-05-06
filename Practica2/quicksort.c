#include <stdio.h>
#include <stdlib.h>
#include "global.h"
#define LENGTH 10000

int main(int argc, char const *argv[])
{
    int arregloDesordenado[LENGTH];
    for (int i = 0; i < LENGTH; i++)
    {
        arregloDesordenado[i] = rand();
    }
    printf("Array desordenado:");
    imprimirArreglo(arregloDesordenado, LENGTH);
    printf("\n");
    quickSort(arregloDesordenado, 0, LENGTH - 1);
    printf("Array ordenado: ");
    imprimirArreglo(arregloDesordenado, LENGTH);
    return 0;
}

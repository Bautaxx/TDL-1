#include <stdio.h>
#include <stdlib.h>
#define LENGTH 5

void swapArr(int[]);
void swap(int *element1, int *element2);
void imprimirArreglo(int arr[], int length);

int main(int argc, char const *argv[])
{
    int arreglo[LENGTH];
    for (int i = 0; i < LENGTH; i++)
    {
        arreglo[i] = rand();
    }
    imprimirArreglo(arreglo, LENGTH);
    swapArr(arreglo);
    imprimirArreglo(arreglo, LENGTH);

    return 0;
}

void swapArr(int arr[])
{
    for (int i = 0; i < LENGTH / 2; i++)
    {
        swap(&arr[i], &arr[(LENGTH - i) - 1]);
    }
}

void swap(int *element1, int *element2)
{
    int hold = *element1;
    *element1 = *element2;
    *element2 = hold;
}

void imprimirArreglo(int arr[], int length)
{
    int i;
    printf("[");
    for (i = 0; i < length; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("]");
}
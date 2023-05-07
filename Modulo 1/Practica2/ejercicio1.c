#include <stdio.h>
#include <stdlib.h>
#define DIMF 50
void imprimirArreglo (int[], int);
int main(int argc, char const *argv[])
{
    int arr_aleatorio[DIMF], i;
    for (i = 0; i < DIMF; i++)
    {
        arr_aleatorio[i] = rand();
    }
    imprimirArreglo(arr_aleatorio, DIMF);
    
    
     
    return 0;
}

void imprimirArreglo(int arr[], int length)
{   int i;
    printf("[");
    for(i = 0; i < length; i++){
        printf("%d, ", arr[i]);
    }
    printf("]");
}

#include <stdlib.h>
#include <stdio.h>
#define LENGTH 3

typedef enum
{
    DIG,
    MAY,
    MIN
} tipo;

void procesar(int[], char);

int main(int argc, char const *argv[])
{
    int cant[LENGTH] = {0};
    FILE *f;
    char actual;
    int exito;

    f = fopen("textos/ej2.txt", "r");
    if (f == NULL)
    {
        printf("\nError al abrir archivo\n");
        return 1;
    }
    
    while (fscanf(f, "%c", &actual) != EOF)
    {
        printf("%c", actual);
        procesar(cant, actual);
    }
    
    fclose(f);
    printf("\ndigitos: %d\n", cant[DIG]);
    printf("minusculas: %d\n", cant[MIN]);
    printf("mayusculas: %d\n", cant[MAY]);
    return 0;
}

void procesar(int arr[], char act)
{
    if ((act >= 'a') && (act <= 'z'))
    {
        arr[MIN]++;
    }
    else if ((act >= 'A') && (act <= 'Z'))
    {
        arr[MAY]++;
    }
    else if ((act >= '0') && (act <= '9'))
    {
        arr[DIG]++;
    }
}

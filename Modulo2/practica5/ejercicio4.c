
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    FILE *f;
    int codigo;
    float monto, total = 0;

    f = fopen("textos/apuestas.txt", "r");
    if (f == NULL)
    {
        printf("\nError al abrir archivo\n");
        return 1;
    }
    
    while (fscanf(f, "%d|%f;", &codigo, &monto) == 2) //Para evitar leer algo que no tiene el formato adecuado
    {
        total += monto;
    }
    fclose(f);
    printf("total apostado: $%f", total);
    return 0;
}
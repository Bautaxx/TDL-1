#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    FILE *f;
    int actual, max = 0;

    f = fopen("textos/precipitaciones.txt", "r");
    if (f == NULL)
    {
        printf("\nError al abrir archivo\n");
        return 1;
    }
    
    while (fscanf(f, "%d-", &actual) != EOF)
    {
        if(actual > max)max = actual;
    }
    fclose(f);
    printf("Precipitacion maxima: %d", max);
    return 0;
}


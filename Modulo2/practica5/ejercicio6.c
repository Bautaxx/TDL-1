#include <stdlib.h>
#include <stdio.h>
#define CAMPOS 8
#define STRLEN 50

typedef enum
{
    acf,
    acv,
    acc,
    azr,
    ph,
    sf,
    ah,
    cl
} tipos;

typedef struct vinosStruct
{
    float min;
    float max;
    float total;
    float act;
} vinosData;

void inicializar(vinosData  arr[]){
    int i;
    for(i = 0; i < CAMPOS; i++){
        arr[i].min = 1000000000;
        arr[i].max = 0;
        
    }
}

int main(int argc, char const *argv[])
{
    FILE *f;
    // float min, max = 0, , acf, acv, acc, azr, ph, sf, ah, cl;
    vinosData total[CAMPOS];
    char undef[STRLEN];
    inicializar(total);
    char a[100];
    int i = 0;

    f = fopen("textos2/vinos.csv", "r");
    if (f == NULL)
    {
        printf("\nError al abrir archivo\n");
        return 1;
    }
    fgets(a, 100, f);
    puts(a);
    while (fscanf(f, "%f;%f;%f;%f;%f;%f;%f;%f;%s\n", &total[acf].act, &total[acv].act, &total[acc].act, &total[azr].act, &total[ph].act, &total[sf].act, &total[ah].act, &total[cl].act, undef) == 9) // Para evitar leer algo que no tiene el formato adecuado
    {
        for (i = 0; i < CAMPOS; i++)
        {
            if (total[i].act > total[i].max)
                total[i].max = total[i].act;
            else if (total[i].act < total[i].min)
                total[i].min = total[i].act;
            total[i].total += total[i].act;
        }
    }

    fclose(f);

    return 0;
}
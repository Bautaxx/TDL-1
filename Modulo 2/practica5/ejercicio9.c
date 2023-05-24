#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTR 50
#define CANTJUG 2

typedef struct
{
    char nombre[MAXSTR];
    char apellido[MAXSTR];
    unsigned edad;
    unsigned titulos;
    unsigned ranking;
    float fortuna;
} datost;

void leer_datos(datost *aux);
void lectura_dat(FILE **f);
void max(FILE *f);

int main(int argc, char const *argv[])
{
    // Creamos archivo binario
    FILE *f;
    f = fopen("binarios/tenistas.dat", "wb+");

    lectura_dat(&f);
    fseek(f, 0, SEEK_SET);
    max(f);
    return 0;
}

void lectura_dat(FILE **f)
{
    int i;
    datost aux;
    for (i = 0; i < CANTJUG; i++)
    {
        leer_datos(&aux);
        fwrite(&aux, sizeof(datost), 1, *f);
    }
}

void leer_datos(datost *aux)
{
    scanf("%s", aux->nombre);
    fflush(stdin);
    scanf("%s", aux->apellido);
    fflush(stdin);
    scanf("%u", &(aux->edad));
    fflush(stdin);
    scanf("%u", &(aux->titulos));
    fflush(stdin);
    scanf("%u", &(aux->ranking));
    fflush(stdin);
    scanf("%f", &(aux->fortuna));
}

void max(FILE *f)
{
    datost aux;
    int maxTitulos = 0, i;
    char nombre[MAXSTR], apellido[MAXSTR];

    for (i = 0; i < CANTJUG; i++)
    {
        fread(&aux, sizeof(datost), 1, f);
        if (aux.titulos > maxTitulos)
        {
            maxTitulos = aux.titulos;
            strcpy(nombre, aux.nombre);
            strcpy(apellido, aux.apellido);
        }
    }

    printf("%s %s es el jugador con mas titulos", nombre, apellido);
}
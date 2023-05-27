#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTR 50

typedef struct
{
    char nombre[MAXSTR];
    char apellido[MAXSTR];
    unsigned edad;
    unsigned titulos;
    unsigned ranking;
    float fortuna;
} datost;

int actualizarRanking(char *nombre, char *apellido, int nuevoRanking, FILE *f);


int main(int argc, char const *argv[])
{
    FILE *f;
    f = fopen("tenistas", "rb+");
    if (f == NULL)
    {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    int exito;
    printf("%d", actualizarRanking("Hernan", "Pereze", 6, f));
    return 0;
}

int actualizarRanking(char *nombre, char *apellido, int nuevoRanking, FILE *f)
{
    datost aux;
    fread(&aux, sizeof(datost), 1, f);
    int actualizacion = 0;
    int tamanio = sizeof(datost);
    while (!feof(f) && !actualizacion)
    {
        if (!strcmp(aux.nombre,nombre) && !strcmp(aux.apellido, apellido))
        {
            aux.ranking = nuevoRanking;
            fseek(f, - tamanio, SEEK_CUR);
            fwrite(&aux, sizeof(datost), 1, f);
            actualizacion = 1;
        }
        fread(&aux, sizeof(datost), 1, f);
    }
    return actualizacion;
}

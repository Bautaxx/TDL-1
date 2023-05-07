#include <stdio.h>
#define PARLENGTH 2
#define RECTLENGTH 4

typedef union dimensiones
{
    struct
    {
        int x;
        int y;
        int ancho;
        int alto;
    } separadas;

    struct
    {
        int puntoUno[PARLENGTH];
        int puntoDos[PARLENGTH];
    } paresOrdenados;
    int rectangulo[RECTLENGTH];
} dim;

int main(int argc, char const *argv[])
{
    dim dimensionPrueba;
    dimensionPrueba.separadas.x = 10;
    dimensionPrueba.separadas.y = 15;
    dimensionPrueba.separadas.ancho = 100;
    dimensionPrueba.separadas.alto = 54;
    printf("Dimensiones %d, %d, %d, %d", dimensionPrueba.separadas.x, dimensionPrueba.separadas.y, dimensionPrueba.separadas.ancho, dimensionPrueba.separadas.alto);
    return 0;
}

#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define LENGTH 50
#define CARXPALO 12

struct TipoCarta
{
    unsigned num : 4;
    unsigned palo : 3; // Extra representacion para los comodines
};
typedef struct TipoCarta carta;

void mostrarMazo(carta mazo[], int dim);
void barajarMazo(carta[], int, int);

void swap(carta *element1, carta *element2)
{
    carta hold = *element1;
    *element1 = *element2;
    *element2 = hold;
}

int main(int argc, char const *argv[])
{
    enum
    {
        ORO = 1,
        COPAS,
        BASTO,
        ESPADA,
        COMODIN
    } palo;
    carta mazoCartas[LENGTH];
    int j = 0;
    for (palo = ORO; palo <= ESPADA; palo++)
    {
        for (unsigned i = 1; i <= CARXPALO; i++)
        {
            mazoCartas[j].num = i;
            mazoCartas[j].palo = palo;
            j++;
        }
    }
    // Cargo comodines
    mazoCartas[48].palo = COMODIN;
    mazoCartas[48].num = 1;
    mazoCartas[49].palo = COMODIN;
    mazoCartas[49].num = 2;

    printf("Mazo sin mezclar: \n");
    mostrarMazo(mazoCartas, LENGTH);
    printf("Mazo mezclado: \n");
    barajarMazo(mazoCartas, LENGTH, 1000);
    mostrarMazo(mazoCartas, LENGTH);

    return 0;
}

void mostrarMazo(carta mazo[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d de %d\n", mazo[i].num, mazo[i].palo);
    }
}
void barajarMazo(carta mazo[], int dim, int randomness)
{
    srand(time(NULL));
    for (int i = 0; i < randomness; i++)
    {
        swap(&mazo[rand() % dim], &mazo[rand() % dim]);
    }
}

carta sacarCarta(carta mazo[], int carta){
    carta++; //Debido al index 0 de los arreglos
    return mazo[carta];
}
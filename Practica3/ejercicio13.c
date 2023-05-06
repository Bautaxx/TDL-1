#include <stdio.h>

typedef struct celularStruct
{
    unsigned vibrar : 1;
    unsigned linterna : 1;
    unsigned trasera : 1;
    unsigned frontal : 1;
    unsigned datos : 1;
    unsigned gps : 1;
    unsigned wifi : 1;
    unsigned bluetooth : 1;
} celular;

typedef enum bitsEnumeracion
{
    vibrar,
    linterna,
    trasera,
    frontal,
    datos,
    gps,
    wifi,
    bluetooth
} bitsEnum;

void prender(celular *celular, int corrimiento);


const celular todosPrendidos = {1, 1, 1, 1, 1, 1, 1, 1};
const celular todosApagados = {0, 0, 0, 0, 0, 0, 0, 0};

int main(int argc, char const *argv[])
{
    celular prueba = todosApagados;
    prender(&prueba, linterna);
    //No funciona printf("Celular: %u", (unsigned int)prueba);

    return 0;
}

void prender(celular *celular, int corrimiento)
{
    // Casteo celular a un int para trabajar con corrimiento de bits, en *ptr tengo el celular como un entero
    unsigned int *ptr = (unsigned int *)celular;
    *ptr |= (1 << corrimiento);
}